#include <QCloseEvent>
#include <QMessageBox>
#include <QList>
#include <QDateTime>
#include <QDir>
#include <QHBoxLayout>
#include <QThread>
#include <QFileDialog>
#include <QDesktopWidget>
#include <QCryptographicHash>
#include <QGraphicsOpacityEffect>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qapplication.h>
#include <QLCDNumber>

MainWindow::MainWindow(QWidget* parent):QMainWindow(parent),
m_ui(new Ui::MainWindow),
m_memsThread(0),
m_mems(0), m_options(0), m_aboutBox(0), m_pleaseWaitBox(0), m_helpViewerDialog(0), m_actuatorTestsEnabled(false), m_adjustmentsEnabled(false), m_actuatorsOffEnabled(false)

{
  buildSpeedAndTempUnitTables();
  m_ui->setupUi(this);
  this->setWindowTitle(PROJECTNAME + QString(" ") +
      QString::number(VER_MAJOR) + "." +
      QString::number(VER_MINOR) + "." +
      QString::number(VER_PATCH));

  m_options = new OptionsDialog(this->windowTitle(), this);
  m_mems = new MEMSInterface(m_options->getSerialDeviceName());
  m_logger = new Logger(m_mems);

  connect(m_mems, SIGNAL(dataReady()), this, SLOT(onDataReady()));
  connect(m_mems, SIGNAL(connected()), this, SLOT(onConnect()));
  connect(m_mems, SIGNAL(disconnected()), this, SLOT(onDisconnect()));
  connect(m_mems, SIGNAL(readError()), this, SLOT(onReadError()));
  connect(m_mems, SIGNAL(readSuccess()), this, SLOT(onReadSuccess()));
  connect(m_mems, SIGNAL(failedToConnect(QString)), this, SLOT(onFailedToConnect(QString)));
  connect(m_mems, SIGNAL(interfaceThreadReady()), this, SLOT(onInterfaceThreadReady()));
  connect(m_mems, SIGNAL(notConnected()), this, SLOT(onNotConnected()));
  connect(m_mems, SIGNAL(gotEcuId(uint8_t *)), this, SLOT(onEcuIdReceived(uint8_t *)));
  connect(m_mems, SIGNAL(errorSendingCommand()), this, SLOT(onCommandError()));

  connect(m_mems, SIGNAL(fuelPumpTestComplete()), this, SLOT(onFuelPumpTestComplete()));
  connect(m_mems, SIGNAL(acRelayTestComplete()), this, SLOT(onACRelayTestComplete()));
  connect(m_mems, SIGNAL(ptcRelayTestComplete()), this, SLOT(onPTCRelayTestComplete()));
  connect(m_mems, SIGNAL(O2HeaterTestComplete()), this, SLOT(onO2HeaterTestComplete()));
  connect(m_mems, SIGNAL(BoostValveTestComplete()), this, SLOT(onBoostValveTestComplete()));
  connect(m_mems, SIGNAL(PurgeValveTestComplete()), this, SLOT(onPurgeValveTestComplete()));
  connect(m_mems, SIGNAL(moveIACComplete()), this, SLOT(onMoveIACComplete()));
  connect(m_mems, SIGNAL(turnO2HeaterOff()), this, SLOT(on_m_O2Heater_OffButton_clicked()));
  connect(this, SIGNAL(moveIAC(int)), m_mems, SLOT(onIdleAirControlMovementRequest(int)));

  connect(this, SIGNAL(fuelPumpTest()), m_mems, SLOT(onFuelPumpTest()));
  connect(this, SIGNAL(fuelPumpOn()), m_mems, SLOT(onFuelPumpOn()));
  connect(this, SIGNAL(fuelPumpOff()), m_mems, SLOT(onFuelPumpOff()));
  connect(this, SIGNAL(acRelayTest()), m_mems, SLOT(onACRelayTest()));
  connect(this, SIGNAL(acRelayOn()), m_mems, SLOT(onACRelayOn()));
  connect(this, SIGNAL(acRelayOff()), m_mems, SLOT(onACRelayOff()));
  connect(this, SIGNAL(ptcRelayTest()), m_mems, SLOT(onPTCRelayTest()));
  connect(this, SIGNAL(ptcRelayOn()), m_mems, SLOT(onPTCRelayOn()));
  connect(this, SIGNAL(ptcRelayOff()), m_mems, SLOT(onPTCRelayOff()));
  connect(this, SIGNAL(ResetAdjustmentsRequested()), m_mems, SLOT(onResetAdjustmentsRequested()));
  connect(this, SIGNAL(ResetECURequested()), m_mems, SLOT(onResetECURequested()));

  connect(m_mems, SIGNAL(faultCodesClearSuccess()), this, SLOT(onFaultCodeClearComplete()));
  connect(m_mems, SIGNAL(adjustmentsResetSuccess()), this, SLOT(onAdjustmentsResetComplete()));
  connect(m_mems, SIGNAL(ECUResetSuccess()), this, SLOT(onECUResetComplete()));

  connect(this, SIGNAL(requestToStartPolling()), m_mems, SLOT(onStartPollingRequest()));
  connect(this, SIGNAL(requestThreadShutdown()), m_mems, SLOT(onShutdownThreadRequest()));

  connect(this, SIGNAL(Purge_Valve_Test()), m_mems, SLOT(on_m_Purge_Valve_TestButton_clicked()));
  connect(this, SIGNAL(Purge_Valve_On()), m_mems, SLOT(on_m_Purge_Valve_OnButton_clicked()));
  connect(this, SIGNAL(Purge_Valve_Off()), m_mems, SLOT(on_m_Purge_Valve_OffButton_clicked()));
  connect(this, SIGNAL(O2Heater_Test()), m_mems, SLOT(on_m_O2Heater_TestButton_clicked()));
  connect(this, SIGNAL(O2Heater_On()), m_mems, SLOT(on_m_O2Heater_OnButton_clicked()));
  connect(this, SIGNAL(O2Heater_Off()), m_mems, SLOT(on_m_O2Heater_OffButton_clicked()));
  connect(this, SIGNAL(Boost_Valve_Test()), m_mems, SLOT(on_m_Boost_Valve_TestButton_clicked()));
  connect(this, SIGNAL(Boost_Valve_On()), m_mems, SLOT(on_m_Boost_Valve_OnButton_clicked()));
  connect(this, SIGNAL(Boost_Valve_Off()), m_mems, SLOT(on_m_Boost_Valve_OffButton_clicked()));
  connect(this, SIGNAL(Fan1_Test()), m_mems, SLOT(on_m_Fan1_TestButton_clicked()));
  connect(this, SIGNAL(Fan2_Test()), m_mems, SLOT(on_m_Fan2_TestButton_clicked()));
  connect(this, SIGNAL(Fan3_Test()), m_mems, SLOT(on_m_Fan3_TestButton_clicked()));
  connect(this, SIGNAL(Fan1_On()), m_mems, SLOT(on_m_Fan1_OnButton_clicked()));
  connect(this, SIGNAL(Fan2_On()), m_mems, SLOT(on_m_Fan2_OnButton_clicked()));
  connect(this, SIGNAL(Fan3_On()), m_mems, SLOT(on_m_Fan3_OnButton_clicked()));
  connect(this, SIGNAL(Fan1_Off()), m_mems, SLOT(on_m_Fan1_OffButton_clicked()));
  connect(this, SIGNAL(Fan2_Off()), m_mems, SLOT(on_m_Fan2_OffButton_clicked()));
  connect(this, SIGNAL(Fan3_Off()), m_mems, SLOT(on_m_Fan3_OffButton_clicked()));
  connect(this, SIGNAL(CloseIAC()), m_mems, SLOT(on_m_IACMinusButton_clicked()));
  connect(this, SIGNAL(OpenIAC()), m_mems, SLOT(on_m_IACPlusButton_clicked()));
  connect(this, SIGNAL(AllActuators_Off()), m_mems, SLOT(on_m_AllActuatorsOffButton_clicked()));

  connect(this, SIGNAL(fuel_trim_plus()), m_mems, SLOT(on_m_fuel_trim_plusButton_clicked()));
  connect(this, SIGNAL(fuel_trim_minus()), m_mems, SLOT(on_m_fuel_trim_minusButton_clicked()));
  connect(this, SIGNAL(idle_decay_plus()), m_mems, SLOT(on_m_idle_decay_plusButton_clicked()));
  connect(this, SIGNAL(idle_decay_minus()), m_mems, SLOT(on_m_idle_decay_minusButton_clicked()));
  connect(this, SIGNAL(idle_speed_plus()), m_mems, SLOT(on_m_idle_speed_plusButton_clicked()));
  connect(this, SIGNAL(idle_speed_minus()), m_mems, SLOT(on_m_idle_speed_minusButton_clicked()));
  connect(this, SIGNAL(ignition_advance_plus()), m_mems, SLOT(on_m_ignition_advance_plusButton_clicked()));
  connect(this, SIGNAL(ignition_advance_minus()), m_mems, SLOT(on_m_ignition_advance_minusButton_clicked()));
  connect(this, SIGNAL(interactive_mode()),m_mems,SLOT(on_interactive_push_button_clicked()));
 setWindowIcon(QIcon(":/icons/key.png"));

  setupWidgets();
}

MainWindow::~MainWindow()
{
  delete m_tempLimits;
  delete m_airtempLimits;
  delete m_tempRange;
  delete m_airtempRange;
  delete m_tempUnitSuffix;
  delete m_aboutBox;
  delete m_options;
  delete m_mems;
  delete m_memsThread;
}

/**
 * Populates hash tables with unit-of-measure suffixes and temperature thresholds
 */
void MainWindow::buildSpeedAndTempUnitTables()
{
  m_tempUnitSuffix = new QHash <TemperatureUnits, QString>;
  m_tempUnitSuffix->insert(Fahrenheit, " F");
  m_tempUnitSuffix->insert(Celsius, "°C");

  m_tempRange = new QHash <TemperatureUnits, QPair <int, int> >;
  m_airtempRange = new QHash <TemperatureUnits, QPair <int, int> >;

  m_tempRange->insert(Fahrenheit, qMakePair(0, 280));
  m_tempRange->insert(Celsius, qMakePair(0, 120));
  m_airtempRange->insert(Fahrenheit, qMakePair(0, 200));
  m_airtempRange->insert(Celsius, qMakePair(-20, 80));

  m_tempLimits = new QHash <TemperatureUnits, QPair <int, int> >;
  m_airtempLimits = new QHash <TemperatureUnits, QPair <int, int> >;

  m_tempLimits->insert(Fahrenheit, qMakePair(183.75, 218.75));
  m_tempLimits->insert(Celsius, qMakePair(86.25, 105));
  m_airtempLimits->insert(Fahrenheit, qMakePair(120, 120));
  m_airtempLimits->insert(Celsius, qMakePair(50, 50));
}

/**
 * Instantiates widgets used in the main window.
 */
void MainWindow::setupWidgets()
{
  // set menu and button icons
  m_ui->m_exitAction->setIcon(style()->standardIcon(QStyle::SP_DialogCloseButton));
  m_ui->m_editSettingsAction->setIcon(style()->standardIcon(QStyle::SP_ComputerIcon));
  m_ui->m_helpContentsAction->setIcon(style()->standardIcon(QStyle::SP_DialogHelpButton));
  m_ui->m_helpAboutAction->setIcon(style()->standardIcon(QStyle::SP_MessageBoxInformation));
  m_ui->m_startLoggingButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
  m_ui->m_stopLoggingButton->setIcon(style()->standardIcon(QStyle::SP_MediaStop));

  // connect menu item signals
  connect(m_ui->m_exitAction, SIGNAL(triggered()), this, SLOT(onExitSelected()));
  connect(m_ui->m_editSettingsAction, SIGNAL(triggered()), this, SLOT(onEditOptionsClicked()));
  connect(m_ui->m_helpContentsAction, SIGNAL(triggered()), this, SLOT(onHelpContentsClicked()));
  connect(m_ui->m_helpAboutAction, SIGNAL(triggered()), this, SLOT(onHelpAboutClicked()));

  // connect button signals
  connect(m_ui->m_connectButton, SIGNAL(clicked()), this, SLOT(onConnectClicked()));
  connect(m_ui->m_disconnectButton, SIGNAL(clicked()), this, SLOT(onDisconnectClicked()));
  connect(m_ui->m_startLoggingButton, SIGNAL(clicked()), this, SLOT(onStartLogging()));
  connect(m_ui->m_stopLoggingButton, SIGNAL(clicked()), this, SLOT(onStopLogging()));
  connect(m_ui->m_clearFaultsButton, SIGNAL(clicked()), m_mems, SLOT(onFaultCodesClearRequested()));
  connect(m_ui->m_clearRecordedAnomalies, SIGNAL(clicked()), this, SLOT(clearRecordedAnomalies()));
  connect(m_ui->m_resetAdjustmentsButton, SIGNAL(clicked()), this, SLOT(onConfirmResetAdjustments()));
  connect(m_ui->m_resetECUButton, SIGNAL(clicked()), this, SLOT(onConfirmResetECU()));
  connect(m_ui->m_testACRelayButton, SIGNAL(clicked()), this, SLOT(onTestACRelayClicked()));
  connect(m_ui->m_onACRelayButton, SIGNAL(clicked()), this, SLOT(onOnACRelayClicked()));
  connect(m_ui->m_offACRelayButton, SIGNAL(clicked()), this, SLOT(onOffACRelayClicked()));
  connect(m_ui->m_testFuelPumpRelayButton, SIGNAL(clicked()), this, SLOT(onTestFuelPumpRelayClicked()));
  connect(m_ui->m_testFuelPumpOnButton, SIGNAL(clicked()), this, SLOT(onTestFuelPumpOnClicked()));
  connect(m_ui->m_testFuelPumpOffButton, SIGNAL(clicked()), this, SLOT(onTestFuelPumpOffClicked()));
  connect(m_ui->m_testPTCRelayButton, SIGNAL(clicked()), this, SLOT(onTestPTCRelayClicked()));
  connect(m_ui->m_onPTCRelayButton, SIGNAL(clicked()), this, SLOT(onOnPTCRelayClicked()));
  connect(m_ui->m_offPTCRelayButton, SIGNAL(clicked()), this, SLOT(onOffPTCRelayClicked()));
  connect(m_ui->m_testIgnitionCoilButton, SIGNAL(clicked()), m_mems, SLOT(onIgnitionCoilTest()));
  connect(m_ui->m_testFuelInjectorButton, SIGNAL(clicked()), m_mems, SLOT(onFuelInjectorTest()));
  connect(m_ui->m_moveIACButton, SIGNAL(clicked()), this, SLOT(onMoveIACClicked()));

  connect(m_ui->m_Purge_Valve_TestButton, SIGNAL(clicked()), this, SLOT(on_m_Purge_Valve_TestButton_clicked()));
  connect(m_ui->m_Purge_Valve_OnButton, SIGNAL(clicked()), this, SLOT(on_m_Purge_Valve_OnButton_clicked()));
  connect(m_ui->m_Purge_Valve_OffButton, SIGNAL(clicked()), this, SLOT(on_m_Purge_Valve_OffButton_clicked()));
  connect(m_ui->m_O2Heater_TestButton, SIGNAL(clicked()), this, SLOT(on_m_O2Heater_TestButton_clicked()));
  connect(m_ui->m_O2Heater_OnButton, SIGNAL(clicked()), this, SLOT(on_m_O2Heater_OnButton_clicked()));
  connect(m_ui->m_O2Heater_OffButton, SIGNAL(clicked()), this, SLOT(on_m_O2Heater_OffButton_clicked()));
  connect(m_ui->m_Boost_Valve_TestButton, SIGNAL(clicked()), this, SLOT(on_m_Boost_Valve_TestButton_clicked()));
  connect(m_ui->m_Boost_Valve_OnButton, SIGNAL(clicked()), this, SLOT(on_m_Boost_Valve_OnButton_clicked()));
  connect(m_ui->m_Boost_Valve_OffButton, SIGNAL(clicked()), this, SLOT(on_m_Boost_Valve_OffButton_clicked()));
  connect(m_ui->m_Fan1_TestButton, SIGNAL(clicked()), this, SLOT(on_m_Fan1_TestButton_clicked()));
  connect(m_ui->m_Fan2_TestButton, SIGNAL(clicked()), this, SLOT(on_m_Fan2_TestButton_clicked()));
  connect(m_ui->m_Fan3_TestButton, SIGNAL(clicked()), this, SLOT(on_m_Fan3_TestButton_clicked()));
  connect(m_ui->m_Fan1_OnButton, SIGNAL(clicked()), this, SLOT(on_m_Fan1_OnButton_clicked()));
  connect(m_ui->m_Fan2_OnButton, SIGNAL(clicked()), this, SLOT(on_m_Fan2_OnButton_clicked()));
  connect(m_ui->m_Fan3_OnButton, SIGNAL(clicked()), this, SLOT(on_m_Fan3_OnButton_clicked()));
  connect(m_ui->m_Fan1_OffButton, SIGNAL(clicked()), this, SLOT(on_m_Fan1_OffButton_clicked()));
  connect(m_ui->m_Fan2_OffButton, SIGNAL(clicked()), this, SLOT(on_m_Fan2_OffButton_clicked()));
  connect(m_ui->m_Fan3_OffButton, SIGNAL(clicked()), this, SLOT(on_m_Fan3_OffButton_clicked()));
  connect(m_ui->m_IACMinusButton, SIGNAL(clicked()), this, SLOT(on_m_IACMinusButton_clicked()));
  connect(m_ui->m_IACPlusButton, SIGNAL(clicked()), this, SLOT(on_m_IACPlusButton_clicked()));
  connect(m_ui->m_AllActuatorsOffButton, SIGNAL(clicked()), this, SLOT(on_m_AllActuatorsOffButton_clicked()));

  connect(m_ui->m_fuel_trim_plusButton, SIGNAL(clicked()), this, SLOT(on_m_fuel_trim_plusButton_clicked()));
  connect(m_ui->m_fuel_trim_minusButton, SIGNAL(clicked()), this, SLOT(on_m_fuel_trim_minusButton_clicked()));
  connect(m_ui->m_idle_decay_plusButton, SIGNAL(clicked()), this, SLOT(on_m_idle_decay_plusButton_clicked()));
  connect(m_ui->m_idle_decay_minusButton, SIGNAL(clicked()), this, SLOT(on_m_idle_decay_minusButton_clicked()));
  connect(m_ui->m_idle_speed_plusButton, SIGNAL(clicked()), this, SLOT(on_m_idle_speed_plusButton_clicked()));
  connect(m_ui->m_idle_speed_minusButton, SIGNAL(clicked()), this, SLOT(on_m_idle_speed_minusButton_clicked()));
  connect(m_ui->m_ignition_advance_plusButton, SIGNAL(clicked()), this, SLOT(on_m_ignition_advance_plusButton_clicked()));
  connect(m_ui->m_ignition_advance_minusButton, SIGNAL(clicked()), this, SLOT(on_m_ignition_advance_minusButton_clicked()));



  // set the LED colors
  m_ui->m_commsGoodLed->setOnColor1(QColor(102, 255, 102));
  m_ui->m_commsGoodLed->setOnColor2(QColor(82, 204, 82));
  m_ui->m_commsGoodLed->setOffColor1(QColor(0, 102, 0));
  m_ui->m_commsGoodLed->setOffColor2(QColor(0, 51, 0));
  m_ui->m_commsBadLed->setOnColor1(QColor(255, 0, 0));
  m_ui->m_commsBadLed->setOnColor2(QColor(176, 0, 2));
  m_ui->m_commsBadLed->setOffColor1(QColor(20, 0, 0));
  m_ui->m_commsBadLed->setOffColor2(QColor(90, 0, 2));

  m_ui->m_idleSwitchLed->setOnColor1(QColor(102, 255, 102));
  m_ui->m_idleSwitchLed->setOnColor2(QColor(82, 204, 82));
  m_ui->m_idleSwitchLed->setOffColor1(QColor(0, 102, 0));
  m_ui->m_idleSwitchLed->setOffColor2(QColor(0, 51, 0));

  m_ui->m_closedLoopLed->setOnColor1(QColor(102, 255, 102));
  m_ui->m_closedLoopLed->setOnColor2(QColor(82, 204, 82));
  m_ui->m_closedLoopLed->setOffColor1(QColor(0, 102, 0));
  m_ui->m_closedLoopLed->setOffColor2(QColor(0, 51, 0));

  m_ui->closedloop_led->setOnColor1(QColor(102, 255, 102));
  m_ui->closedloop_led->setOnColor2(QColor(82, 204, 82));
  m_ui->closedloop_led->setOffColor1(QColor(0, 102, 0));
  m_ui->closedloop_led->setOffColor2(QColor(0, 51, 0));
  
  m_ui->idleswitch_led->setOnColor1(QColor(102, 255, 102));
  m_ui->idleswitch_led->setOnColor2(QColor(82, 204, 82));
  m_ui->idleswitch_led->setOffColor1(QColor(0, 102, 0));
  m_ui->idleswitch_led->setOffColor2(QColor(0, 51, 0));

  m_ui->m_faultLedATS->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedATS->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedATS->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedATS->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLedFTS->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedFTS->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedFTS->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedFTS->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLedCTS->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedCTS->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedCTS->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedCTS->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLedFuelPump->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedFuelPump->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedFuelPump->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedFuelPump->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLedFuelPumpSupply->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedFuelPumpSupply->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedFuelPumpSupply->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedFuelPumpSupply->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLedPurge->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedPurge->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedPurge->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedPurge->setOffColor2(QColor(90, 0, 2));  
  m_ui->m_faultLedTps->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedTps->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedTps->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedTps->setOffColor2(QColor(90, 0, 2));
  m_ui->m_engine_error->setOnColor1(QColor(255, 0, 0));
  m_ui->m_engine_error->setOnColor2(QColor(176, 0, 2));
  m_ui->m_engine_error->setOffColor1(QColor(20, 0, 0));
  m_ui->m_engine_error->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed03->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed03->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed03->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed03->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed04->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed04->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed04->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed04->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed05->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed05->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed05->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed05->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed07->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed07->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed07->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed07->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed08->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed08->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed08->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed08->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed09->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed09->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed09->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed09->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed12->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed12->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed12->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed12->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed15->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed15->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed15->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed15->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed18->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed18->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed18->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed18->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed21->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed21->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed21->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed21->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed22->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed22->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed22->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed22->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed23->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed23->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed23->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed23->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLed24->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLed24->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLed24->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLed24->setOffColor2(QColor(90, 0, 2));
  m_ui->m_LambdaSensor->setOnColor1(QColor(255, 0, 0));
  m_ui->m_LambdaSensor->setOnColor2(QColor(176, 0, 2));
  m_ui->m_LambdaSensor->setOffColor1(QColor(20, 0, 0));
  m_ui->m_LambdaSensor->setOffColor2(QColor(90, 0, 2));
  m_ui->m_JackCount->setOnColor1(QColor(255, 0, 0));
  m_ui->m_JackCount->setOnColor2(QColor(176, 0, 2));
  m_ui->m_JackCount->setOffColor1(QColor(20, 0, 0));
  m_ui->m_JackCount->setOffColor2(QColor(90, 0, 2));
  m_ui->m_LambdaMax->setOnColor1(QColor(255, 0, 0));
  m_ui->m_LambdaMax->setOnColor2(QColor(176, 0, 2));
  m_ui->m_LambdaMax->setOffColor1(QColor(20, 0, 0));
  m_ui->m_LambdaMax->setOffColor2(QColor(90, 0, 2));
  m_ui->m_LambdaMaxOnce->setOnColor1(QColor(255, 0, 0));
  m_ui->m_LambdaMaxOnce->setOnColor2(QColor(176, 0, 2));
  m_ui->m_LambdaMaxOnce->setOffColor1(QColor(20, 0, 0));
  m_ui->m_LambdaMaxOnce->setOffColor2(QColor(90, 0, 2));
  m_ui->m_LambdaMin->setOnColor1(QColor(255, 0, 0));
  m_ui->m_LambdaMin->setOnColor2(QColor(176, 0, 2));
  m_ui->m_LambdaMin->setOffColor1(QColor(20, 0, 0));
  m_ui->m_LambdaMin->setOffColor2(QColor(90, 0, 2));
  m_ui->m_LambdaMinOnce->setOnColor1(QColor(255, 0, 0));
  m_ui->m_LambdaMinOnce->setOnColor2(QColor(176, 0, 2));
  m_ui->m_LambdaMinOnce->setOffColor1(QColor(20, 0, 0));
  m_ui->m_LambdaMinOnce->setOffColor2(QColor(90, 0, 2));
  m_ui->m_IACMin->setOnColor1(QColor(255, 0, 0));
  m_ui->m_IACMin->setOnColor2(QColor(176, 0, 2));
  m_ui->m_IACMin->setOffColor1(QColor(20, 0, 0));
  m_ui->m_IACMin->setOffColor2(QColor(90, 0, 2));
  m_ui->m_IACMinOnce->setOnColor1(QColor(255, 0, 0));
  m_ui->m_IACMinOnce->setOnColor2(QColor(176, 0, 2));
  m_ui->m_IACMinOnce->setOffColor1(QColor(20, 0, 0));
  m_ui->m_IACMinOnce->setOffColor2(QColor(90, 0, 2));
  
  m_ui->m_faultLedTpsSupply->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedTpsSupply->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedTpsSupply->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedTpsSupply->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLedLambdaCircuit->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedLambdaCircuit->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedLambdaCircuit->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedLambdaCircuit->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLedLambdaSupply->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedLambdaSupply->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedLambdaSupply->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedLambdaSupply->setOffColor2(QColor(90, 0, 2));
  m_ui->m_faultLedMap->setOnColor1(QColor(255, 0, 0));
  m_ui->m_faultLedMap->setOnColor2(QColor(176, 0, 2));
  m_ui->m_faultLedMap->setOffColor1(QColor(20, 0, 0));
  m_ui->m_faultLedMap->setOffColor2(QColor(90, 0, 2));

  m_ui->m_logFileNameBox->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd_hh.mm"));

  m_ui->m_mapGauge->setMinimum(0.0);
  m_ui->m_mapGauge->setMaximum(100.0);
  m_ui->m_mapGauge->setSuffix(" kPa");
  m_ui->m_mapGauge->setNominal(100.0);
  m_ui->m_mapGauge->setCritical(110.0);

  m_ui->m_revCounter->setMinimum(0.0);
  m_ui->m_revCounter->setMaximum(8000);
  m_ui->m_revCounter->setSuffix(" RPM");
  m_ui->m_revCounter->setNominal(8000);
  m_ui->m_revCounter->setCritical(6500);

  m_ui->m_revCounter_exhaust->setMinimum(0.0);
  m_ui->m_revCounter_exhaust->setMaximum(2000);
  m_ui->m_revCounter_exhaust->setSuffix(" RPM");
  m_ui->m_revCounter_exhaust->setNominal(2000);
  m_ui->m_revCounter_exhaust->setCritical(6500);
  
  m_ui->e_idle_error->setMinimum(0.0);
  m_ui->e_idle_error->setMaximum(200);
  m_ui->e_idle_error->setSuffix(" RPM");
  m_ui->e_idle_error->setNominal(75);
  m_ui->e_idle_error->setCritical(75);
  
  m_ui->e_ignition_advance->setMinimum(0);
  m_ui->e_ignition_advance->setMaximum(40);
  m_ui->e_ignition_advance->setSuffix("°");
  m_ui->e_ignition_advance->setNominal(45);
  m_ui->e_ignition_advance->setCritical(45);
  
  m_ui->e_short_term_fuel_trim->setMinimum(-20);
  m_ui->e_short_term_fuel_trim->setMaximum(20);
  m_ui->e_short_term_fuel_trim->setSuffix("%");
  m_ui->e_short_term_fuel_trim->setNominal(20);
  m_ui->e_short_term_fuel_trim->setCritical(20);
  
  m_ui->e_lambda->setMinimum(0);
  m_ui->e_lambda->setMaximum(900);
  m_ui->e_lambda->setSuffix(" mV");
  m_ui->e_lambda->setNominal(900);
  m_ui->e_lambda->setCritical(950);
  
  TemperatureUnits tempUnits = m_options->getTemperatureUnits();
  int tempMin = m_tempRange->value(tempUnits).first;
  int tempMax = m_tempRange->value(tempUnits).second;
  int airtempMin = m_airtempRange->value(tempUnits).first;
  int airtempMax = m_airtempRange->value(tempUnits).second;

  m_ui->m_waterTempGauge->setValue(tempMin);
  m_ui->m_waterTempGauge->setMaximum(tempMax);
  m_ui->m_waterTempGauge->setMinimum(tempMin);
  m_ui->m_waterTempGauge->setSuffix(m_tempUnitSuffix->value(tempUnits));
  m_ui->m_waterTempGauge->setNominal(m_tempLimits->value(tempUnits).first);
  m_ui->m_waterTempGauge->setCritical(m_tempLimits->value(tempUnits).second);

  m_ui->m_airTempGauge->setValue(airtempMin);
  m_ui->m_airTempGauge->setMaximum(airtempMax);
  m_ui->m_airTempGauge->setMinimum(airtempMin);
  m_ui->m_airTempGauge->setSuffix(m_tempUnitSuffix->value(tempUnits));
  m_ui->m_airTempGauge->setNominal(m_airtempLimits->value(tempUnits).first);
  m_ui->m_airTempGauge->setCritical(m_airtempLimits->value(tempUnits).second);

  m_ui->m_throttle_pos->setMinimum(0.0);
  m_ui->m_throttle_pos->setMaximum(100.0);
  m_ui->m_throttle_pos->setSuffix("%");
  m_ui->m_throttle_pos->setNominal(101.0);
  m_ui->m_throttle_pos->setCritical(101.0);

  m_ui->m_lambda_voltage->setMinimum(0.0);
  m_ui->m_lambda_voltage->setMaximum(900.0);
  m_ui->m_lambda_voltage->setSuffix(" mV");
  m_ui->m_lambda_voltage->setNominal(900.0);
  m_ui->m_lambda_voltage->setCritical(950.0);

  m_ui->m_idle_position->setMinimum(0.0);
  m_ui->m_idle_position->setMaximum(100.0);
  m_ui->m_idle_position->setSuffix("%");
  m_ui->m_idle_position->setNominal(101.0);
  m_ui->m_idle_position->setCritical(101.0);

  m_ui->m_battery->setMinimum(12);
  m_ui->m_battery->setMaximum(16);
  m_ui->m_battery->setSuffix(" V");
  m_ui->m_battery->setNominal(13.25);
  m_ui->m_battery->setCritical(14.5);

  m_ui->m_ignition_advance->setMinimum(0);
  m_ui->m_ignition_advance->setMaximum(40);
  m_ui->m_ignition_advance->setSuffix("°");
  m_ui->m_ignition_advance->setNominal(45);
  m_ui->m_ignition_advance->setCritical(45);

  m_ui->m_short_term_correction->setMinimum(-20);
  m_ui->m_short_term_correction->setMaximum(20);
  m_ui->m_short_term_correction->setSuffix("%");
  m_ui->m_short_term_correction->setNominal(20);
  m_ui->m_short_term_correction->setCritical(20);

}

/**
 * Attempts to open the serial device connected to the ECU,
 * and starts updating the display with data if successful.
 */
void MainWindow::onConnectClicked()
{
  // If the worker thread hasn't been created yet, do that now.
  if (m_memsThread == 0)
  {
    m_memsThread = new QThread(this);
    m_mems->moveToThread(m_memsThread);
    connect(m_memsThread, SIGNAL(started()), m_mems, SLOT(onParentThreadStarted()));
  }

  // If the worker thread is alreay running, ask it to start polling the ECU.
  // Otherwise, start the worker thread, but don't ask it to begin polling
  // yet; it'll signal us when it's ready.
  if (m_memsThread->isRunning())
  {
    emit requestToStartPolling();
  }
  else
  {
    m_memsThread->start();
  }
}

void MainWindow::onInterfaceThreadReady()
{
  emit requestToStartPolling();
}

void MainWindow::onEcuIdReceived(uint8_t* id)
{
  char idString[20];

  sprintf(idString, "ECU ID: %02X %02X %02X %02X", id[0], id[1], id[2], id[3]);
  m_ui->m_ecuIdLabel->setText(QString(idString));
}

/**
 * Sets a flag in the worker thread that tells it to disconnect from the
 * serial device.
 */
void MainWindow::onDisconnectClicked()
{
  m_ui->m_disconnectButton->setEnabled(false);
  m_mems->disconnectFromECU();
}

/**
 * Closes the main window and terminates the application.
 */
void MainWindow::onExitSelected()
{
  this->close();
}

/**
 * Converts temperature in Fahrenheit degrees to the desired units.
 * @param tempF Temperature in Fahrenheit degrees
 * @return Temperature in the desired units
 */
int MainWindow::convertTemperature(int tempF)
{
  double temp = tempF;

  switch (m_options->getTemperatureUnits())
  {
  case Celsius:
    temp = (temp - 55);
    break;
  case Fahrenheit:
	temp = ((temp -55) * 1.8 + 32);
    break;
  }

  return (int)temp;
}

/**
 * Converts lambda entry depending on the scale selected
 */
/* int MainWindow::convertLambda(int scaleMems)
{
  double scale = scaleMems;

  switch (m_options->getLambdaScale())
  {
  case _4mV_steps:
    scale = (scale * 4);
    break;
  case _5mV_steps:
	scale = (scale * 5);
    break;
  }

  return (int)scale;
} */

void MainWindow::setActuatorTestsEnabled(bool enabled)
{
  m_ui->m_testACRelayButton->setEnabled(enabled);
  m_ui->m_onACRelayButton->setEnabled(enabled);
  m_ui->m_testFuelInjectorButton->setEnabled(enabled);
  m_ui->m_testFuelPumpRelayButton->setEnabled(enabled);
  m_ui->m_testFuelPumpOnButton->setEnabled(enabled);
  m_ui->m_moveIACButton->setEnabled(enabled);
  m_ui->m_testIgnitionCoilButton->setEnabled(enabled);
  m_ui->m_testPTCRelayButton->setEnabled(enabled);
  m_ui->m_onPTCRelayButton->setEnabled(enabled);
  m_ui->m_O2Heater_OnButton->setEnabled(enabled);
  m_ui->m_O2Heater_TestButton->setEnabled(enabled);
  m_ui->m_Purge_Valve_OnButton->setEnabled(enabled);
  m_ui->m_Purge_Valve_TestButton->setEnabled(enabled);
  m_ui->m_Boost_Valve_TestButton->setEnabled(enabled);
  m_ui->m_Boost_Valve_OnButton->setEnabled(enabled);
  m_ui->m_Fan1_TestButton->setEnabled(enabled);
  m_ui->m_Fan2_TestButton->setEnabled(enabled);
  m_ui->m_Fan3_TestButton->setEnabled(enabled);
  m_ui->m_Fan1_OnButton->setEnabled(enabled);
  m_ui->m_Fan2_OnButton->setEnabled(enabled);
  m_ui->m_Fan3_OnButton->setEnabled(enabled);
  m_ui->m_IACMinusButton->setEnabled(enabled);
  m_ui->m_IACPlusButton->setEnabled(enabled);
  m_ui->m_AllActuatorsOffButton->setEnabled(enabled);
  m_ui->m_moveIACButton->setEnabled(enabled);
  m_ui->m_resetECUButton->setEnabled(enabled);
  m_ui->m_resetAdjustmentsButton->setEnabled(enabled);
  m_actuatorTestsEnabled = enabled;
}

void MainWindow::setActuatorsOffEnabled(bool enabled)
{
  m_ui->m_testFuelPumpOffButton->setEnabled(enabled);
  m_ui->m_offACRelayButton->setEnabled(enabled);
  m_ui->m_offPTCRelayButton->setEnabled(enabled);
  m_ui->m_O2Heater_OffButton->setEnabled(enabled);
  m_ui->m_Purge_Valve_OffButton->setEnabled(enabled); 
  m_ui->m_Boost_Valve_OffButton->setEnabled(enabled);
  m_ui->m_Fan1_OffButton->setEnabled(enabled);
  m_ui->m_Fan2_OffButton->setEnabled(enabled);
  m_ui->m_Fan3_OffButton->setEnabled(enabled);
  m_actuatorsOffEnabled = enabled;
}

void MainWindow::setAdjustmentsEnabled(bool enabled)
{
  m_ui->m_fuel_trim_plusButton->setEnabled(enabled);
  m_ui->m_fuel_trim_minusButton->setEnabled(enabled);
  m_ui->m_idle_decay_plusButton->setEnabled(enabled);
  m_ui->m_idle_decay_minusButton->setEnabled(enabled);
  m_ui->m_idle_speed_plusButton->setEnabled(enabled);
  m_ui->m_idle_speed_minusButton->setEnabled(enabled);
  m_ui->m_ignition_advance_minusButton->setEnabled(enabled);
  m_ui->m_ignition_advance_plusButton->setEnabled(enabled);
  m_ui->m_clearFaultsButton->setEnabled(enabled);
  m_ui->m_clearRecordedAnomalies->setEnabled(enabled);
  m_adjustmentsEnabled = enabled;
}


/**
 * Updates the gauges and indicators with the latest data available from
 * the ECU.
 */
void MainWindow::onDataReady()
{
  mems_data* data = m_mems->getData();
  int corrected_iac = (data->iac_position > IAC_MAXIMUM) ? IAC_MAXIMUM : data->iac_position;
/*   float corrected_throttle = ((data->throttle_pot * 0.02) > 5.0) ? 5.0 : data->throttle_pot; */

  if ((data->uk3 == 0) && !m_actuatorTestsEnabled)
  {
    setActuatorTestsEnabled(true);
  }
  else if ((data->uk3 != 0) && m_actuatorTestsEnabled)
  {
    setActuatorTestsEnabled(false);
	setActuatorsOffEnabled(false);
  }
 setAdjustmentsEnabled(true);
//  m_ui->m_throttlePotVolts->setText(QString::number(data->throttle_pot, 'f', 2) + "V");
 m_ui->m_idleBypassPosBar_2->setValue((float)corrected_iac / (float)IAC_MAXIMUM * 100);
 // m_ui->m_idle_base_pos->setValue(data->idle_base_pos);
//  m_ui->m_iacPositionSteps->setText(QString::number(data->iac_position));
 m_ui->m_short_term_correction->setValue(data->short_term_fuel_trim - 100);
 m_ui->m_revCounter->setValue(data->engine_rpm);
 m_ui->m_revCounter_exhaust->setValue(data->engine_rpm);
 if (((data->idle_switch)!= 0) or ((data->uk3)!=16))
    {m_ui->e_idle_error->setValue(0);}
	else if ((data->idle_error)>=200)
	{m_ui->e_idle_error->setValue(200);}
    else
    {m_ui->e_idle_error->setValue(data->idle_error);}
 m_ui->e_ignition_advance->setValue((data->ignition_advance / 2) - 24);
 m_ui->e_short_term_fuel_trim->setValue(data->short_term_fuel_trim - 100);
 m_ui->e_lambda->setValue(data->lambda_voltage * 5);
 m_ui->m_throttle_pos->setValue(round(data->throttle_pot / 2));
 m_ui->m_idle_position->setValue(round((float)corrected_iac / (float)IAC_MAXIMUM * 100));
 m_ui->m_battery->setValue(data->battery_voltage / 10.0);
 m_ui->m_mapGauge->setValue(data->map_kpa);
 m_ui->m_ignition_advance->setValue((data->ignition_advance / 2) - 24);
 m_ui->m_waterTempGauge->setValue(convertTemperature(data->coolant_temp));
 m_ui->m_airTempGauge->setValue(convertTemperature(data->intake_air_temp));
 m_ui->m_faultLedCTS->setChecked((data->dtc0 & 0x01) != 0);
 m_ui->m_faultLedATS->setChecked((data->dtc0 & 0x02) != 0);
 m_ui->m_faultLed03->setChecked((data->dtc0 & 0x04) != 0);
 m_ui->m_faultLed04->setChecked((data->dtc0 & 0x08) != 0);
 m_ui->m_faultLed05->setChecked((data->dtc0 & 0x10) != 0);
 m_ui->m_faultLedFTS->setChecked((data->dtc0 & 0x20) != 0);
 m_ui->m_faultLed07->setChecked((data->dtc0 & 0x40) != 0);
 m_ui->m_faultLed08->setChecked((data->dtc0 & 0x80) != 0);
 m_ui->m_faultLed09->setChecked((data->dtc1 & 0x01) != 0);
 m_ui->m_faultLedFuelPump->setChecked((data->dtc1 & 0x02) != 0);
 m_ui->m_faultLedFuelPumpSupply->setChecked((data->dtc1 & 0x04) != 0);
 m_ui->m_faultLed12->setChecked((data->dtc1 & 0x08) != 0);
 m_ui->m_faultLedPurge->setChecked((data->dtc1 & 0x10) != 0);
 m_ui->m_faultLedMap->setChecked((data->dtc1 & 0x20) != 0);
 m_ui->m_faultLed15->setChecked((data->dtc1 & 0x40) != 0);
 m_ui->m_faultLedTps->setChecked((data->dtc1 & 0x80) != 0);
 m_ui->m_faultLedTpsSupply->setChecked((data->dtc2 & 0x01) != 0);
 m_ui->m_faultLed18->setChecked((data->dtc2 & 0x02) != 0);
 m_ui->m_faultLedLambdaCircuit->setChecked((data->dtc2 & 0x04) != 0);
 m_ui->m_faultLedLambdaSupply->setChecked((data->dtc2 & 0x08) != 0);
 m_ui->m_faultLed21->setChecked((data->dtc2 & 0x10) != 0);
 m_ui->m_faultLed22->setChecked((data->dtc2 & 0x20) != 0);
 m_ui->m_faultLed23->setChecked((data->dtc2 & 0x40) != 0);
 m_ui->m_faultLed24->setChecked((data->dtc2 & 0x80) != 0);
 m_ui->m_RPMSensor->setChecked((data->uk3) != 0);
 m_ui->m_LambdaSensor->setChecked((data->lambda_sensor_status) != 1);
 m_ui->m_JackCount->setChecked((data->uk1C) == 255);
 m_ui->m_LambdaMax->setChecked((data->lambda_voltage) >=200);
    if (data->lambda_voltage>=200)
	{
		emit LambdaMaxOnce();
	}
 m_ui->m_LambdaMin->setChecked((data->lambda_voltage) ==0);
	if (data->lambda_voltage==0)
	{
		emit LambdaMinOnce();
	}
 m_ui->m_IACMin->setChecked((data->iac_position) ==0);
	if ((data->iac_position==0) and (data->idle_error>=50) and (data->idle_switch==0) and (data->uk3!=0))
	{
		emit IACMinOnce();
	}
    if (((data->dtc0)!= 0) or ((data->dtc1)!= 0) or ((data->dtc2)!= 0))
    {
      m_ui->m_engine_error->setChecked(true);
    }
    else
    {
	  m_ui->m_engine_error->setChecked(false);
    }
    if ((data->idle_switch)!= 0)
    {
      m_ui->m_idleSwitchLed->setChecked(false);
	  m_ui->idleswitch_led->setChecked(false);
    }
    else
    {
      m_ui->m_idleSwitchLed->setChecked(true);
	  m_ui->idleswitch_led->setChecked(true);
    }
    if ((data->closed_loop)!= 0)
    {
      m_ui->m_closedLoopLed->setChecked(true);
      m_ui->closedloop_led->setChecked(true);
    }
    else
    {
      m_ui->m_closedLoopLed->setChecked(false);
      m_ui->closedloop_led->setChecked(false);
    }
 /* m_ui->rpm_lcd->display(data->engine_rpm);
 m_ui->watertemp_lcd->display(data->coolant_temp);
 m_ui->ambientair_lcd->display(data->ambient_temp);
 m_ui->intakeair_lcd->display(data->intake_air_temp);
 m_ui->fuel_temp_lcd->display(data->fuel_temp);
 m_ui->map_lcd->display(data->map_kpa);
 m_ui->voltage_lcd->display(data->battery_voltage);
 m_ui->throttlepot_lcd->display(data->throttle_pot);
 m_ui->idleswitch_lcd->display(data->idle_switch);
 m_ui->unknown1_lcd->display(data->uk1);
 m_ui->park_lcd->display(data->park_neutral_switch);
 m_ui->fcodes_lcd->display(data->fault_codes);
 m_ui->idlesetpoint_lcd->display(data->idle_set_point);
 m_ui->idlehot_lcd->display(data->idle_hot);
 m_ui->unknown4_lcd->display(data->uk2);
 m_ui->iac_lcd->display(data->iac_position);
 m_ui->idlespeeddev_lcd->display(data->idle_error);
 m_ui->ignadvanceoffset_lcd->display(data->ignition_advance_offset);
 m_ui->ignadvance_lcd->display(data->ignition_advance);
 m_ui->coiltime_lcd->display(data->coil_time);
 m_ui->unknown6_lcd->display(data->uk3);
 m_ui->unknown7_lcd->display(data->uk4);
 m_ui->unknown8_lcd->display(data->uk5);
 //*************************************
 m_ui->ignitionswitch_lcd->display(data->ignition_switch);
 m_ui->throttle_angle_lcd->display(data->throttle_angle);
 m_ui->unknown11_lcd->display(data->uk6);
 m_ui->air_fuel_lcd->display(data->air_fuel_ratio);
 m_ui->faultcode0_lcd->display(data->dtc2);
 m_ui->lambda_voltage_lcd->display(data->lambda_voltage * 1);
 m_ui->lambda_frequency_lcd->display(data->lambda_sensor_frequency);
 m_ui->lambda_dutycycle_lcd->display(data->lambda_sensor_dutycycle);
 m_ui->lambda_status_lcd->display(data->lambda_sensor_status);
 m_ui->closed_loop_lcd->display(data->closed_loop);
 m_ui->longterm_fuel_lcd->display(data->long_term_fuel_trim);
 m_ui->shortterm_fuel_lcd->display(data->short_term_fuel_trim);
 m_ui->carboncanister_lcd->display(data->carbon_canister_dutycycle);
 m_ui->faultcode1_lcd->display(data->dtc3);
 m_ui->idle_base_lcd->display(data->idle_base_pos);
 m_ui->unknown15_lcd->display(data->uk7);
 m_ui->unknown16_lcd->display(data->dtc4);
 m_ui->ignadvance2_lcd->display(data->ignition_advance2);
 m_ui->unknown18_lcd->display(data->idle_speed_offset);
 m_ui->idleerror2_lcd->display(data->idle_error2);
 m_ui->unknown20_lcd->display(data->uk10);
 m_ui->faultcode4_lcd->display(data->dtc5);
 m_ui->unknown22_lcd->display(data->uk11);
 m_ui->unknown23_lcd->display(data->uk12);
 m_ui->unknown24_lcd->display(data->uk13);
 m_ui->unknown25_lcd->display(data->uk14);
 m_ui->unknown26_lcd->display(data->uk15);
 m_ui->unknown27_lcd->display(data->uk16);
 m_ui->unknown28_lcd->display(data->uk1A);
 m_ui->unknown29_lcd->display(data->uk1B);
 m_ui->unknown30_lcd->display(data->uk1C);
 m_ui->m_rpm_2->setText(QString::number(data->engine_rpm));
 m_ui->m_waterT_2->setText(QString::number(convertTemperature(data->coolant_temp)));
 m_ui->m_ambientT_2->setText(QString::number(convertTemperature(data->ambient_temp)));
 m_ui->m_airT_2->setText(QString::number(convertTemperature(data->intake_air_temp)));
 m_ui->m_fuelT_2->setText(QString::number(data->fuel_temp));
 m_ui->m_map_2->setText(QString::number(data->map_kpa));
 m_ui->m_voltage_2->setText(QString::number(data->battery_voltage));
 m_ui->m_throttlepot_2->setText(QString::number(data->throttle_pot));
 m_ui->m_idleswitch_2->setText(QString::number(data->idle_switch));
 m_ui->m_uk1_2->setText(QString::number(data->uk1));
 m_ui->m_park_2->setText(QString::number(data->park_neutral_switch));
 m_ui->m_fcodes_2->setText(QString::number(data->fault_codes));
 m_ui->m_idlesetpoint_2->setText(QString::number(data->idle_set_point));
 m_ui->m_uk4_2->setText(QString::number(data->uk2));
 m_ui->m_iacpos_2->setText(QString::number(data->iac_position));
 m_ui->m_idlespeeddev_2->setText(QString::number(data->idle_error));
 m_ui->m_ignadvanceoffset_2->setText(QString::number(data->ignition_advance_offset));
 m_ui->m_ignadvance_2->setText(QString::number(data->ignition_advance));
 m_ui->m_ignition_advance->setValue(data->ignition_advance);
 m_ui->m_coiltime_2->setText(QString::number(data->coil_time));
 m_ui->m_uk6_2->setText(QString::number(data->uk3));
 m_ui->m_uk7_2->setText(QString::number(data->uk4));
 m_ui->m_uk8_2->setText(QString::number(data->uk5));

 m_ui->m_ignitionswitch_2->setText(QString::number(data->ignition_switch));
 m_ui->m_throttleangle_2->setText(QString::number(data->throttle_angle));

 m_ui->m_uk11_2->setText(QString::number(data->uk6));
 m_ui->m_airratio_2->setText(QString::number(data->air_fuel_ratio));
 m_ui->m_faultcode0_2->setText(QString::number(data->dtc2));
 m_ui->m_lambdavoltage_2->setText(QString::number(data->lambda_voltage * 1));
 m_ui->m_lambdafrequency_2->setText(QString::number(data->lambda_sensor_frequency));
 m_ui->m_lambdadutycycle_2->setText(QString::number(data->lambda_sensor_dutycycle));
 m_ui->m_lambdastatus_2->setText(QString::number(data->lambda_sensor_status));
 m_ui->m_closedloop_2->setText(QString::number(data->closed_loop));
 m_ui->m_longtermftrim_2->setText(QString::number(data->long_term_fuel_trim));
 m_ui->m_shorttermftrim_2->setText(QString::number(data->short_term_fuel_trim));
 m_ui->m_carbondutycycle_2->setText(QString::number(data->carbon_canister_dutycycle));
 m_ui->m_faultcode1_2->setText(QString::number(data->dtc3));
 m_ui->m_idlebase_2->setText(QString::number(data->idle_base_pos));
 m_ui->m_uk15_2->setText(QString::number(data->uk7));
 m_ui->m_uk16_2->setText(QString::number(data->dtc4));
 m_ui->m_ignadvance2_2->setText(QString::number(data->ignition_advance2));
 m_ui->m_uk18_2->setText(QString::number(data->idle_speed_offset));
 m_ui->m_idleerror2_2->setText(QString::number(data->idle_error2));
 m_ui->m_uk20_2->setText(QString::number(data->uk10));
 m_ui->m_faultcode4_2->setText(QString::number(data->dtc5));
 m_ui->m_uk22_2->setText(QString::number(data->uk11));
 m_ui->m_uk23_2->setText(QString::number(data->uk12));
 m_ui->m_uk24_2->setText(QString::number(data->uk13));
 m_ui->m_uk25_2->setText(QString::number(data->uk14));
 m_ui->m_uk26_2->setText(QString::number(data->uk15));
 m_ui->m_uk27_2->setText(QString::number(data->uk16));
 m_ui->m_uk28_2->setText(QString::number(data->uk1A));
 m_ui->m_uk29_2->setText(QString::number(data->uk1B));
 m_ui->m_uk30_2->setText(QString::number(data->uk1C)); */

 // m_ui->e_lambdavoltage_lcd->display(data->lambda_voltage * 4) ;
 m_ui->e_FuelTrim_lcd->display(data->long_term_fuel_trim - 128) ;
 m_ui->e_IdleDecay_lcd->display(data->idle_hot - 35) ;
 m_ui->e_IdleSpeed_lcd->display((data->idle_speed_offset - 128) * 25) ;
 m_ui->e_IgnitionAdvance_lcd->display(data->ignition_advance2 - 48) ;
//  m_ui->m_fuel_trim->setText(QString::number(data->short_term_fuel_trim, 'f', 1));
 // m_ui->shorttimefueltrim_lcd->display(data->short_term_fuel_trim);

 m_ui->m_long_trim->setText(QString::number(data->long_term_fuel_trim-128) );
 m_ui->m_lambda_voltage->setValue(data->lambda_voltage * 5);
 // m_ui->m_idlehot_2->setText(QString::number(data->idle_hot));

 m_ui->m_7D_01->setText(QString::number(data->ignition_switch));
 if ((data->ignition_switch)!= 0)
    {m_ui->r_7D_01->setText("On");}
    else
    {m_ui->r_7D_01->setText("Off");}
 m_ui->m_7D_02->setText(QString::number(data->throttle_angle));
 m_ui->r_7D_02->setText(QString::number(data->throttle_angle * 6 / 10) + "°");
 m_ui->m_7D_03->setText(QString::number(data->uk6));
 m_ui->m_7D_04->setText(QString::number(data->air_fuel_ratio));
 m_ui->r_7D_04->setText(QString::number(data->air_fuel_ratio / 10.0) + " AFR");
 m_ui->m_7D_05->setText(QString::number(data->dtc2));
   if ((data->dtc2)!= 0)
    {m_ui->r_7D_05->setText("FAULTS");}
    else
    {m_ui->r_7D_05->setText("no faults");} 
 m_ui->m_7D_06->setText(QString::number(data->lambda_voltage));
 m_ui->r_7D_06->setText(QString::number(data->lambda_voltage * 5) + " mV" );
 m_ui->m_7D_07->setText(QString::number(data->lambda_sensor_frequency));
 m_ui->m_7D_08->setText(QString::number(data->lambda_sensor_dutycycle));
 m_ui->m_7D_09->setText(QString::number(data->lambda_sensor_status));
 if ((data->lambda_sensor_status)!= 1)
    {m_ui->r_7D_09->setText("SENSOR NOT OK");}
    else
    {m_ui->r_7D_09->setText("Sensor OK");} 
 m_ui->m_7D_0A->setText(QString::number(data->closed_loop));
 if ((data->closed_loop)!= 0)
    {m_ui->r_7D_0A->setText("Closed Loop");}
    else
    {m_ui->r_7D_0A->setText("Open Loop");} 
 m_ui->m_7D_0B->setText(QString::number(data->long_term_fuel_trim));
 m_ui->r_7D_0B->setText(QString::number(data->long_term_fuel_trim - 128));
 m_ui->m_7D_0C->setText(QString::number(data->short_term_fuel_trim));
 m_ui->r_7D_0C->setText(QString::number(data->short_term_fuel_trim - 100) + "%");
 m_ui->m_7D_0D->setText(QString::number(data->carbon_canister_dutycycle));
 m_ui->r_7D_0D->setText(QString::number(data->carbon_canister_dutycycle) + "%");
 m_ui->m_7D_0E->setText(QString::number(data->dtc3));
    if ((data->dtc3)!= 255)
    {m_ui->r_7D_0E->setText("FAULTS");}
    else
    {m_ui->r_7D_0E->setText("no faults");}  
 m_ui->m_7D_0F->setText(QString::number(data->idle_base_pos));
 m_ui->r_7D_0F->setText("");
 m_ui->m_7D_10->setText(QString::number(data->uk7));
     if ((data->uk7)!= 255)
    {m_ui->r_7D_10->setText("FAULTS");}
    else
    {m_ui->r_7D_10->setText("no faults");} 
 m_ui->m_7D_11->setText(QString::number(data->dtc4));
    if ((data->dtc4)!= 255)
    {m_ui->r_7D_11->setText("FAULTS");}
    else
    {m_ui->r_7D_11->setText("no faults");} 
 m_ui->m_7D_12->setText(QString::number(data->ignition_advance2));
 m_ui->r_7D_12->setText(QString::number(data->ignition_advance2 - 48));
 m_ui->m_7D_13->setText(QString::number(data->idle_speed_offset));
 m_ui->r_7D_13->setText(QString::number((data->idle_speed_offset - 128) * 25) + " RPM");
 // m_ui->m_7D_14->setText(QString::number(data->idle_error2));
 m_ui->m_7D_15->setText(QString::number(((uint16_t)data->idle_error2 << 8 ) | data->uk10));
 m_ui->m_7D_16->setText(QString::number(data->dtc5));
     if ((data->dtc5)!= 255)
    {m_ui->r_7D_16->setText("FAULTS");}
    else
    {m_ui->r_7D_16->setText("no faults");} 
 m_ui->m_7D_17->setText(QString::number(data->uk11));
 m_ui->m_7D_18->setText(QString::number(data->uk12));
 m_ui->m_7D_19->setText(QString::number(data->uk13));
 m_ui->m_7D_1A->setText(QString::number(data->uk14));
 m_ui->m_7D_1B->setText(QString::number(data->uk15));
 m_ui->m_7D_1C->setText(QString::number(data->uk16));
 m_ui->m_7D_1D->setText(QString::number(data->uk1A));
 m_ui->m_7D_1E->setText(QString::number(data->uk1B));
 m_ui->m_7D_1F->setText(QString::number(data->uk1C));

 m_ui->m_80_01->setText(QString::number(data->engine_rpm));
 m_ui->r_80_01->setText(QString::number(data->engine_rpm) + " RPM");
 m_ui->m_80_03->setText(QString::number(data->coolant_temp));
 m_ui->r_80_03->setText(QString::number(data->coolant_temp - 55) + "°C");
 m_ui->m_80_04->setText(QString::number(data->ambient_temp));
 m_ui->r_80_04->setText(QString::number(data->ambient_temp - 55) + "°C");
 m_ui->m_80_05->setText(QString::number(data->intake_air_temp));
 m_ui->r_80_05->setText(QString::number(data->intake_air_temp - 55) + "°C");
 m_ui->m_80_06->setText(QString::number(data->fuel_temp));
 m_ui->r_80_06->setText(QString::number(data->fuel_temp - 55) + "°C");
 m_ui->m_80_07->setText(QString::number(data->map_kpa));
 m_ui->r_80_07->setText(QString::number(data->map_kpa) + " kPa");
 m_ui->m_80_08->setText(QString::number(data->battery_voltage));
 m_ui->r_80_08->setText(QString::number(data->battery_voltage / 10.0) + " V");
 m_ui->m_80_09->setText(QString::number(data->throttle_pot));
 m_ui->r_80_09->setText(QString::number(data->throttle_pot * 0.02) + " V");
 m_ui->m_80_0A->setText(QString::number(data->idle_switch));
  if ((data->idle_switch)!= 0)
    {m_ui->r_80_0A->setText("Off");}
    else
    {m_ui->r_80_0A->setText("On");}
 m_ui->m_80_0B->setText(QString::number(data->uk1));
  if ((data->uk1)!= 0)
    {m_ui->r_80_0B->setText("On");}
    else
    {m_ui->r_80_0B->setText("Off");}
 m_ui->m_80_0C->setText(QString::number(data->park_neutral_switch));
  if ((data->park_neutral_switch)!= 0)
    {m_ui->r_80_0C->setText("On");}
    else
    {m_ui->r_80_0C->setText("Off");} 
 m_ui->m_80_0D->setText(QString::number(data->dtc0));
  if ((data->dtc0)!= 0)
    {m_ui->r_80_0D->setText("FAULTS");}
    else
    {m_ui->r_80_0D->setText("no faults");}  
 m_ui->m_80_0E->setText(QString::number(data->dtc1));
  if ((data->dtc1)!= 0)
    {m_ui->r_80_0E->setText("FAULTS");}
    else
    {m_ui->r_80_0E->setText("no faults");}  
 m_ui->m_80_0F->setText(QString::number(data->idle_set_point));
 m_ui->m_80_10->setText(QString::number(data->idle_hot));
 m_ui->r_80_10->setText(QString::number(data->idle_hot - 35));
 m_ui->m_80_11->setText(QString::number(data->uk2));
 m_ui->m_80_12->setText(QString::number(data->iac_position));
 m_ui->r_80_12->setText(QString::number(round(data->iac_position / 1.8)) + "%");
 m_ui->m_80_13->setText(QString::number(data->idle_error));
 m_ui->r_80_13->setText(QString::number(data->idle_error) + " RPM");
 m_ui->m_80_15->setText(QString::number(data->ignition_advance_offset));
 m_ui->m_80_16->setText(QString::number(data->ignition_advance));
 m_ui->r_80_16->setText(QString::number((data->ignition_advance / 2) - 24) + "°");
 m_ui->m_80_17->setText(QString::number(data->coil_time));
 m_ui->r_80_17->setText(QString::number(data->coil_time * 0.002) + " ms");
 m_ui->m_80_19->setText(QString::number(data->uk3));
  if ((data->uk3)!= 0)
    {m_ui->r_80_19->setText("signal");}
    else
    {m_ui->r_80_19->setText("NO SIGNAL");}  
 m_ui->m_80_1A->setText(QString::number(data->uk4));
 m_ui->m_80_1B->setText(QString::number(data->uk5));

  m_logger->logData();
}

/**
 * Opens the settings dialog, where the user may change the
 * serial device, timer interval, gauge settings, and
 * correction factors.
 */
void MainWindow::onEditOptionsClicked()
{
  // if the user doesn't cancel the options dialog...
  if (m_options->exec() == QDialog::Accepted)
  {
    TemperatureUnits tempUnits = m_options->getTemperatureUnits();
	LambdaScale LScale= m_options->getLambdaScale();
    QString tempUnitStr = m_tempUnitSuffix->value(tempUnits);

    int tempMin = m_tempRange->value(tempUnits).first;
    int tempMax = m_tempRange->value(tempUnits).second;
    int tempNominal = m_tempLimits->value(tempUnits).first;
    int tempCritical = m_tempLimits->value(tempUnits).second;
    int airtempMin = m_airtempRange->value(tempUnits).first;
    int airtempMax = m_airtempRange->value(tempUnits).second;
    int airtempNominal = m_airtempLimits->value(tempUnits).first;
    int airtempCritical = m_airtempLimits->value(tempUnits).second;

    m_ui->m_airTempGauge->setSuffix(tempUnitStr);
    m_ui->m_airTempGauge->setValue(airtempMin);
    m_ui->m_airTempGauge->setMaximum(airtempMax);
    m_ui->m_airTempGauge->setMinimum(airtempMin);
    m_ui->m_airTempGauge->setNominal(airtempNominal);
    m_ui->m_airTempGauge->setCritical(airtempCritical);
    m_ui->m_airTempGauge->repaint();

    m_ui->m_waterTempGauge->setSuffix(tempUnitStr);
    m_ui->m_waterTempGauge->setValue(tempMin);
    m_ui->m_waterTempGauge->setMaximum(tempMax);
    m_ui->m_waterTempGauge->setMinimum(tempMin);
    m_ui->m_waterTempGauge->setNominal(tempNominal);
    m_ui->m_waterTempGauge->setCritical(tempCritical);
    m_ui->m_waterTempGauge->repaint();

    // if the user changed the serial device name and/or the polling
    // interval, stop the timer, re-connect to the ECU (if neccessary),
    // and restart the timer
    if (m_options->getSerialDeviceChanged())
    {
      if (m_mems->isConnected())
      {
        m_mems->disconnectFromECU();
      }
      m_mems->setSerialDevice(m_options->getSerialDeviceName());
    }
  }
}

/**
 * Responds to a 'close' event on the main window by first shutting down
 * the other thread.
 * @param event The event itself.
 */
void MainWindow::closeEvent(QCloseEvent* event)
{
  m_logger->closeLog();

  if ((m_memsThread != 0) && m_memsThread->isRunning())
  {
    emit requestThreadShutdown();

    m_memsThread->wait(2000);
  }

  event->accept();
}

void MainWindow::LambdaMaxOnce()
{
	m_ui->m_LambdaMaxOnce->setChecked(true);
}
void MainWindow::LambdaMinOnce()
{
	m_ui->m_LambdaMinOnce->setChecked(true);
}
void MainWindow::IACMinOnce()
{
	m_ui->m_IACMinOnce->setChecked(true);
}

void MainWindow::clearRecordedAnomalies()
{
	m_ui->m_LambdaMaxOnce->setChecked(false);
	m_ui->m_LambdaMinOnce->setChecked(false);
	m_ui->m_IACMinOnce->setChecked(false);
}

/**
 * Reponds to the "connect" signal from the MEMSInterface by enabling/disabling
 * the appropriate buttons and setting a message in the status bar.
 */
void MainWindow::onConnect()
{
  m_ui->m_connectButton->setEnabled(false);
  m_ui->m_disconnectButton->setEnabled(true);
  m_ui->m_commsGoodLed->setChecked(false);
  m_ui->m_commsBadLed->setChecked(false);
  m_ui->m_closedLoopLed->setChecked(false);
  m_ui->m_idleSwitchLed->setChecked(false);
  // m_ui->m_clearFaultsButton->setEnabled(true);
  // m_ui->m_clearRecordedAnomalies->setEnabled(true);
  m_ui->m_resetAdjustmentsButton->setEnabled(true);
  m_ui->m_resetECUButton->setEnabled(true);
}

/**
 * Reponds to the "disconnect" signal from the MEMSInterface by enabling/disabling
 * the appropriate buttons and setting a message in the status bar.
 */
void MainWindow::onDisconnect()
{
  m_ui->m_connectButton->setEnabled(true);
  m_ui->m_disconnectButton->setEnabled(false);
  m_ui->m_engine_error->setChecked(false);
  m_ui->m_commsGoodLed->setChecked(false);
  m_ui->m_commsBadLed->setChecked(false);
  m_ui->m_ecuIdLabel->setText("ECU ID:");
  m_ui->m_mapGauge->setValue(0.0);
  m_ui->m_revCounter->setValue(0.0);
  m_ui->m_waterTempGauge->setValue(m_ui->m_waterTempGauge->minimum());
  m_ui->m_airTempGauge->setValue(m_ui->m_airTempGauge->minimum());
  m_ui->m_idle_position->setValue(0);
  m_ui->m_throttle_pos->setValue(0); 
  m_ui->m_ignition_advance->setValue(0);
  m_ui->e_ignition_advance->setValue(0);
  m_ui->e_short_term_fuel_trim->setValue(0);
  m_ui->e_lambda->setValue(0);
  m_ui->m_revCounter_exhaust->setValue(0);
  m_ui->e_idle_error->setValue(0);
  m_ui->m_short_term_correction->setValue(0);
  m_ui->m_long_trim->setText("--");
  m_ui->m_idleBypassPosBar_2->setValue(0);
  m_ui->m_idleSwitchLed->setChecked(false);
  m_ui->m_lambda_voltage->setValue(0);
  m_ui->m_battery->setValue(0);
  m_ui->m_faultLedCTS->setChecked(false);
  m_ui->m_faultLedATS->setChecked(false);
  m_ui->m_faultLed03->setChecked(false);
  m_ui->m_faultLed04->setChecked(false);
  m_ui->m_faultLed05->setChecked(false);
  m_ui->m_faultLedFTS->setChecked(false);
  m_ui->m_faultLed07->setChecked(false);
  m_ui->m_faultLed08->setChecked(false);
  m_ui->m_faultLed09->setChecked(false);
  m_ui->m_faultLedFuelPump->setChecked(false);
  m_ui->m_faultLedFuelPumpSupply->setChecked(false);
  m_ui->m_faultLed12->setChecked(false);
  m_ui->m_faultLedPurge->setChecked(false);
  m_ui->m_faultLedMap->setChecked(false);
  m_ui->m_faultLed15->setChecked(false);
  m_ui->m_faultLedTps->setChecked(false);
  m_ui->m_faultLedTpsSupply->setChecked(false);
  m_ui->m_faultLed18->setChecked(false);
  m_ui->m_faultLedLambdaCircuit->setChecked(false);
  m_ui->m_faultLedLambdaSupply->setChecked(false);
  m_ui->m_faultLed21->setChecked(false);
  m_ui->m_faultLed22->setChecked(false);
  m_ui->m_faultLed23->setChecked(false);
  m_ui->m_faultLed24->setChecked(false);
  m_ui->m_LambdaMaxOnce->setChecked(false);
  m_ui->m_LambdaMinOnce->setChecked(false);
  m_ui->m_IACMinOnce->setChecked(false);
  m_ui->closedloop_led->setChecked(false);
  m_ui->m_closedLoopLed->setChecked(false);
  m_ui->idleswitch_led->setChecked(false);
  setActuatorTestsEnabled(false);
  setAdjustmentsEnabled(false);
  setActuatorsOffEnabled(false);
}

/**
 * Responds to the "read error" signal from the worker thread by turning
 * on a red lamp.
 */
void MainWindow::onReadError()
{
  m_ui->m_commsGoodLed->setChecked(false);
  m_ui->m_commsBadLed->setChecked(true);
  setActuatorTestsEnabled(false);
  setAdjustmentsEnabled(false);
  setActuatorsOffEnabled(false);
  m_ui->m_connectButton->setEnabled(true);
  m_ui->m_disconnectButton->setEnabled(true);
  m_ui->m_engine_error->setChecked(false);
}

/**
 * Responds to the "read success" signal from the worker thread by turning
 * on a green lamp.
 */
void MainWindow::onReadSuccess()
{
  m_ui->m_commsGoodLed->setChecked(true);
  m_ui->m_commsBadLed->setChecked(false);
  m_ui->m_connectButton->setEnabled(false);
  m_ui->m_disconnectButton->setEnabled(true);
}

/**
 * Opens the log file for writing.
 */
void MainWindow::onStartLogging()
{
  m_logger->EcuIdTransmitted(m_ui->m_ecuIdLabel->text());
  if (m_logger->openLog(m_ui->m_logFileNameBox->text()))
  {
	m_ui->m_startLoggingButton->setEnabled(false);
    m_ui->m_stopLoggingButton->setEnabled(true);
  }
  else
  {
    QMessageBox::warning(this, "Error", "Failed to open log file (" + m_logger->getLogPath() + ")", QMessageBox::Ok);
  }
}

/**
 * Closes the open log file.
 */
void MainWindow::onStopLogging()
{
  m_logger->closeLog();
  m_ui->m_stopLoggingButton->setEnabled(false);
  m_ui->m_startLoggingButton->setEnabled(true);
}

/**
 * Displays an dialog box with information about the program.
 */
void MainWindow::onHelpAboutClicked()
{
  if (m_aboutBox == 0)
  {
    m_aboutBox = new AboutBox(style(), this->windowTitle(), m_mems->getVersion(), this);
  }
  m_aboutBox->exec();
}

/**
 * Displays the online help.
 */
void MainWindow::onHelpContentsClicked()
{
  if (m_helpViewerDialog == 0)
  {
    m_helpViewerDialog = new HelpViewer(this->windowTitle(), this);
  }
  m_helpViewerDialog->show();
}

/**
 * Displays a message box indicating that an error in connecting to the
 * serial device.
 * @param Name of the serial device that the software attempted to open
 */
void MainWindow::onFailedToConnect(QString dev)
{
  if (dev.isEmpty() || dev.isNull())
  {
    QMessageBox::warning(this, "Error",
                         QString("Error connecting to ECU. No serial port name specified.\n\n") +
                         QString("Set a serial device by selecting \"Edit Settings\" from the \"Options\" menu."),
                         QMessageBox::Ok);
  }
  else
  {
    QMessageBox::warning(this, "Error",
                         "Error connecting to ECU on port " + dev + ".\nCheck cable wiring and check that ECU is on.",
                         QMessageBox::Ok);
  }
}

/**
 * Displays a message box indicating that an action cannot be completed due
 * to the software not being connected to the ECU.
 */
void MainWindow::onNotConnected()
{
  if (m_pleaseWaitBox != 0)
  {
    m_pleaseWaitBox->hide();
  }

  QMessageBox::warning(this, "Error",
                       "This requires that the software first be connected to the ECU (using the \"Connect\" button.)",
                       QMessageBox::Ok);
}

void MainWindow::onFuelPumpTestComplete()
{
  m_ui->m_testFuelPumpRelayButton->setEnabled(true);
  m_ui->m_testFuelPumpOnButton->setEnabled(true);
  m_ui->m_testFuelPumpOffButton->setEnabled(false);
}

void MainWindow::onACRelayTestComplete()
{
  m_ui->m_testACRelayButton->setEnabled(true);
  m_ui->m_onACRelayButton->setEnabled(true);
  m_ui->m_offACRelayButton->setEnabled(false);
}

void MainWindow::onPTCRelayTestComplete()
{
  m_ui->m_testPTCRelayButton->setEnabled(true);
  m_ui->m_onPTCRelayButton->setEnabled(true);
  m_ui->m_offPTCRelayButton->setEnabled(false);
}

void MainWindow::onO2HeaterTestComplete()
{
  m_ui->m_O2Heater_TestButton->setEnabled(true);
  m_ui->m_O2Heater_OnButton->setEnabled(true);
  m_ui->m_O2Heater_OffButton->setEnabled(false);
}

void MainWindow::onBoostValveTestComplete()
{
  m_ui->m_Boost_Valve_TestButton->setEnabled(true);
  m_ui->m_Boost_Valve_OnButton->setEnabled(true);
  m_ui->m_Boost_Valve_OnButton->setEnabled(false);
}

void MainWindow::onPurgeValveTestComplete()
{
  m_ui->m_Purge_Valve_TestButton->setEnabled(true);
  m_ui->m_Purge_Valve_OnButton->setEnabled(true);
  m_ui->m_Purge_Valve_OffButton->setEnabled(false);
}

void MainWindow::onFan1TestComplete()
{
  m_ui->m_Fan1_TestButton->setEnabled(true);
  m_ui->m_Fan1_OnButton->setEnabled(true);
  m_ui->m_Fan1_OffButton->setEnabled(false);
}

void MainWindow::onFan2TestComplete()
{
  m_ui->m_Fan2_TestButton->setEnabled(true);
  m_ui->m_Fan2_OnButton->setEnabled(true);
  m_ui->m_Fan2_OffButton->setEnabled(false);
}

void MainWindow::onFan3TestComplete()
{
  m_ui->m_Fan3_TestButton->setEnabled(true);
  m_ui->m_Fan3_OnButton->setEnabled(true);
  m_ui->m_Fan3_OffButton->setEnabled(false);
}

void MainWindow::onTestFuelPumpRelayClicked()
{
  m_ui->m_testFuelPumpRelayButton->setEnabled(false);
  m_ui->m_testFuelPumpOnButton->setEnabled(false);
  m_ui->m_testFuelPumpOffButton->setEnabled(false);
  emit fuelPumpTest();
}

void MainWindow::onTestFuelPumpOnClicked()
{
  m_ui->m_testFuelPumpRelayButton->setEnabled(false);
  m_ui->m_testFuelPumpOnButton->setEnabled(false);
  m_ui->m_testFuelPumpOffButton->setEnabled(true);
  emit fuelPumpOn();
}

void MainWindow::onTestFuelPumpOffClicked()
{
  m_ui->m_testFuelPumpRelayButton->setEnabled(true);
  m_ui->m_testFuelPumpOnButton->setEnabled(true);
  m_ui->m_testFuelPumpOffButton->setEnabled(false);
  emit fuelPumpOff();
}

void MainWindow::onTestACRelayClicked()
{
  m_ui->m_testACRelayButton->setEnabled(false);
  m_ui->m_onACRelayButton->setEnabled(false);
  m_ui->m_offACRelayButton->setEnabled(false);
  emit acRelayTest();
}

void MainWindow::onOnACRelayClicked()
{
  m_ui->m_testACRelayButton->setEnabled(false);
  m_ui->m_onACRelayButton->setEnabled(false);
  m_ui->m_offACRelayButton->setEnabled(true);
  emit acRelayOn();
}

void MainWindow::onOffACRelayClicked()
{
  m_ui->m_testACRelayButton->setEnabled(true);
  m_ui->m_onACRelayButton->setEnabled(true);
  m_ui->m_offACRelayButton->setEnabled(false);
  emit acRelayOff();
}

void MainWindow::onTestPTCRelayClicked()
{
  m_ui->m_testPTCRelayButton->setEnabled(false);
  m_ui->m_onPTCRelayButton->setEnabled(false);
  m_ui->m_offPTCRelayButton->setEnabled(false);
  emit ptcRelayTest();
}

void MainWindow::onOnPTCRelayClicked()
{
  m_ui->m_testPTCRelayButton->setEnabled(false);
  m_ui->m_onPTCRelayButton->setEnabled(false);
  m_ui->m_offPTCRelayButton->setEnabled(true);
  emit ptcRelayOn();
}

void MainWindow::onOffPTCRelayClicked()
{
  m_ui->m_testPTCRelayButton->setEnabled(true);
  m_ui->m_onPTCRelayButton->setEnabled(true);
  m_ui->m_offPTCRelayButton->setEnabled(false);
  emit ptcRelayOff();
}

void MainWindow::onMoveIACClicked()
{
  m_ui->m_moveIACButton->setEnabled(false);
  QApplication::setOverrideCursor(Qt::WaitCursor);
  float percent = (float)m_ui->m_iacPositionSlider->value() * 25.0 / 100.0;
  int desiredPos = (int)((float)IAC_MAXIMUM * percent);
  emit moveIAC(desiredPos);
}

void MainWindow::onMoveIACComplete()
{
  QApplication::restoreOverrideCursor();
  m_ui->m_moveIACButton->setEnabled(true);
}

void MainWindow::onCommandError()
{
  QMessageBox::warning(this, "Error", "Error sending command.", QMessageBox::Ok);
}

void MainWindow::onFaultCodeClearComplete()
{
  QMessageBox::information(this, "Complete", "Successfully cleared fault codes.", QMessageBox::Ok);
}

void MainWindow::onAdjustmentsResetComplete()
{
  QMessageBox::information(this, "Complete", "Successfully reset all adjustments.", QMessageBox::Ok);
}

void MainWindow::onConfirmResetAdjustments()
{
  if(QMessageBox::warning(this, "You will lose all adjustments!", "<p>This will reset all adjustments to factory settings.</p><p><b>Continue at your own risk!</b></p><i>Are you sure you want to continue?</i>", QMessageBox::Ok | QMessageBox::Cancel) == QMessageBox::Ok)
	 {emit ResetAdjustmentsRequested();}	
}

void MainWindow::onECUResetComplete()
{
  QMessageBox::information(this, "Complete", "Successfully reset ECU.", QMessageBox::Ok);
}

void MainWindow::onConfirmResetECU()
{
  if(QMessageBox::warning(this, "You will lose all data!", "<p>This will completely reset the ECU.</p><p><b>Continue at your own risk!</b></p><i>Are you sure you want to continue?</i>", QMessageBox::Ok | QMessageBox::Cancel) == QMessageBox::Ok)
	 {emit ResetECURequested();}	
}

void MainWindow::on_m_fuel_trim_plusButton_clicked()
{
/*     int i;
    m_ui->m_fuel_trim_plusButton->setEnabled(false);
    QApplication::setOverrideCursor(Qt::WaitCursor);
 */ emit fuel_trim_plus();
// QApplication::restoreOverrideCursor();
     m_ui->m_fuel_trim_plusButton->setEnabled(true);
}

void MainWindow::on_m_fuel_trim_minusButton_clicked()
{
  emit fuel_trim_minus();
}

void MainWindow::on_m_idle_decay_plusButton_clicked()
{
   emit idle_decay_plus();
}

void MainWindow::on_m_idle_decay_minusButton_clicked()
{
   emit idle_decay_minus();
}

void MainWindow::on_m_idle_speed_plusButton_clicked()
{
   emit idle_speed_plus();
}

void MainWindow::on_m_idle_speed_minusButton_clicked()
{
   emit idle_speed_minus();
}

void MainWindow::on_exitButton_clicked()
{
  this->close();
}

void MainWindow::on_m_ignition_advance_plusButton_clicked()
{
    emit ignition_advance_plus();
}

void MainWindow::on_m_ignition_advance_minusButton_clicked()
{
    emit ignition_advance_minus();
}

void MainWindow::on_m_idle_air_plusButton_clicked()
{
  emit moveIAC(+1);
}

void MainWindow::on_m_idle_air_minusButton_clicked()
{
    emit moveIAC(-1);
}

void MainWindow::on_interactive_push_button_clicked()
{
    emit interactive_mode();
}

void MainWindow::on_m_Purge_Valve_TestButton_clicked()
{
    m_ui->m_Purge_Valve_TestButton->setEnabled(false);
	m_ui->m_Purge_Valve_OnButton->setEnabled(false);
	m_ui->m_Purge_Valve_OffButton->setEnabled(false);
	emit Purge_Valve_Test();
}

void MainWindow::on_m_Purge_Valve_OnButton_clicked()
{
    m_ui->m_Purge_Valve_TestButton->setEnabled(false);
	m_ui->m_Purge_Valve_OnButton->setEnabled(false);
	m_ui->m_Purge_Valve_OffButton->setEnabled(true);
	emit Purge_Valve_On();
}

void MainWindow::on_m_Purge_Valve_OffButton_clicked()
{
    m_ui->m_Purge_Valve_TestButton->setEnabled(true);
	m_ui->m_Purge_Valve_OnButton->setEnabled(true);
	m_ui->m_Purge_Valve_OffButton->setEnabled(false);
	emit Purge_Valve_Off();
}

void MainWindow::on_m_O2Heater_TestButton_clicked()
{
    m_ui->m_O2Heater_TestButton->setEnabled(false);
	m_ui->m_O2Heater_OnButton->setEnabled(false);
	m_ui->m_O2Heater_OffButton->setEnabled(false);
	emit O2Heater_Test();
}

void MainWindow::on_m_O2Heater_OnButton_clicked()
{
    if(QMessageBox::warning(this, "WARNING: RISK OF DAMAGING THE SENSOR", "<p>Prolonged heating can overheat and damage the lambda sensor. </p><p>Also it is not advised to start the engine untill the sensor has sufficiently cooled down.</p><p><b>Continue at your own risk!</b></p><i>Are you sure you want to continue?</i>", QMessageBox::Ok | QMessageBox::Cancel) == QMessageBox::Ok)
	 {
		m_ui->m_O2Heater_TestButton->setEnabled(false);
		m_ui->m_O2Heater_OnButton->setEnabled(false);
		m_ui->m_O2Heater_OffButton->setEnabled(true);
		emit O2Heater_On(); 
	 }
}

void MainWindow::on_m_O2Heater_OffButton_clicked()
{
    m_ui->m_O2Heater_TestButton->setEnabled(true);
	m_ui->m_O2Heater_OnButton->setEnabled(true);
	m_ui->m_O2Heater_OffButton->setEnabled(false);
	emit O2Heater_Off();
}

void MainWindow::on_m_Boost_Valve_TestButton_clicked()
{
    m_ui->m_Boost_Valve_TestButton->setEnabled(false);
	m_ui->m_Boost_Valve_OnButton->setEnabled(false);
	m_ui->m_Boost_Valve_OffButton->setEnabled(false);
	emit Boost_Valve_Test();
}

void MainWindow::on_m_Boost_Valve_OnButton_clicked()
{
    m_ui->m_Boost_Valve_TestButton->setEnabled(false);
	m_ui->m_Boost_Valve_OnButton->setEnabled(false);
	m_ui->m_Boost_Valve_OffButton->setEnabled(true);
	emit Boost_Valve_On();
}

void MainWindow::on_m_Boost_Valve_OffButton_clicked()
{
    m_ui->m_Boost_Valve_TestButton->setEnabled(true);
	m_ui->m_Boost_Valve_OnButton->setEnabled(true);
	m_ui->m_Boost_Valve_OnButton->setEnabled(false);
	emit Boost_Valve_Off();
}

void MainWindow::on_m_Fan1_TestButton_clicked()
{
    m_ui->m_Fan1_TestButton->setEnabled(false);
	m_ui->m_Fan1_OnButton->setEnabled(false);
	m_ui->m_Fan1_OffButton->setEnabled(false);
	emit Fan1_Test();
}


void MainWindow::on_m_Fan2_TestButton_clicked()
{
    m_ui->m_Fan2_TestButton->setEnabled(false);
	m_ui->m_Fan2_OnButton->setEnabled(false);
	m_ui->m_Fan2_OffButton->setEnabled(false);
	emit Fan1_Test();
}

void MainWindow::on_m_Fan3_TestButton_clicked()
{
    m_ui->m_Fan3_TestButton->setEnabled(false);
	m_ui->m_Fan3_OnButton->setEnabled(false);
	m_ui->m_Fan3_OffButton->setEnabled(false);
	emit Fan1_Test();
}

void MainWindow::on_m_Fan1_OnButton_clicked()
{
    m_ui->m_Fan1_TestButton->setEnabled(false);
	m_ui->m_Fan1_OnButton->setEnabled(false);
	m_ui->m_Fan1_OffButton->setEnabled(true);
	emit Fan1_On();
}

void MainWindow::on_m_Fan2_OnButton_clicked()
{
	m_ui->m_Fan2_TestButton->setEnabled(false);
	m_ui->m_Fan2_OnButton->setEnabled(false);
	m_ui->m_Fan2_OffButton->setEnabled(true);
	emit Fan2_On();
}

void MainWindow::on_m_Fan3_OnButton_clicked()
{
    m_ui->m_Fan3_TestButton->setEnabled(false);
	m_ui->m_Fan3_OnButton->setEnabled(false);
	m_ui->m_Fan3_OffButton->setEnabled(true);
	emit Fan3_On();
}

void MainWindow::on_m_Fan1_OffButton_clicked()
{
    m_ui->m_Fan1_TestButton->setEnabled(true);
	m_ui->m_Fan1_OnButton->setEnabled(true);
	m_ui->m_Fan1_OffButton->setEnabled(false);
	emit Fan1_Off();
}

void MainWindow::on_m_Fan2_OffButton_clicked()
{
	m_ui->m_Fan3_TestButton->setEnabled(true);
	m_ui->m_Fan2_OnButton->setEnabled(true);
	m_ui->m_Fan2_OffButton->setEnabled(false);
    emit Fan2_Off();
}

void MainWindow::on_m_Fan3_OffButton_clicked()
{
    m_ui->m_Fan3_TestButton->setEnabled(true);
	m_ui->m_Fan3_OnButton->setEnabled(true);
	m_ui->m_Fan3_OffButton->setEnabled(false);
	emit Fan3_Off();
}

void MainWindow::on_m_IACMinusButton_clicked()
{
	emit CloseIAC();
}

void MainWindow::on_m_IACPlusButton_clicked()
{
	emit OpenIAC();
}

void MainWindow::on_m_AllActuatorsOffButton_clicked()
{
    setActuatorTestsEnabled(true);
	setActuatorsOffEnabled(false);
	emit AllActuators_Off();
}