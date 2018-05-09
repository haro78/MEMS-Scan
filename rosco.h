#ifndef ROSCO_H
#define ROSCO_H

/** \file mems.h
 * Header file defining the librosco functions, structs, and enums.
 */

#include <stdint.h>
#include <stdbool.h>

#if defined(WIN32)
  #include <windows.h>
#else
  #include <pthread.h>
  #include <errno.h>
#endif

#define DEBUG_P

#ifdef DEBUG_P
  #define dprintf_err printf
#else
  #define dprintf_err
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define IAC_MAXIMUM 0xB4

/**
 * These general commands are used to request data and clear fault codes.
 */
enum mems_data_command
{
    MEMS_ReqData7D      = 0x7D,
    MEMS_ReqData80      = 0x80,
    MEMS_ClearFaults    = 0xCC,
    MEMS_Heartbeat      = 0xF4,
    MEMS_GetIACPosition = 0xFB,
	MEMS_ResetAdj		= 0x0F,
	MEMS_ResetECU		= 0xFA
};

/**
 * These commands are used to test actuators on the car.
 * Although some commands have on/off pairs (for controlling relays),
 * MEMS 1.6 (as fitted to the Mini SPi) will automatically shut off these
 * these actuators after a short period of time (< 1s). The "off" command,
 * if sent, will be acknowledged, but there is apparently no action taken.
 */
enum mems_actuator_command
{
	MEMS_FuelPumpOn     = 0x11,
    MEMS_FuelPumpOff    = 0x01,
    MEMS_PTCRelayOn     = 0x12,
    MEMS_PTCRelayOff    = 0x02,
    MEMS_ACRelayOn      = 0x13,
    MEMS_ACRelayOff     = 0x03,
    MEMS_PurgeValveOn   = 0x18,
    MEMS_PurgeValveOff  = 0x08,
    MEMS_O2HeaterOn     = 0x19,
    MEMS_O2HeaterOff    = 0x09,
    MEMS_BoostValveOn   = 0x1B,
    MEMS_BoostValveOff  = 0x0B,
    MEMS_Fan1On         = 0x1D,
    MEMS_Fan1Off        = 0x0D,
    MEMS_Fan2On         = 0x1E,
    MEMS_Fan2Off        = 0x0E,
	MEMS_Fan3On			= 0x6F,
	MEMS_Fan3Off		= 0x67,
	MEMS_WasteGateOn	= 0x1B,
	MEMS_WasteGateOff	= 0x0B,
    MEMS_TestInjectors  = 0xF7,
	MEMS_TestInjectorsMPi	= 0xEF,
    MEMS_FireCoil       = 0xF8,
    MEMS_OpenIAC        = 0xFD,
    MEMS_CloseIAC       = 0xFE,
	MEMS_AllActuatorsOff	= 0xF4,
     MEMS_FuelTrimPlus = 0x79,
     MEMS_FuelTrimMinus = 0x7A,
     MEMS_IdleDecayPlus = 0x89,
     MEMS_IdleDecayMinus = 0x8A,
     MEMS_IdleSpeedPlus = 0x91,
     MEMS_IdleSpeedMinus = 0x92,
	 MEMS_IgnitionAdvancePlus = 0x93,
     MEMS_IgnitionAdvanceMinus = 0x94
};

typedef enum mems_actuator_command actuator_cmd;

/**
 * Data sequence returned by the ECU in reply to the command 0x7D.
 */
typedef struct
{
  uint8_t bytes_in_frame;
  uint8_t ignition_switch;
  uint8_t throttle_angle;
  uint8_t uk6;
  uint8_t air_fuel_ratio;
  uint8_t fault_code0;
  uint8_t lambda_voltage;
  uint8_t lambda_sensor_frequency;
  uint8_t lambda_sensor_dutycycle;
  uint8_t lambda_sensor_status;
  uint8_t closed_loop;
  uint8_t long_term_fuel_trim;
  uint8_t short_term_fuel_trim;
  uint8_t carbon_canister_dutycycle;
  uint8_t fault_code1;
  uint8_t idle_base_pos;
  uint8_t uk7;
  uint8_t uk8;
  uint8_t ignition_advance2;
  uint8_t uk9;
  uint8_t idle_error2;
  uint8_t uk10;
  uint8_t fault_code4;
  uint8_t uk11;
  uint8_t uk12;
  uint8_t uk13;
  uint8_t uk14;
  uint8_t uk15;
  uint8_t uk16;
  uint8_t uk1A;
  uint8_t uk1B;
  uint8_t uk1C;
} mems_data_frame_7d;

/**
 * Data sequence returned by the ECU in reply to the command 0x80.
 */
typedef struct
{
    uint8_t bytes_in_frame;
    uint8_t engine_rpm_hi;
    uint8_t engine_rpm_lo;
    uint8_t coolant_temp;
    uint8_t ambient_temp;
    uint8_t intake_air_temp;
    uint8_t fuel_temp;
    uint8_t map_kpa;
    uint8_t battery_voltage;
    uint8_t throttle_pot;
    uint8_t idle_switch;
    uint8_t uk1;
    uint8_t park_neutral_switch;
    uint8_t dtc0;
    uint8_t dtc1;
    uint8_t idle_set_point;
    uint8_t idle_hot;
    uint8_t uk2;
    uint8_t iac_position;
    uint8_t idle_error_hi;
    uint8_t idle_error_lo;
    uint8_t ignition_advance_offset;
    uint8_t ignition_advance;
    uint8_t coil_time_hi;
    uint8_t coil_time_lo;
    uint8_t uk3;
    uint8_t uk4;
    uint8_t uk5;
} mems_data_frame_80;

/**
 * Compact structure containing only the relevant data from the ECU.
 */
typedef struct
{
    uint16_t engine_rpm;
    uint8_t coolant_temp;
    uint8_t ambient_temp;
    uint8_t intake_air_temp;
    uint8_t fuel_temp;
    uint8_t map_kpa;
    uint8_t battery_voltage;
    uint8_t throttle_pot;
    uint8_t idle_switch;
    uint8_t uk1;
    uint8_t park_neutral_switch;
    /**
     * Bit 0: Coolant temp sensor CCT fault (1)
     * Bit 1: Inlet air temp sensor CCT fault (2)
     * Bit 2: Fuel pump circuit fault (10)
     * Bit 3: Throttle pot circuit fault (16)
     */
    uint8_t fault_codes;
    uint8_t idle_set_point;
    uint8_t idle_hot;
    uint8_t uk2;
    uint8_t iac_position;
    uint16_t idle_error;
    uint8_t ignition_advance_offset;
    uint8_t ignition_advance;
    uint16_t coil_time;
    uint8_t uk3;
    uint8_t uk4;
    uint8_t uk5;
    //******dframe 7**********************************
    uint8_t ignition_switch;
    uint8_t throttle_angle;
    uint8_t uk6;
    uint8_t air_fuel_ratio;
    uint8_t dtc2;
    uint8_t lambda_voltage;
    uint8_t lambda_sensor_frequency;
    uint8_t lambda_sensor_dutycycle;
    uint8_t lambda_sensor_status;
    uint8_t closed_loop;
    uint8_t long_term_fuel_trim;
    uint8_t short_term_fuel_trim;
    uint8_t carbon_canister_dutycycle;
    uint8_t dtc3;
    uint8_t idle_base_pos;
    uint8_t uk7;
    uint8_t dtc4;
    uint8_t ignition_advance2;
    uint8_t idle_speed_offset;
    uint8_t idle_error2;
    uint8_t uk10;
    uint8_t dtc5;
    uint8_t uk11;
    uint8_t uk12;
    uint8_t uk13;
    uint8_t uk14;
    uint8_t uk15;
    uint8_t uk16;
    uint8_t uk1A;
    uint8_t uk1B;
    uint8_t uk1C;
    uint8_t dtc0;
    uint8_t dtc1;
	
}
mems_data;

/**
 * Major/minor/patch version numbers for this build of the library
 */
typedef struct
{
  //! Major version number
  uint8_t major;
  //! Minor version number
  uint8_t minor;
  //! Patch version number
  uint8_t patch;
} librosco_version;

/**
 * Contains information about the state of the current connection to the ECU.
 */
typedef struct
{
#if defined(WIN32)
    //! Descriptor for the serial port device
    HANDLE sd;
    //! Lock to prevent multiple simultaneous open/close/read/write operations
    HANDLE mutex;
#else
    //! Descriptor for the serial port device
    int sd;
    //! Lock to prevent multiple simultaneous open/close/read/write operations
    pthread_mutex_t mutex;
#endif
} mems_info;

void mems_init(mems_info* info);
bool mems_init_link(mems_info* info, uint8_t* d0_response_buffer);
void mems_cleanup(mems_info* info);
bool mems_connect(mems_info* info, const char* devPath);
void mems_disconnect(mems_info* info);
bool mems_is_connected(mems_info* info);
bool mems_read_raw(mems_info* info, mems_data_frame_80* frame80, mems_data_frame_7d* frame7d);
bool mems_read(mems_info* info, mems_data* data);
bool mems_read_iac_position(mems_info* info, uint8_t* position);
bool mems_move_iac(mems_info* info, uint8_t desired_pos);
bool mems_test_actuator(mems_info* info, actuator_cmd cmd, uint8_t* data);
bool mems_clear_faults(mems_info* info);
bool mems_reset_ECU(mems_info* info);
bool mems_reset_adjustments(mems_info* info);
bool mems_heartbeat(mems_info* info);

bool mems_fuel_trim_plus(mems_info* info,uint8_t* data);
bool mems_fuel_trim_minus(mems_info* info,uint8_t* data);
bool mems_idle_decay_plus(mems_info* info,uint8_t* data);
bool mems_idle_decay_minus(mems_info* info,uint8_t* data);
bool mems_idle_speed_plus(mems_info* info,uint8_t* data);
bool mems_idle_speed_minus(mems_info* info,uint8_t* data);
bool mems_ignition_advance_plus(mems_info* info,uint8_t* data);
bool mems_ignition_advance_minus(mems_info* info,uint8_t* data);
bool mems_interactive_mode(mems_info* info, uint8_t* response_buffer);
bool mems_Purge_Valve_On(mems_info* info,uint8_t* data);
bool mems_Purge_Valve_Off(mems_info* info,uint8_t* data);
bool mems_O2Heater_On(mems_info* info,uint8_t* data);
bool mems_O2Heater_Off(mems_info* info,uint8_t* data);
bool mems_Fan1_On(mems_info* info,uint8_t* data);
bool mems_Fan1_Off(mems_info* info,uint8_t* data);
bool mems_Fan2_On(mems_info* info,uint8_t* data);
bool mems_Fan2_Off(mems_info* info,uint8_t* data);
bool mems_Boost_Valve_On(mems_info* info,uint8_t* data);
bool mems_Boost_Valve_Off(mems_info* info,uint8_t* data);
librosco_version mems_get_lib_version();

/* Closing brace for 'extern "C"' */
#ifdef __cplusplus
}
#endif

#endif // MEMS_H

