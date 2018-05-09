/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "manometer.h"
#include "manometer100.h"
#include "manometer900.h"
#include "qledindicator.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_helpContentsAction;
    QAction *m_helpAboutAction;
    QAction *m_showFaultCodesAction;
    QAction *m_idleAirControlAction;
    QAction *m_editSettingsAction;
    QAction *m_saveROMImageAction;
    QAction *m_exitAction;
    QWidget *centralWidget;
    QTabWidget *Tab_main;
    QWidget *overview_tab;
    ManoMeter100 *m_idle_position;
    ManoMeter *m_battery;
    ManoMeter *m_ignition_advance;
    ManoMeter *m_short_term_correction;
    ManoMeter100 *m_throttle_pos;
    ManoMeter900 *m_lambda_voltage;
    QLabel *m_throttle_pos_label;
    QLabel *m_short_term_label;
    QLabel *m_idlebypass_pos_label;
    QLabel *m_battery_voltage_label;
    QLabel *m_ignition_advance_label;
    QLabel *m_lambda_label;
    QLabel *m_closed_loop_label;
    QLedIndicator *m_closedLoopLed;
    ManoMeter *m_revCounter;
    ManoMeter100 *m_mapGauge;
    QLabel *m_revCounterLabel;
    QLabel *m_mapGaugeLabel;
    QLabel *m_idleSwitchLabel;
    QLedIndicator *m_idleSwitchLed;
    QWidget *layoutWidget;
    QGridLayout *m_dataBLayout;
    QLabel *m_logFileNameLabel;
    QLineEdit *m_logFileNameBox;
    QPushButton *m_startLoggingButton;
    QPushButton *m_stopLoggingButton;
    ManoMeter *m_waterTempGauge;
    ManoMeter100 *m_airTempGauge;
    QLabel *m_waterTempLabel;
    QLabel *m_airTempLabel;
    QLabel *m_long_trim_label;
    QLabel *m_long_trim;
    QWidget *emission_tab;
    QFrame *m_hline1_3;
    QPushButton *m_fuel_trim_plusButton;
    QPushButton *m_fuel_trim_minusButton;
    QPushButton *m_idle_decay_plusButton;
    QPushButton *m_idle_decay_minusButton;
    QPushButton *m_idle_speed_plusButton;
    QPushButton *m_idle_speed_minusButton;
    QPushButton *m_ignition_advance_minusButton;
    QPushButton *m_ignition_advance_plusButton;
    ManoMeter *m_revCounter_exhaust;
    ManoMeter *e_idle_error;
    ManoMeter *e_ignition_advance;
    ManoMeter *e_short_term_fuel_trim;
    ManoMeter900 *e_lambda;
    QLabel *label_45;
    QLabel *label_52;
    QLabel *label_51;
    QLedIndicator *closedloop_led;
    QLabel *label_47;
    QLedIndicator *idleswitch_led;
    QLabel *label_53;
    QLabel *emission_lambda_voltage;
    QLabel *m_revCounterLabel_2;
    QLCDNumber *e_FuelTrim_lcd;
    QLCDNumber *e_IdleDecay_lcd;
    QLCDNumber *e_IdleSpeed_lcd;
    QLCDNumber *e_IgnitionAdvance_lcd;
    QLabel *emi_rpm;
    QLabel *emi_shorttermftrim;
    QLabel *emi_idledecay;
    QLabel *emi_ignadvance;
    QLineEdit *lineEdit_3;
    QPushButton *m_resetECUButton;
    QPushButton *m_resetAdjustmentsButton;
    QWidget *errors;
    QWidget *layoutWidget_3;
    QGridLayout *m_faultCodesLayout;
    QLabel *m_faultCodesLabel;
    QLedIndicator *m_faultLedCTS;
    QLabel *m_faultCode01Label;
    QLedIndicator *m_faultLedATS;
    QLabel *m_faultCode02Label;
    QLedIndicator *m_faultLed03;
    QLabel *m_faultCode03Label;
    QLedIndicator *m_faultLed04;
    QLabel *m_faultCode04Label;
    QLedIndicator *m_faultLed05;
    QLabel *m_faultCode05Label;
    QLedIndicator *m_faultLedFTS;
    QLabel *m_faultCode06Label;
    QLedIndicator *m_faultLed07;
    QLabel *m_faultCode07Label;
    QLedIndicator *m_faultLed08;
    QLabel *m_faultCode08Label;
    QLedIndicator *m_faultLed09;
    QLabel *m_faultCode09Label;
    QLedIndicator *m_faultLedFuelPump;
    QLabel *m_faultCode10Label;
    QLedIndicator *m_faultLedFuelPumpSupply;
    QLabel *m_faultCode11Label;
    QLedIndicator *m_faultLed12;
    QLabel *m_faultCode12Label;
    QLedIndicator *m_faultLedPurge;
    QLabel *m_faultCode13Label;
    QLedIndicator *m_faultLedMap;
    QLabel *m_faultCode14Label;
    QLedIndicator *m_faultLed15;
    QLabel *m_faultCode15Label;
    QLedIndicator *m_faultLedTps;
    QLabel *m_faultCode16Label;
    QLedIndicator *m_faultLedTpsSupply;
    QLabel *m_faultCode17Label;
    QLedIndicator *m_faultLed18;
    QLabel *m_faultCode18Label;
    QLedIndicator *m_faultLedLambdaCircuit;
    QLabel *m_faultCode19Label;
    QLedIndicator *m_faultLedLambdaSupply;
    QLabel *m_faultCode20Label;
    QLedIndicator *m_faultLed21;
    QLabel *m_faultCode21Label;
    QLedIndicator *m_faultLed22;
    QLabel *m_faultCode22Label;
    QLedIndicator *m_faultLed23;
    QLabel *m_faultCode23Label;
    QLedIndicator *m_faultLed24;
    QLabel *m_faultCode24Label;
    QPushButton *m_clearFaultsButton;
    QWidget *layoutWidget_9;
    QGridLayout *m_faultCodesLayout2;
    QLedIndicator *m_RPMSensor;
    QLabel *m_RPMSensorLabel;
    QLabel *m_empty3;
    QLabel *m_faultCodesLabel2;
    QLabel *m_faultCodesLabel3;
    QLabel *m_faultCodesLabel4;
    QLedIndicator *m_LambdaSensor;
    QLabel *m_LambdaSensorLabel;
    QLedIndicator *m_LambdaMax;
    QLedIndicator *m_LambdaMaxOnce;
    QLabel *m_LambdaMaxLabel;
    QLedIndicator *m_LambdaMin;
    QLedIndicator *m_LambdaMinOnce;
    QLabel *m_LambdaMinLabel;
    QLedIndicator *m_IACMin;
    QLedIndicator *m_IACMinOnce;
    QLabel *m_IACMinLabel;
    QLedIndicator *m_JackCount;
    QLabel *m_JackCountLabel;
    QPushButton *m_clearRecordedAnomalies;
    QWidget *actuators;
    QWidget *layoutWidget_4;
    QGridLayout *actuators_layout1;
    QLabel *m_testActuatorLabel;
    QLabel *m_PTCRelay;
    QPushButton *m_testPTCRelayButton;
    QPushButton *m_onPTCRelayButton;
    QPushButton *m_offPTCRelayButton;
    QLabel *m_FuelPumpRelay;
    QPushButton *m_testFuelPumpRelayButton;
    QPushButton *m_testFuelPumpOnButton;
    QPushButton *m_testFuelPumpOffButton;
    QLabel *m_O2Heater;
    QPushButton *m_O2Heater_TestButton;
    QPushButton *m_O2Heater_OnButton;
    QPushButton *m_O2Heater_OffButton;
    QLabel *m_Purge_Valve;
    QPushButton *m_Purge_Valve_TestButton;
    QPushButton *m_Purge_Valve_OnButton;
    QPushButton *m_Purge_Valve_OffButton;
    QLabel *m_ACRelay;
    QPushButton *m_testACRelayButton;
    QPushButton *m_onACRelayButton;
    QPushButton *m_offACRelayButton;
    QLabel *m_Boost_Valve;
    QPushButton *m_Boost_Valve_TestButton;
    QPushButton *m_Boost_Valve_OnButton;
    QPushButton *m_Boost_Valve_OffButton;
    QLabel *m_Fan1;
    QPushButton *m_Fan1_TestButton;
    QPushButton *m_Fan1_OnButton;
    QPushButton *m_Fan1_OffButton;
    QLabel *m_Fan2;
    QPushButton *m_Fan2_TestButton;
    QPushButton *m_Fan2_OnButton;
    QPushButton *m_Fan2_OffButton;
    QLabel *m_Fan3;
    QPushButton *m_Fan3_TestButton;
    QPushButton *m_Fan3_OnButton;
    QPushButton *m_Fan3_OffButton;
    QLabel *m_empty1;
    QLabel *m_FuelInjector;
    QPushButton *m_testFuelInjectorButton;
    QLabel *m_IgnitionCoil;
    QPushButton *m_testIgnitionCoilButton;
    QLabel *m_empty2;
    QLabel *m_ResetActuators;
    QPushButton *m_AllActuatorsOffButton;
    QLabel *label;
    QPushButton *m_moveIACButton;
    QPushButton *m_IACMinusButton;
    QPushButton *m_IACPlusButton;
    QWidget *layoutWidget_5;
    QHBoxLayout *idle_bypass_layout;
    QLabel *m_idleBypassLabel_2;
    QLabel *m_iacPositionSteps_2;
    QProgressBar *m_idleBypassPosBar_2;
    QWidget *layoutWidget_6;
    QHBoxLayout *idle_bypass_layout2;
    QLabel *m_iacSliderClosedLabel;
    QSlider *m_iacPositionSlider;
    QLabel *m_iacSliderOpenLabel;
    QFrame *m_vline3;
    QWidget *raw;
    QWidget *raw_1;
    QGridLayout *HF_table;
    QLabel *header_1;
    QLabel *header_2;
    QLabel *header_3;
    QLabel *header_4;
    QLabel *x01;
    QLabel *label_0x01;
    QLabel *m_7D_01;
    QLabel *r_7D_01;
    QLabel *x02;
    QLabel *label_0x02;
    QLabel *m_7D_02;
    QLabel *r_7D_02;
    QLabel *x03;
    QLabel *label_0x03;
    QLabel *m_7D_03;
    QLabel *x04;
    QLabel *label_0x04;
    QLabel *m_7D_04;
    QLabel *r_7D_04;
    QLabel *x05;
    QLabel *label_0x05;
    QLabel *m_7D_05;
    QLabel *r_7D_05;
    QLabel *x06;
    QLabel *label_0x06;
    QLabel *m_7D_06;
    QLabel *r_7D_06;
    QLabel *x07;
    QLabel *label_0x07;
    QLabel *m_7D_07;
    QLabel *x08;
    QLabel *label_0x08;
    QLabel *m_7D_08;
    QLabel *x09;
    QLabel *label_0x09;
    QLabel *m_7D_09;
    QLabel *r_7D_09;
    QLabel *x0A;
    QLabel *label_0x0A;
    QLabel *m_7D_0A;
    QLabel *r_7D_0A;
    QLabel *x0B;
    QLabel *label_0x0B;
    QLabel *m_7D_0B;
    QLabel *r_7D_0B;
    QLabel *x0C;
    QLabel *label_0x0C;
    QLabel *m_7D_0C;
    QLabel *r_7D_0C;
    QLabel *x0D;
    QLabel *label_0x0D;
    QLabel *m_7D_0D;
    QLabel *r_7D_0D;
    QLabel *x0E;
    QLabel *label_0x0E;
    QLabel *m_7D_0E;
    QLabel *r_7D_0E;
    QLabel *x0F;
    QLabel *label_0x0F;
    QLabel *m_7D_0F;
    QLabel *r_7D_0F;
    QLabel *x10;
    QLabel *label_0x10;
    QLabel *m_7D_10;
    QLabel *r_7D_10;
    QLabel *x11;
    QLabel *label_0x11;
    QLabel *m_7D_11;
    QLabel *r_7D_11;
    QLabel *x12;
    QLabel *label_0x12;
    QLabel *m_7D_12;
    QLabel *r_7D_12;
    QLabel *x13;
    QLabel *label_0x13;
    QLabel *m_7D_13;
    QLabel *r_7D_13;
    QLabel *x15;
    QLabel *label_0x15;
    QLabel *m_7D_15;
    QLabel *x16;
    QLabel *label_0x16;
    QLabel *m_7D_16;
    QLabel *r_7D_16;
    QLabel *x17;
    QLabel *label_0x17;
    QLabel *m_7D_17;
    QLabel *x18;
    QLabel *label_0x18;
    QLabel *m_7D_18;
    QLabel *x19;
    QLabel *label_0x19;
    QLabel *m_7D_19;
    QLabel *x1A;
    QLabel *label_0x1A;
    QLabel *m_7D_1A;
    QLabel *x1B;
    QLabel *label_0x1B;
    QLabel *m_7D_1B;
    QLabel *x1C;
    QLabel *label_0x1C;
    QLabel *m_7D_1C;
    QLabel *x1D;
    QLabel *label_0x1D;
    QLabel *m_7D_1D;
    QLabel *x1E;
    QLabel *label_0x1E;
    QLabel *m_7D_1E;
    QLabel *x1F;
    QLabel *label_0x1F;
    QLabel *m_7D_1F;
    QWidget *raw_2;
    QGridLayout *HF_table_2;
    QLabel *header_5;
    QLabel *header_6;
    QLabel *header_7;
    QLabel *header_8;
    QLabel *Ax01;
    QLabel *label_80x01;
    QLabel *m_80_01;
    QLabel *r_80_01;
    QLabel *Ax03;
    QLabel *label_80x03;
    QLabel *m_80_03;
    QLabel *r_80_03;
    QLabel *Ax04;
    QLabel *label_80x04;
    QLabel *m_80_04;
    QLabel *r_80_04;
    QLabel *Ax05;
    QLabel *label_80x05;
    QLabel *m_80_05;
    QLabel *r_80_05;
    QLabel *Ax06;
    QLabel *label_80x06;
    QLabel *m_80_06;
    QLabel *r_80_06;
    QLabel *Ax07;
    QLabel *label_80x07;
    QLabel *m_80_07;
    QLabel *r_80_07;
    QLabel *Ax08;
    QLabel *label_80x08;
    QLabel *m_80_08;
    QLabel *r_80_08;
    QLabel *Ax09;
    QLabel *label_80x09;
    QLabel *m_80_09;
    QLabel *r_80_09;
    QLabel *Ax0A;
    QLabel *label_80x0A;
    QLabel *m_80_0A;
    QLabel *r_80_0A;
    QLabel *Ax0B;
    QLabel *label_80x0B;
    QLabel *m_80_0B;
    QLabel *r_80_0B;
    QLabel *Ax0C;
    QLabel *label_80x0C;
    QLabel *m_80_0C;
    QLabel *r_80_0C;
    QLabel *Ax0D;
    QLabel *label_80x0D;
    QLabel *m_80_0D;
    QLabel *r_80_0D;
    QLabel *Ax0E;
    QLabel *label_80x0E;
    QLabel *m_80_0E;
    QLabel *r_80_0E;
    QLabel *Ax0F;
    QLabel *label_80x0F;
    QLabel *m_80_0F;
    QLabel *Ax10;
    QLabel *label_80x10;
    QLabel *m_80_10;
    QLabel *r_80_10;
    QLabel *Ax11;
    QLabel *label_80x11;
    QLabel *m_80_11;
    QLabel *Ax12;
    QLabel *label_80x12;
    QLabel *m_80_12;
    QLabel *r_80_12;
    QLabel *Ax13;
    QLabel *label_80x13;
    QLabel *m_80_13;
    QLabel *r_80_13;
    QLabel *Ax15;
    QLabel *label_80x15;
    QLabel *m_80_15;
    QLabel *Ax16;
    QLabel *label_80x16;
    QLabel *m_80_16;
    QLabel *r_80_16;
    QLabel *Ax17;
    QLabel *label_80x17;
    QLabel *m_80_17;
    QLabel *r_80_17;
    QLabel *Ax19;
    QLabel *label_80x19;
    QLabel *m_80_19;
    QLabel *r_80_19;
    QLabel *Ax1A;
    QLabel *label_80x1A;
    QLabel *m_80_1A;
    QLabel *Ax1B;
    QLabel *label_80x1B;
    QLabel *m_80_1B;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayoutecuconnect;
    QPushButton *m_connectButton;
    QPushButton *m_disconnectButton;
    QFrame *m_vline0;
    QLabel *m_ecuIdLabel;
    QFrame *m_vline1;
    QHBoxLayout *comunicationlayout;
    QLabel *m_communicationsStatusLabel;
    QLedIndicator *m_commsGoodLed;
    QLedIndicator *m_commsBadLed;
    QFrame *m_vline2;
    QLabel *m_engineerrorLabel;
    QLedIndicator *m_engine_error;
    QWidget *layoutWidget_8;
    QHBoxLayout *m_lowerHorizontalLayout;
    QMenuBar *menuBar;
    QMenu *m_fileMenu;
    QMenu *m_optionsMenu;
    QMenu *m_helpMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1300, 690);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(905, 435));
        m_helpContentsAction = new QAction(MainWindow);
        m_helpContentsAction->setObjectName(QStringLiteral("m_helpContentsAction"));
        m_helpAboutAction = new QAction(MainWindow);
        m_helpAboutAction->setObjectName(QStringLiteral("m_helpAboutAction"));
        m_showFaultCodesAction = new QAction(MainWindow);
        m_showFaultCodesAction->setObjectName(QStringLiteral("m_showFaultCodesAction"));
        m_idleAirControlAction = new QAction(MainWindow);
        m_idleAirControlAction->setObjectName(QStringLiteral("m_idleAirControlAction"));
        m_editSettingsAction = new QAction(MainWindow);
        m_editSettingsAction->setObjectName(QStringLiteral("m_editSettingsAction"));
        m_saveROMImageAction = new QAction(MainWindow);
        m_saveROMImageAction->setObjectName(QStringLiteral("m_saveROMImageAction"));
        m_exitAction = new QAction(MainWindow);
        m_exitAction->setObjectName(QStringLiteral("m_exitAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Tab_main = new QTabWidget(centralWidget);
        Tab_main->setObjectName(QStringLiteral("Tab_main"));
        Tab_main->setGeometry(QRect(0, 35, 1300, 3441));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Tab_main->setFont(font);
        overview_tab = new QWidget();
        overview_tab->setObjectName(QStringLiteral("overview_tab"));
        m_idle_position = new ManoMeter100(overview_tab);
        m_idle_position->setObjectName(QStringLiteral("m_idle_position"));
        m_idle_position->setGeometry(QRect(760, 10, 200, 200));
        m_battery = new ManoMeter(overview_tab);
        m_battery->setObjectName(QStringLiteral("m_battery"));
        m_battery->setGeometry(QRect(1010, 10, 200, 200));
        m_ignition_advance = new ManoMeter(overview_tab);
        m_ignition_advance->setObjectName(QStringLiteral("m_ignition_advance"));
        m_ignition_advance->setGeometry(QRect(1010, 260, 200, 200));
        m_short_term_correction = new ManoMeter(overview_tab);
        m_short_term_correction->setObjectName(QStringLiteral("m_short_term_correction"));
        m_short_term_correction->setGeometry(QRect(760, 260, 200, 200));
        m_throttle_pos = new ManoMeter100(overview_tab);
        m_throttle_pos->setObjectName(QStringLiteral("m_throttle_pos"));
        m_throttle_pos->setGeometry(QRect(510, 10, 200, 200));
        m_lambda_voltage = new ManoMeter900(overview_tab);
        m_lambda_voltage->setObjectName(QStringLiteral("m_lambda_voltage"));
        m_lambda_voltage->setGeometry(QRect(510, 260, 200, 200));
        m_throttle_pos_label = new QLabel(overview_tab);
        m_throttle_pos_label->setObjectName(QStringLiteral("m_throttle_pos_label"));
        m_throttle_pos_label->setGeometry(QRect(510, 220, 200, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_throttle_pos_label->sizePolicy().hasHeightForWidth());
        m_throttle_pos_label->setSizePolicy(sizePolicy1);
        m_throttle_pos_label->setAlignment(Qt::AlignCenter);
        m_short_term_label = new QLabel(overview_tab);
        m_short_term_label->setObjectName(QStringLiteral("m_short_term_label"));
        m_short_term_label->setGeometry(QRect(760, 470, 200, 16));
        sizePolicy1.setHeightForWidth(m_short_term_label->sizePolicy().hasHeightForWidth());
        m_short_term_label->setSizePolicy(sizePolicy1);
        m_short_term_label->setAlignment(Qt::AlignCenter);
        m_idlebypass_pos_label = new QLabel(overview_tab);
        m_idlebypass_pos_label->setObjectName(QStringLiteral("m_idlebypass_pos_label"));
        m_idlebypass_pos_label->setGeometry(QRect(760, 220, 200, 16));
        sizePolicy1.setHeightForWidth(m_idlebypass_pos_label->sizePolicy().hasHeightForWidth());
        m_idlebypass_pos_label->setSizePolicy(sizePolicy1);
        m_idlebypass_pos_label->setAlignment(Qt::AlignCenter);
        m_battery_voltage_label = new QLabel(overview_tab);
        m_battery_voltage_label->setObjectName(QStringLiteral("m_battery_voltage_label"));
        m_battery_voltage_label->setGeometry(QRect(1010, 220, 200, 16));
        sizePolicy1.setHeightForWidth(m_battery_voltage_label->sizePolicy().hasHeightForWidth());
        m_battery_voltage_label->setSizePolicy(sizePolicy1);
        m_battery_voltage_label->setAlignment(Qt::AlignCenter);
        m_ignition_advance_label = new QLabel(overview_tab);
        m_ignition_advance_label->setObjectName(QStringLiteral("m_ignition_advance_label"));
        m_ignition_advance_label->setGeometry(QRect(1010, 470, 200, 16));
        sizePolicy1.setHeightForWidth(m_ignition_advance_label->sizePolicy().hasHeightForWidth());
        m_ignition_advance_label->setSizePolicy(sizePolicy1);
        m_ignition_advance_label->setAlignment(Qt::AlignCenter);
        m_lambda_label = new QLabel(overview_tab);
        m_lambda_label->setObjectName(QStringLiteral("m_lambda_label"));
        m_lambda_label->setGeometry(QRect(510, 470, 200, 16));
        sizePolicy1.setHeightForWidth(m_lambda_label->sizePolicy().hasHeightForWidth());
        m_lambda_label->setSizePolicy(sizePolicy1);
        m_lambda_label->setAlignment(Qt::AlignCenter);
        m_closed_loop_label = new QLabel(overview_tab);
        m_closed_loop_label->setObjectName(QStringLiteral("m_closed_loop_label"));
        m_closed_loop_label->setGeometry(QRect(610, 444, 260, 16));
        m_closed_loop_label->setAlignment(Qt::AlignCenter);
        m_closedLoopLed = new QLedIndicator(overview_tab);
        m_closedLoopLed->setObjectName(QStringLiteral("m_closedLoopLed"));
        m_closedLoopLed->setGeometry(QRect(722, 410, 26, 26));
        m_revCounter = new ManoMeter(overview_tab);
        m_revCounter->setObjectName(QStringLiteral("m_revCounter"));
        m_revCounter->setGeometry(QRect(10, 10, 200, 200));
        m_mapGauge = new ManoMeter100(overview_tab);
        m_mapGauge->setObjectName(QStringLiteral("m_mapGauge"));
        m_mapGauge->setGeometry(QRect(260, 10, 200, 200));
        m_revCounterLabel = new QLabel(overview_tab);
        m_revCounterLabel->setObjectName(QStringLiteral("m_revCounterLabel"));
        m_revCounterLabel->setGeometry(QRect(10, 220, 200, 16));
        sizePolicy1.setHeightForWidth(m_revCounterLabel->sizePolicy().hasHeightForWidth());
        m_revCounterLabel->setSizePolicy(sizePolicy1);
        m_revCounterLabel->setAlignment(Qt::AlignCenter);
        m_mapGaugeLabel = new QLabel(overview_tab);
        m_mapGaugeLabel->setObjectName(QStringLiteral("m_mapGaugeLabel"));
        m_mapGaugeLabel->setGeometry(QRect(260, 220, 200, 16));
        sizePolicy1.setHeightForWidth(m_mapGaugeLabel->sizePolicy().hasHeightForWidth());
        m_mapGaugeLabel->setSizePolicy(sizePolicy1);
        m_mapGaugeLabel->setAlignment(Qt::AlignCenter);
        m_idleSwitchLabel = new QLabel(overview_tab);
        m_idleSwitchLabel->setObjectName(QStringLiteral("m_idleSwitchLabel"));
        m_idleSwitchLabel->setGeometry(QRect(610, 194, 260, 16));
        sizePolicy1.setHeightForWidth(m_idleSwitchLabel->sizePolicy().hasHeightForWidth());
        m_idleSwitchLabel->setSizePolicy(sizePolicy1);
        m_idleSwitchLabel->setAlignment(Qt::AlignCenter);
        m_idleSwitchLed = new QLedIndicator(overview_tab);
        m_idleSwitchLed->setObjectName(QStringLiteral("m_idleSwitchLed"));
        m_idleSwitchLed->setGeometry(QRect(722, 160, 26, 26));
        layoutWidget = new QWidget(overview_tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 510, 260, 78));
        m_dataBLayout = new QGridLayout(layoutWidget);
        m_dataBLayout->setSpacing(6);
        m_dataBLayout->setContentsMargins(11, 11, 11, 11);
        m_dataBLayout->setObjectName(QStringLiteral("m_dataBLayout"));
        m_dataBLayout->setContentsMargins(0, 0, 0, 0);
        m_logFileNameLabel = new QLabel(layoutWidget);
        m_logFileNameLabel->setObjectName(QStringLiteral("m_logFileNameLabel"));
        m_logFileNameLabel->setAlignment(Qt::AlignLeft);

        m_dataBLayout->addWidget(m_logFileNameLabel, 0, 1, 1, 1);

        m_logFileNameBox = new QLineEdit(layoutWidget);
        m_logFileNameBox->setObjectName(QStringLiteral("m_logFileNameBox"));

        m_dataBLayout->addWidget(m_logFileNameBox, 1, 1, 1, 2);

        m_startLoggingButton = new QPushButton(layoutWidget);
        m_startLoggingButton->setObjectName(QStringLiteral("m_startLoggingButton"));
        m_startLoggingButton->setAutoFillBackground(false);

        m_dataBLayout->addWidget(m_startLoggingButton, 2, 1, 1, 1);

        m_stopLoggingButton = new QPushButton(layoutWidget);
        m_stopLoggingButton->setObjectName(QStringLiteral("m_stopLoggingButton"));
        m_stopLoggingButton->setEnabled(true);

        m_dataBLayout->addWidget(m_stopLoggingButton, 2, 2, 1, 1);

        m_waterTempGauge = new ManoMeter(overview_tab);
        m_waterTempGauge->setObjectName(QStringLiteral("m_waterTempGauge"));
        m_waterTempGauge->setGeometry(QRect(10, 260, 200, 200));
        m_airTempGauge = new ManoMeter100(overview_tab);
        m_airTempGauge->setObjectName(QStringLiteral("m_airTempGauge"));
        m_airTempGauge->setGeometry(QRect(260, 260, 200, 200));
        m_waterTempLabel = new QLabel(overview_tab);
        m_waterTempLabel->setObjectName(QStringLiteral("m_waterTempLabel"));
        m_waterTempLabel->setGeometry(QRect(10, 470, 200, 20));
        sizePolicy1.setHeightForWidth(m_waterTempLabel->sizePolicy().hasHeightForWidth());
        m_waterTempLabel->setSizePolicy(sizePolicy1);
        m_waterTempLabel->setAlignment(Qt::AlignCenter);
        m_airTempLabel = new QLabel(overview_tab);
        m_airTempLabel->setObjectName(QStringLiteral("m_airTempLabel"));
        m_airTempLabel->setGeometry(QRect(260, 470, 200, 20));
        sizePolicy1.setHeightForWidth(m_airTempLabel->sizePolicy().hasHeightForWidth());
        m_airTempLabel->setSizePolicy(sizePolicy1);
        m_airTempLabel->setAlignment(Qt::AlignCenter);
        m_long_trim_label = new QLabel(overview_tab);
        m_long_trim_label->setObjectName(QStringLiteral("m_long_trim_label"));
        m_long_trim_label->setGeometry(QRect(800, 490, 120, 20));
        m_long_trim_label->setAlignment(Qt::AlignLeft);
        m_long_trim = new QLabel(overview_tab);
        m_long_trim->setObjectName(QStringLiteral("m_long_trim"));
        m_long_trim->setGeometry(QRect(885, 490, 31, 16));
        Tab_main->addTab(overview_tab, QString());
        m_idle_position->raise();
        m_ignition_advance->raise();
        layoutWidget->raise();
        m_closed_loop_label->raise();
        m_idleSwitchLed->raise();
        m_closedLoopLed->raise();
        m_revCounterLabel->raise();
        m_airTempLabel->raise();
        m_waterTempLabel->raise();
        m_mapGaugeLabel->raise();
        m_throttle_pos_label->raise();
        m_lambda_label->raise();
        m_revCounter->raise();
        m_throttle_pos->raise();
        m_waterTempGauge->raise();
        m_lambda_voltage->raise();
        m_mapGauge->raise();
        m_airTempGauge->raise();
        m_long_trim_label->raise();
        m_long_trim->raise();
        emission_tab = new QWidget();
        emission_tab->setObjectName(QStringLiteral("emission_tab"));
        m_hline1_3 = new QFrame(emission_tab);
        m_hline1_3->setObjectName(QStringLiteral("m_hline1_3"));
        m_hline1_3->setGeometry(QRect(330, 365, 345, 20));
        m_hline1_3->setFrameShape(QFrame::HLine);
        m_hline1_3->setFrameShadow(QFrame::Sunken);
        m_fuel_trim_plusButton = new QPushButton(emission_tab);
        m_fuel_trim_plusButton->setObjectName(QStringLiteral("m_fuel_trim_plusButton"));
        m_fuel_trim_plusButton->setEnabled(false);
        m_fuel_trim_plusButton->setGeometry(QRect(530, 380, 70, 27));
        m_fuel_trim_minusButton = new QPushButton(emission_tab);
        m_fuel_trim_minusButton->setObjectName(QStringLiteral("m_fuel_trim_minusButton"));
        m_fuel_trim_minusButton->setEnabled(false);
        m_fuel_trim_minusButton->setGeometry(QRect(330, 380, 70, 27));
        m_idle_decay_plusButton = new QPushButton(emission_tab);
        m_idle_decay_plusButton->setObjectName(QStringLiteral("m_idle_decay_plusButton"));
        m_idle_decay_plusButton->setEnabled(false);
        m_idle_decay_plusButton->setGeometry(QRect(530, 410, 70, 27));
        m_idle_decay_minusButton = new QPushButton(emission_tab);
        m_idle_decay_minusButton->setObjectName(QStringLiteral("m_idle_decay_minusButton"));
        m_idle_decay_minusButton->setEnabled(false);
        m_idle_decay_minusButton->setGeometry(QRect(330, 410, 70, 27));
        m_idle_speed_plusButton = new QPushButton(emission_tab);
        m_idle_speed_plusButton->setObjectName(QStringLiteral("m_idle_speed_plusButton"));
        m_idle_speed_plusButton->setEnabled(false);
        m_idle_speed_plusButton->setGeometry(QRect(530, 440, 70, 27));
        m_idle_speed_minusButton = new QPushButton(emission_tab);
        m_idle_speed_minusButton->setObjectName(QStringLiteral("m_idle_speed_minusButton"));
        m_idle_speed_minusButton->setEnabled(false);
        m_idle_speed_minusButton->setGeometry(QRect(330, 440, 70, 27));
        m_ignition_advance_minusButton = new QPushButton(emission_tab);
        m_ignition_advance_minusButton->setObjectName(QStringLiteral("m_ignition_advance_minusButton"));
        m_ignition_advance_minusButton->setEnabled(false);
        m_ignition_advance_minusButton->setGeometry(QRect(330, 470, 70, 27));
        m_ignition_advance_plusButton = new QPushButton(emission_tab);
        m_ignition_advance_plusButton->setObjectName(QStringLiteral("m_ignition_advance_plusButton"));
        m_ignition_advance_plusButton->setEnabled(false);
        m_ignition_advance_plusButton->setGeometry(QRect(530, 470, 70, 27));
        m_revCounter_exhaust = new ManoMeter(emission_tab);
        m_revCounter_exhaust->setObjectName(QStringLiteral("m_revCounter_exhaust"));
        m_revCounter_exhaust->setGeometry(QRect(340, 10, 320, 320));
        e_idle_error = new ManoMeter(emission_tab);
        e_idle_error->setObjectName(QStringLiteral("e_idle_error"));
        e_idle_error->setGeometry(QRect(140, 10, 200, 200));
        e_ignition_advance = new ManoMeter(emission_tab);
        e_ignition_advance->setObjectName(QStringLiteral("e_ignition_advance"));
        e_ignition_advance->setGeometry(QRect(20, 180, 200, 200));
        e_short_term_fuel_trim = new ManoMeter(emission_tab);
        e_short_term_fuel_trim->setObjectName(QStringLiteral("e_short_term_fuel_trim"));
        e_short_term_fuel_trim->setGeometry(QRect(660, 10, 200, 200));
        e_lambda = new ManoMeter900(emission_tab);
        e_lambda->setObjectName(QStringLiteral("e_lambda"));
        e_lambda->setGeometry(QRect(780, 180, 200, 200));
        label_45 = new QLabel(emission_tab);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(140, 170, 200, 20));
        label_45->setAlignment(Qt::AlignCenter);
        label_52 = new QLabel(emission_tab);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(20, 340, 200, 20));
        label_52->setAlignment(Qt::AlignCenter);
        label_51 = new QLabel(emission_tab);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(660, 170, 200, 20));
        label_51->setAlignment(Qt::AlignCenter);
        closedloop_led = new QLedIndicator(emission_tab);
        closedloop_led->setObjectName(QStringLiteral("closedloop_led"));
        closedloop_led->setGeometry(QRect(685, 270, 26, 26));
        label_47 = new QLabel(emission_tab);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(665, 305, 120, 16));
        idleswitch_led = new QLedIndicator(emission_tab);
        idleswitch_led->setObjectName(QStringLiteral("idleswitch_led"));
        idleswitch_led->setGeometry(QRect(277, 270, 26, 26));
        label_53 = new QLabel(emission_tab);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(260, 305, 120, 16));
        emission_lambda_voltage = new QLabel(emission_tab);
        emission_lambda_voltage->setObjectName(QStringLiteral("emission_lambda_voltage"));
        emission_lambda_voltage->setGeometry(QRect(780, 340, 200, 16));
        emission_lambda_voltage->setAlignment(Qt::AlignCenter);
        m_revCounterLabel_2 = new QLabel(emission_tab);
        m_revCounterLabel_2->setObjectName(QStringLiteral("m_revCounterLabel_2"));
        m_revCounterLabel_2->setGeometry(QRect(340, 270, 320, 20));
        sizePolicy1.setHeightForWidth(m_revCounterLabel_2->sizePolicy().hasHeightForWidth());
        m_revCounterLabel_2->setSizePolicy(sizePolicy1);
        m_revCounterLabel_2->setAlignment(Qt::AlignCenter);
        e_FuelTrim_lcd = new QLCDNumber(emission_tab);
        e_FuelTrim_lcd->setObjectName(QStringLiteral("e_FuelTrim_lcd"));
        e_FuelTrim_lcd->setGeometry(QRect(610, 380, 60, 27));
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(true);
        font1.setWeight(75);
        e_FuelTrim_lcd->setFont(font1);
        e_FuelTrim_lcd->setSmallDecimalPoint(false);
        e_IdleDecay_lcd = new QLCDNumber(emission_tab);
        e_IdleDecay_lcd->setObjectName(QStringLiteral("e_IdleDecay_lcd"));
        e_IdleDecay_lcd->setGeometry(QRect(610, 410, 60, 27));
        e_IdleDecay_lcd->setFont(font1);
        e_IdleDecay_lcd->setSmallDecimalPoint(false);
        e_IdleSpeed_lcd = new QLCDNumber(emission_tab);
        e_IdleSpeed_lcd->setObjectName(QStringLiteral("e_IdleSpeed_lcd"));
        e_IdleSpeed_lcd->setGeometry(QRect(610, 440, 60, 27));
        e_IdleSpeed_lcd->setFont(font1);
        e_IdleSpeed_lcd->setSmallDecimalPoint(false);
        e_IgnitionAdvance_lcd = new QLCDNumber(emission_tab);
        e_IgnitionAdvance_lcd->setObjectName(QStringLiteral("e_IgnitionAdvance_lcd"));
        e_IgnitionAdvance_lcd->setGeometry(QRect(610, 470, 60, 27));
        e_IgnitionAdvance_lcd->setFont(font1);
        e_IgnitionAdvance_lcd->setSmallDecimalPoint(false);
        emi_rpm = new QLabel(emission_tab);
        emi_rpm->setObjectName(QStringLiteral("emi_rpm"));
        emi_rpm->setGeometry(QRect(400, 445, 130, 16));
        emi_rpm->setAlignment(Qt::AlignCenter);
        emi_shorttermftrim = new QLabel(emission_tab);
        emi_shorttermftrim->setObjectName(QStringLiteral("emi_shorttermftrim"));
        emi_shorttermftrim->setGeometry(QRect(400, 385, 130, 16));
        emi_shorttermftrim->setAlignment(Qt::AlignCenter);
        emi_idledecay = new QLabel(emission_tab);
        emi_idledecay->setObjectName(QStringLiteral("emi_idledecay"));
        emi_idledecay->setGeometry(QRect(400, 415, 130, 16));
        emi_idledecay->setAlignment(Qt::AlignCenter);
        emi_ignadvance = new QLabel(emission_tab);
        emi_ignadvance->setObjectName(QStringLiteral("emi_ignadvance"));
        emi_ignadvance->setGeometry(QRect(400, 475, 130, 16));
        emi_ignadvance->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(emission_tab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(310, 345, 380, 20));
        m_resetECUButton = new QPushButton(emission_tab);
        m_resetECUButton->setObjectName(QStringLiteral("m_resetECUButton"));
        m_resetECUButton->setEnabled(false);
        m_resetECUButton->setGeometry(QRect(785, 465, 180, 28));
        m_resetAdjustmentsButton = new QPushButton(emission_tab);
        m_resetAdjustmentsButton->setObjectName(QStringLiteral("m_resetAdjustmentsButton"));
        m_resetAdjustmentsButton->setEnabled(false);
        m_resetAdjustmentsButton->setGeometry(QRect(785, 430, 180, 28));
        Tab_main->addTab(emission_tab, QString());
        errors = new QWidget();
        errors->setObjectName(QStringLiteral("errors"));
        layoutWidget_3 = new QWidget(errors);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(15, 20, 800, 560));
        m_faultCodesLayout = new QGridLayout(layoutWidget_3);
        m_faultCodesLayout->setSpacing(6);
        m_faultCodesLayout->setContentsMargins(11, 11, 11, 11);
        m_faultCodesLayout->setObjectName(QStringLiteral("m_faultCodesLayout"));
        m_faultCodesLayout->setContentsMargins(0, 0, 0, 0);
        m_faultCodesLabel = new QLabel(layoutWidget_3);
        m_faultCodesLabel->setObjectName(QStringLiteral("m_faultCodesLabel"));
        m_faultCodesLabel->setAlignment(Qt::AlignLeading|Qt::AlignCenter);

        m_faultCodesLayout->addWidget(m_faultCodesLabel, 0, 1, 1, 8);

        m_faultLedCTS = new QLedIndicator(layoutWidget_3);
        m_faultLedCTS->setObjectName(QStringLiteral("m_faultLedCTS"));

        m_faultCodesLayout->addWidget(m_faultLedCTS, 1, 1, 1, 1);

        m_faultCode01Label = new QLabel(layoutWidget_3);
        m_faultCode01Label->setObjectName(QStringLiteral("m_faultCode01Label"));

        m_faultCodesLayout->addWidget(m_faultCode01Label, 1, 2, 1, 1);

        m_faultLedATS = new QLedIndicator(layoutWidget_3);
        m_faultLedATS->setObjectName(QStringLiteral("m_faultLedATS"));

        m_faultCodesLayout->addWidget(m_faultLedATS, 2, 1, 1, 1);

        m_faultCode02Label = new QLabel(layoutWidget_3);
        m_faultCode02Label->setObjectName(QStringLiteral("m_faultCode02Label"));

        m_faultCodesLayout->addWidget(m_faultCode02Label, 2, 2, 1, 1);

        m_faultLed03 = new QLedIndicator(layoutWidget_3);
        m_faultLed03->setObjectName(QStringLiteral("m_faultLed03"));

        m_faultCodesLayout->addWidget(m_faultLed03, 3, 1, 1, 1);

        m_faultCode03Label = new QLabel(layoutWidget_3);
        m_faultCode03Label->setObjectName(QStringLiteral("m_faultCode03Label"));

        m_faultCodesLayout->addWidget(m_faultCode03Label, 3, 2, 1, 1);

        m_faultLed04 = new QLedIndicator(layoutWidget_3);
        m_faultLed04->setObjectName(QStringLiteral("m_faultLed04"));

        m_faultCodesLayout->addWidget(m_faultLed04, 4, 1, 1, 1);

        m_faultCode04Label = new QLabel(layoutWidget_3);
        m_faultCode04Label->setObjectName(QStringLiteral("m_faultCode04Label"));

        m_faultCodesLayout->addWidget(m_faultCode04Label, 4, 2, 1, 1);

        m_faultLed05 = new QLedIndicator(layoutWidget_3);
        m_faultLed05->setObjectName(QStringLiteral("m_faultLed05"));

        m_faultCodesLayout->addWidget(m_faultLed05, 5, 1, 1, 1);

        m_faultCode05Label = new QLabel(layoutWidget_3);
        m_faultCode05Label->setObjectName(QStringLiteral("m_faultCode05Label"));

        m_faultCodesLayout->addWidget(m_faultCode05Label, 5, 2, 1, 1);

        m_faultLedFTS = new QLedIndicator(layoutWidget_3);
        m_faultLedFTS->setObjectName(QStringLiteral("m_faultLedFTS"));

        m_faultCodesLayout->addWidget(m_faultLedFTS, 6, 1, 1, 1);

        m_faultCode06Label = new QLabel(layoutWidget_3);
        m_faultCode06Label->setObjectName(QStringLiteral("m_faultCode06Label"));

        m_faultCodesLayout->addWidget(m_faultCode06Label, 6, 2, 1, 1);

        m_faultLed07 = new QLedIndicator(layoutWidget_3);
        m_faultLed07->setObjectName(QStringLiteral("m_faultLed07"));

        m_faultCodesLayout->addWidget(m_faultLed07, 7, 1, 1, 1);

        m_faultCode07Label = new QLabel(layoutWidget_3);
        m_faultCode07Label->setObjectName(QStringLiteral("m_faultCode07Label"));

        m_faultCodesLayout->addWidget(m_faultCode07Label, 7, 2, 1, 1);

        m_faultLed08 = new QLedIndicator(layoutWidget_3);
        m_faultLed08->setObjectName(QStringLiteral("m_faultLed08"));

        m_faultCodesLayout->addWidget(m_faultLed08, 8, 1, 1, 1);

        m_faultCode08Label = new QLabel(layoutWidget_3);
        m_faultCode08Label->setObjectName(QStringLiteral("m_faultCode08Label"));

        m_faultCodesLayout->addWidget(m_faultCode08Label, 8, 2, 1, 1);

        m_faultLed09 = new QLedIndicator(layoutWidget_3);
        m_faultLed09->setObjectName(QStringLiteral("m_faultLed09"));

        m_faultCodesLayout->addWidget(m_faultLed09, 1, 4, 1, 1);

        m_faultCode09Label = new QLabel(layoutWidget_3);
        m_faultCode09Label->setObjectName(QStringLiteral("m_faultCode09Label"));

        m_faultCodesLayout->addWidget(m_faultCode09Label, 1, 5, 1, 1);

        m_faultLedFuelPump = new QLedIndicator(layoutWidget_3);
        m_faultLedFuelPump->setObjectName(QStringLiteral("m_faultLedFuelPump"));

        m_faultCodesLayout->addWidget(m_faultLedFuelPump, 2, 4, 1, 1);

        m_faultCode10Label = new QLabel(layoutWidget_3);
        m_faultCode10Label->setObjectName(QStringLiteral("m_faultCode10Label"));

        m_faultCodesLayout->addWidget(m_faultCode10Label, 2, 5, 1, 1);

        m_faultLedFuelPumpSupply = new QLedIndicator(layoutWidget_3);
        m_faultLedFuelPumpSupply->setObjectName(QStringLiteral("m_faultLedFuelPumpSupply"));

        m_faultCodesLayout->addWidget(m_faultLedFuelPumpSupply, 3, 4, 1, 1);

        m_faultCode11Label = new QLabel(layoutWidget_3);
        m_faultCode11Label->setObjectName(QStringLiteral("m_faultCode11Label"));

        m_faultCodesLayout->addWidget(m_faultCode11Label, 3, 5, 1, 1);

        m_faultLed12 = new QLedIndicator(layoutWidget_3);
        m_faultLed12->setObjectName(QStringLiteral("m_faultLed12"));

        m_faultCodesLayout->addWidget(m_faultLed12, 4, 4, 1, 1);

        m_faultCode12Label = new QLabel(layoutWidget_3);
        m_faultCode12Label->setObjectName(QStringLiteral("m_faultCode12Label"));

        m_faultCodesLayout->addWidget(m_faultCode12Label, 4, 5, 1, 1);

        m_faultLedPurge = new QLedIndicator(layoutWidget_3);
        m_faultLedPurge->setObjectName(QStringLiteral("m_faultLedPurge"));

        m_faultCodesLayout->addWidget(m_faultLedPurge, 5, 4, 1, 1);

        m_faultCode13Label = new QLabel(layoutWidget_3);
        m_faultCode13Label->setObjectName(QStringLiteral("m_faultCode13Label"));

        m_faultCodesLayout->addWidget(m_faultCode13Label, 5, 5, 1, 1);

        m_faultLedMap = new QLedIndicator(layoutWidget_3);
        m_faultLedMap->setObjectName(QStringLiteral("m_faultLedMap"));

        m_faultCodesLayout->addWidget(m_faultLedMap, 6, 4, 1, 1);

        m_faultCode14Label = new QLabel(layoutWidget_3);
        m_faultCode14Label->setObjectName(QStringLiteral("m_faultCode14Label"));

        m_faultCodesLayout->addWidget(m_faultCode14Label, 6, 5, 1, 1);

        m_faultLed15 = new QLedIndicator(layoutWidget_3);
        m_faultLed15->setObjectName(QStringLiteral("m_faultLed15"));

        m_faultCodesLayout->addWidget(m_faultLed15, 7, 4, 1, 1);

        m_faultCode15Label = new QLabel(layoutWidget_3);
        m_faultCode15Label->setObjectName(QStringLiteral("m_faultCode15Label"));

        m_faultCodesLayout->addWidget(m_faultCode15Label, 7, 5, 1, 1);

        m_faultLedTps = new QLedIndicator(layoutWidget_3);
        m_faultLedTps->setObjectName(QStringLiteral("m_faultLedTps"));

        m_faultCodesLayout->addWidget(m_faultLedTps, 8, 4, 1, 1);

        m_faultCode16Label = new QLabel(layoutWidget_3);
        m_faultCode16Label->setObjectName(QStringLiteral("m_faultCode16Label"));

        m_faultCodesLayout->addWidget(m_faultCode16Label, 8, 5, 1, 1);

        m_faultLedTpsSupply = new QLedIndicator(layoutWidget_3);
        m_faultLedTpsSupply->setObjectName(QStringLiteral("m_faultLedTpsSupply"));

        m_faultCodesLayout->addWidget(m_faultLedTpsSupply, 1, 7, 1, 1);

        m_faultCode17Label = new QLabel(layoutWidget_3);
        m_faultCode17Label->setObjectName(QStringLiteral("m_faultCode17Label"));

        m_faultCodesLayout->addWidget(m_faultCode17Label, 1, 8, 1, 1);

        m_faultLed18 = new QLedIndicator(layoutWidget_3);
        m_faultLed18->setObjectName(QStringLiteral("m_faultLed18"));

        m_faultCodesLayout->addWidget(m_faultLed18, 2, 7, 1, 1);

        m_faultCode18Label = new QLabel(layoutWidget_3);
        m_faultCode18Label->setObjectName(QStringLiteral("m_faultCode18Label"));

        m_faultCodesLayout->addWidget(m_faultCode18Label, 2, 8, 1, 1);

        m_faultLedLambdaCircuit = new QLedIndicator(layoutWidget_3);
        m_faultLedLambdaCircuit->setObjectName(QStringLiteral("m_faultLedLambdaCircuit"));

        m_faultCodesLayout->addWidget(m_faultLedLambdaCircuit, 3, 7, 1, 1);

        m_faultCode19Label = new QLabel(layoutWidget_3);
        m_faultCode19Label->setObjectName(QStringLiteral("m_faultCode19Label"));

        m_faultCodesLayout->addWidget(m_faultCode19Label, 3, 8, 1, 1);

        m_faultLedLambdaSupply = new QLedIndicator(layoutWidget_3);
        m_faultLedLambdaSupply->setObjectName(QStringLiteral("m_faultLedLambdaSupply"));

        m_faultCodesLayout->addWidget(m_faultLedLambdaSupply, 4, 7, 1, 1);

        m_faultCode20Label = new QLabel(layoutWidget_3);
        m_faultCode20Label->setObjectName(QStringLiteral("m_faultCode20Label"));

        m_faultCodesLayout->addWidget(m_faultCode20Label, 4, 8, 1, 1);

        m_faultLed21 = new QLedIndicator(layoutWidget_3);
        m_faultLed21->setObjectName(QStringLiteral("m_faultLed21"));

        m_faultCodesLayout->addWidget(m_faultLed21, 5, 7, 1, 1);

        m_faultCode21Label = new QLabel(layoutWidget_3);
        m_faultCode21Label->setObjectName(QStringLiteral("m_faultCode21Label"));

        m_faultCodesLayout->addWidget(m_faultCode21Label, 5, 8, 1, 1);

        m_faultLed22 = new QLedIndicator(layoutWidget_3);
        m_faultLed22->setObjectName(QStringLiteral("m_faultLed22"));

        m_faultCodesLayout->addWidget(m_faultLed22, 6, 7, 1, 1);

        m_faultCode22Label = new QLabel(layoutWidget_3);
        m_faultCode22Label->setObjectName(QStringLiteral("m_faultCode22Label"));

        m_faultCodesLayout->addWidget(m_faultCode22Label, 6, 8, 1, 1);

        m_faultLed23 = new QLedIndicator(layoutWidget_3);
        m_faultLed23->setObjectName(QStringLiteral("m_faultLed23"));

        m_faultCodesLayout->addWidget(m_faultLed23, 7, 7, 1, 1);

        m_faultCode23Label = new QLabel(layoutWidget_3);
        m_faultCode23Label->setObjectName(QStringLiteral("m_faultCode23Label"));

        m_faultCodesLayout->addWidget(m_faultCode23Label, 7, 8, 1, 1);

        m_faultLed24 = new QLedIndicator(layoutWidget_3);
        m_faultLed24->setObjectName(QStringLiteral("m_faultLed24"));

        m_faultCodesLayout->addWidget(m_faultLed24, 8, 7, 1, 1);

        m_faultCode24Label = new QLabel(layoutWidget_3);
        m_faultCode24Label->setObjectName(QStringLiteral("m_faultCode24Label"));

        m_faultCodesLayout->addWidget(m_faultCode24Label, 8, 8, 1, 1);

        m_clearFaultsButton = new QPushButton(layoutWidget_3);
        m_clearFaultsButton->setObjectName(QStringLiteral("m_clearFaultsButton"));
        m_clearFaultsButton->setEnabled(false);

        m_faultCodesLayout->addWidget(m_clearFaultsButton, 13, 1, 1, 8);

        m_faultCodesLayout->setRowStretch(17, 100);
        m_faultCodesLayout->setColumnStretch(1, 1);
        m_faultCodesLayout->setColumnStretch(2, 20);
        m_faultCodesLayout->setColumnStretch(4, 1);
        m_faultCodesLayout->setColumnStretch(5, 20);
        m_faultCodesLayout->setColumnStretch(7, 1);
        m_faultCodesLayout->setColumnStretch(8, 20);
        layoutWidget_9 = new QWidget(errors);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(15, 320, 360, 300));
        m_faultCodesLayout2 = new QGridLayout(layoutWidget_9);
        m_faultCodesLayout2->setSpacing(6);
        m_faultCodesLayout2->setContentsMargins(11, 11, 11, 11);
        m_faultCodesLayout2->setObjectName(QStringLiteral("m_faultCodesLayout2"));
        m_faultCodesLayout2->setContentsMargins(0, 0, 0, 0);
        m_RPMSensor = new QLedIndicator(layoutWidget_9);
        m_RPMSensor->setObjectName(QStringLiteral("m_RPMSensor"));

        m_faultCodesLayout2->addWidget(m_RPMSensor, 0, 1, 1, 1);

        m_RPMSensorLabel = new QLabel(layoutWidget_9);
        m_RPMSensorLabel->setObjectName(QStringLiteral("m_RPMSensorLabel"));

        m_faultCodesLayout2->addWidget(m_RPMSensorLabel, 0, 2, 1, 2);

        m_empty3 = new QLabel(layoutWidget_9);
        m_empty3->setObjectName(QStringLiteral("m_empty3"));

        m_faultCodesLayout2->addWidget(m_empty3, 1, 3, 1, 1);

        m_faultCodesLabel2 = new QLabel(layoutWidget_9);
        m_faultCodesLabel2->setObjectName(QStringLiteral("m_faultCodesLabel2"));

        m_faultCodesLayout2->addWidget(m_faultCodesLabel2, 2, 1, 1, 1);

        m_faultCodesLabel3 = new QLabel(layoutWidget_9);
        m_faultCodesLabel3->setObjectName(QStringLiteral("m_faultCodesLabel3"));

        m_faultCodesLayout2->addWidget(m_faultCodesLabel3, 2, 2, 1, 1);

        m_faultCodesLabel4 = new QLabel(layoutWidget_9);
        m_faultCodesLabel4->setObjectName(QStringLiteral("m_faultCodesLabel4"));

        m_faultCodesLayout2->addWidget(m_faultCodesLabel4, 2, 3, 1, 1);

        m_LambdaSensor = new QLedIndicator(layoutWidget_9);
        m_LambdaSensor->setObjectName(QStringLiteral("m_LambdaSensor"));

        m_faultCodesLayout2->addWidget(m_LambdaSensor, 3, 1, 1, 1);

        m_LambdaSensorLabel = new QLabel(layoutWidget_9);
        m_LambdaSensorLabel->setObjectName(QStringLiteral("m_LambdaSensorLabel"));

        m_faultCodesLayout2->addWidget(m_LambdaSensorLabel, 3, 3, 1, 1);

        m_LambdaMax = new QLedIndicator(layoutWidget_9);
        m_LambdaMax->setObjectName(QStringLiteral("m_LambdaMax"));

        m_faultCodesLayout2->addWidget(m_LambdaMax, 4, 1, 1, 1);

        m_LambdaMaxOnce = new QLedIndicator(layoutWidget_9);
        m_LambdaMaxOnce->setObjectName(QStringLiteral("m_LambdaMaxOnce"));

        m_faultCodesLayout2->addWidget(m_LambdaMaxOnce, 4, 2, 1, 1);

        m_LambdaMaxLabel = new QLabel(layoutWidget_9);
        m_LambdaMaxLabel->setObjectName(QStringLiteral("m_LambdaMaxLabel"));

        m_faultCodesLayout2->addWidget(m_LambdaMaxLabel, 4, 3, 1, 1);

        m_LambdaMin = new QLedIndicator(layoutWidget_9);
        m_LambdaMin->setObjectName(QStringLiteral("m_LambdaMin"));

        m_faultCodesLayout2->addWidget(m_LambdaMin, 5, 1, 1, 1);

        m_LambdaMinOnce = new QLedIndicator(layoutWidget_9);
        m_LambdaMinOnce->setObjectName(QStringLiteral("m_LambdaMinOnce"));

        m_faultCodesLayout2->addWidget(m_LambdaMinOnce, 5, 2, 1, 1);

        m_LambdaMinLabel = new QLabel(layoutWidget_9);
        m_LambdaMinLabel->setObjectName(QStringLiteral("m_LambdaMinLabel"));

        m_faultCodesLayout2->addWidget(m_LambdaMinLabel, 5, 3, 1, 1);

        m_IACMin = new QLedIndicator(layoutWidget_9);
        m_IACMin->setObjectName(QStringLiteral("m_IACMin"));

        m_faultCodesLayout2->addWidget(m_IACMin, 6, 1, 1, 1);

        m_IACMinOnce = new QLedIndicator(layoutWidget_9);
        m_IACMinOnce->setObjectName(QStringLiteral("m_IACMinOnce"));

        m_faultCodesLayout2->addWidget(m_IACMinOnce, 6, 2, 1, 1);

        m_IACMinLabel = new QLabel(layoutWidget_9);
        m_IACMinLabel->setObjectName(QStringLiteral("m_IACMinLabel"));

        m_faultCodesLayout2->addWidget(m_IACMinLabel, 6, 3, 1, 1);

        m_JackCount = new QLedIndicator(layoutWidget_9);
        m_JackCount->setObjectName(QStringLiteral("m_JackCount"));

        m_faultCodesLayout2->addWidget(m_JackCount, 7, 1, 1, 1);

        m_JackCountLabel = new QLabel(layoutWidget_9);
        m_JackCountLabel->setObjectName(QStringLiteral("m_JackCountLabel"));

        m_faultCodesLayout2->addWidget(m_JackCountLabel, 7, 3, 1, 1);

        m_clearRecordedAnomalies = new QPushButton(layoutWidget_9);
        m_clearRecordedAnomalies->setObjectName(QStringLiteral("m_clearRecordedAnomalies"));
        m_clearRecordedAnomalies->setEnabled(false);

        m_faultCodesLayout2->addWidget(m_clearRecordedAnomalies, 13, 1, 1, 3);

        m_faultCodesLayout2->setRowStretch(1, 1);
        m_faultCodesLayout2->setRowStretch(14, 100);
        Tab_main->addTab(errors, QString());
        actuators = new QWidget();
        actuators->setObjectName(QStringLiteral("actuators"));
        layoutWidget_4 = new QWidget(actuators);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(15, 20, 450, 400));
        actuators_layout1 = new QGridLayout(layoutWidget_4);
        actuators_layout1->setSpacing(6);
        actuators_layout1->setContentsMargins(11, 11, 11, 11);
        actuators_layout1->setObjectName(QStringLiteral("actuators_layout1"));
        actuators_layout1->setContentsMargins(0, 0, 0, 0);
        m_testActuatorLabel = new QLabel(layoutWidget_4);
        m_testActuatorLabel->setObjectName(QStringLiteral("m_testActuatorLabel"));
        m_testActuatorLabel->setAlignment(Qt::AlignLeading|Qt::AlignCenter);

        actuators_layout1->addWidget(m_testActuatorLabel, 1, 0, 1, 4);

        m_PTCRelay = new QLabel(layoutWidget_4);
        m_PTCRelay->setObjectName(QStringLiteral("m_PTCRelay"));
        m_PTCRelay->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_PTCRelay, 2, 0, 1, 1);

        m_testPTCRelayButton = new QPushButton(layoutWidget_4);
        m_testPTCRelayButton->setObjectName(QStringLiteral("m_testPTCRelayButton"));
        m_testPTCRelayButton->setEnabled(false);

        actuators_layout1->addWidget(m_testPTCRelayButton, 2, 1, 1, 1);

        m_onPTCRelayButton = new QPushButton(layoutWidget_4);
        m_onPTCRelayButton->setObjectName(QStringLiteral("m_onPTCRelayButton"));
        m_onPTCRelayButton->setEnabled(false);

        actuators_layout1->addWidget(m_onPTCRelayButton, 2, 2, 1, 1);

        m_offPTCRelayButton = new QPushButton(layoutWidget_4);
        m_offPTCRelayButton->setObjectName(QStringLiteral("m_offPTCRelayButton"));
        m_offPTCRelayButton->setEnabled(false);

        actuators_layout1->addWidget(m_offPTCRelayButton, 2, 3, 1, 1);

        m_FuelPumpRelay = new QLabel(layoutWidget_4);
        m_FuelPumpRelay->setObjectName(QStringLiteral("m_FuelPumpRelay"));
        m_FuelPumpRelay->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_FuelPumpRelay, 3, 0, 1, 1);

        m_testFuelPumpRelayButton = new QPushButton(layoutWidget_4);
        m_testFuelPumpRelayButton->setObjectName(QStringLiteral("m_testFuelPumpRelayButton"));
        m_testFuelPumpRelayButton->setEnabled(false);

        actuators_layout1->addWidget(m_testFuelPumpRelayButton, 3, 1, 1, 1);

        m_testFuelPumpOnButton = new QPushButton(layoutWidget_4);
        m_testFuelPumpOnButton->setObjectName(QStringLiteral("m_testFuelPumpOnButton"));
        m_testFuelPumpOnButton->setEnabled(false);

        actuators_layout1->addWidget(m_testFuelPumpOnButton, 3, 2, 1, 1);

        m_testFuelPumpOffButton = new QPushButton(layoutWidget_4);
        m_testFuelPumpOffButton->setObjectName(QStringLiteral("m_testFuelPumpOffButton"));
        m_testFuelPumpOffButton->setEnabled(false);

        actuators_layout1->addWidget(m_testFuelPumpOffButton, 3, 3, 1, 1);

        m_O2Heater = new QLabel(layoutWidget_4);
        m_O2Heater->setObjectName(QStringLiteral("m_O2Heater"));
        m_O2Heater->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_O2Heater, 4, 0, 1, 1);

        m_O2Heater_TestButton = new QPushButton(layoutWidget_4);
        m_O2Heater_TestButton->setObjectName(QStringLiteral("m_O2Heater_TestButton"));
        m_O2Heater_TestButton->setEnabled(false);

        actuators_layout1->addWidget(m_O2Heater_TestButton, 4, 1, 1, 1);

        m_O2Heater_OnButton = new QPushButton(layoutWidget_4);
        m_O2Heater_OnButton->setObjectName(QStringLiteral("m_O2Heater_OnButton"));
        m_O2Heater_OnButton->setEnabled(false);

        actuators_layout1->addWidget(m_O2Heater_OnButton, 4, 2, 1, 1);

        m_O2Heater_OffButton = new QPushButton(layoutWidget_4);
        m_O2Heater_OffButton->setObjectName(QStringLiteral("m_O2Heater_OffButton"));
        m_O2Heater_OffButton->setEnabled(false);

        actuators_layout1->addWidget(m_O2Heater_OffButton, 4, 3, 1, 1);

        m_Purge_Valve = new QLabel(layoutWidget_4);
        m_Purge_Valve->setObjectName(QStringLiteral("m_Purge_Valve"));
        m_Purge_Valve->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_Purge_Valve, 5, 0, 1, 1);

        m_Purge_Valve_TestButton = new QPushButton(layoutWidget_4);
        m_Purge_Valve_TestButton->setObjectName(QStringLiteral("m_Purge_Valve_TestButton"));
        m_Purge_Valve_TestButton->setEnabled(false);

        actuators_layout1->addWidget(m_Purge_Valve_TestButton, 5, 1, 1, 1);

        m_Purge_Valve_OnButton = new QPushButton(layoutWidget_4);
        m_Purge_Valve_OnButton->setObjectName(QStringLiteral("m_Purge_Valve_OnButton"));
        m_Purge_Valve_OnButton->setEnabled(false);

        actuators_layout1->addWidget(m_Purge_Valve_OnButton, 5, 2, 1, 1);

        m_Purge_Valve_OffButton = new QPushButton(layoutWidget_4);
        m_Purge_Valve_OffButton->setObjectName(QStringLiteral("m_Purge_Valve_OffButton"));
        m_Purge_Valve_OffButton->setEnabled(false);

        actuators_layout1->addWidget(m_Purge_Valve_OffButton, 5, 3, 1, 1);

        m_ACRelay = new QLabel(layoutWidget_4);
        m_ACRelay->setObjectName(QStringLiteral("m_ACRelay"));
        m_ACRelay->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_ACRelay, 6, 0, 1, 1);

        m_testACRelayButton = new QPushButton(layoutWidget_4);
        m_testACRelayButton->setObjectName(QStringLiteral("m_testACRelayButton"));
        m_testACRelayButton->setEnabled(false);

        actuators_layout1->addWidget(m_testACRelayButton, 6, 1, 1, 1);

        m_onACRelayButton = new QPushButton(layoutWidget_4);
        m_onACRelayButton->setObjectName(QStringLiteral("m_onACRelayButton"));
        m_onACRelayButton->setEnabled(false);

        actuators_layout1->addWidget(m_onACRelayButton, 6, 2, 1, 1);

        m_offACRelayButton = new QPushButton(layoutWidget_4);
        m_offACRelayButton->setObjectName(QStringLiteral("m_offACRelayButton"));
        m_offACRelayButton->setEnabled(false);

        actuators_layout1->addWidget(m_offACRelayButton, 6, 3, 1, 1);

        m_Boost_Valve = new QLabel(layoutWidget_4);
        m_Boost_Valve->setObjectName(QStringLiteral("m_Boost_Valve"));
        m_Boost_Valve->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_Boost_Valve, 7, 0, 1, 1);

        m_Boost_Valve_TestButton = new QPushButton(layoutWidget_4);
        m_Boost_Valve_TestButton->setObjectName(QStringLiteral("m_Boost_Valve_TestButton"));
        m_Boost_Valve_TestButton->setEnabled(false);

        actuators_layout1->addWidget(m_Boost_Valve_TestButton, 7, 1, 1, 1);

        m_Boost_Valve_OnButton = new QPushButton(layoutWidget_4);
        m_Boost_Valve_OnButton->setObjectName(QStringLiteral("m_Boost_Valve_OnButton"));
        m_Boost_Valve_OnButton->setEnabled(false);

        actuators_layout1->addWidget(m_Boost_Valve_OnButton, 7, 2, 1, 1);

        m_Boost_Valve_OffButton = new QPushButton(layoutWidget_4);
        m_Boost_Valve_OffButton->setObjectName(QStringLiteral("m_Boost_Valve_OffButton"));
        m_Boost_Valve_OffButton->setEnabled(false);

        actuators_layout1->addWidget(m_Boost_Valve_OffButton, 7, 3, 1, 1);

        m_Fan1 = new QLabel(layoutWidget_4);
        m_Fan1->setObjectName(QStringLiteral("m_Fan1"));
        m_Fan1->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_Fan1, 8, 0, 1, 1);

        m_Fan1_TestButton = new QPushButton(layoutWidget_4);
        m_Fan1_TestButton->setObjectName(QStringLiteral("m_Fan1_TestButton"));
        m_Fan1_TestButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan1_TestButton, 8, 1, 1, 1);

        m_Fan1_OnButton = new QPushButton(layoutWidget_4);
        m_Fan1_OnButton->setObjectName(QStringLiteral("m_Fan1_OnButton"));
        m_Fan1_OnButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan1_OnButton, 8, 2, 1, 1);

        m_Fan1_OffButton = new QPushButton(layoutWidget_4);
        m_Fan1_OffButton->setObjectName(QStringLiteral("m_Fan1_OffButton"));
        m_Fan1_OffButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan1_OffButton, 8, 3, 1, 1);

        m_Fan2 = new QLabel(layoutWidget_4);
        m_Fan2->setObjectName(QStringLiteral("m_Fan2"));
        m_Fan2->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_Fan2, 9, 0, 1, 1);

        m_Fan2_TestButton = new QPushButton(layoutWidget_4);
        m_Fan2_TestButton->setObjectName(QStringLiteral("m_Fan2_TestButton"));
        m_Fan2_TestButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan2_TestButton, 9, 1, 1, 1);

        m_Fan2_OnButton = new QPushButton(layoutWidget_4);
        m_Fan2_OnButton->setObjectName(QStringLiteral("m_Fan2_OnButton"));
        m_Fan2_OnButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan2_OnButton, 9, 2, 1, 1);

        m_Fan2_OffButton = new QPushButton(layoutWidget_4);
        m_Fan2_OffButton->setObjectName(QStringLiteral("m_Fan2_OffButton"));
        m_Fan2_OffButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan2_OffButton, 9, 3, 1, 1);

        m_Fan3 = new QLabel(layoutWidget_4);
        m_Fan3->setObjectName(QStringLiteral("m_Fan3"));
        m_Fan3->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_Fan3, 10, 0, 1, 1);

        m_Fan3_TestButton = new QPushButton(layoutWidget_4);
        m_Fan3_TestButton->setObjectName(QStringLiteral("m_Fan3_TestButton"));
        m_Fan3_TestButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan3_TestButton, 10, 1, 1, 1);

        m_Fan3_OnButton = new QPushButton(layoutWidget_4);
        m_Fan3_OnButton->setObjectName(QStringLiteral("m_Fan3_OnButton"));
        m_Fan3_OnButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan3_OnButton, 10, 2, 1, 1);

        m_Fan3_OffButton = new QPushButton(layoutWidget_4);
        m_Fan3_OffButton->setObjectName(QStringLiteral("m_Fan3_OffButton"));
        m_Fan3_OffButton->setEnabled(false);

        actuators_layout1->addWidget(m_Fan3_OffButton, 10, 3, 1, 1);

        m_empty1 = new QLabel(layoutWidget_4);
        m_empty1->setObjectName(QStringLiteral("m_empty1"));

        actuators_layout1->addWidget(m_empty1, 11, 0, 1, 1);

        m_FuelInjector = new QLabel(layoutWidget_4);
        m_FuelInjector->setObjectName(QStringLiteral("m_FuelInjector"));
        m_FuelInjector->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_FuelInjector, 12, 0, 1, 1);

        m_testFuelInjectorButton = new QPushButton(layoutWidget_4);
        m_testFuelInjectorButton->setObjectName(QStringLiteral("m_testFuelInjectorButton"));
        m_testFuelInjectorButton->setEnabled(false);

        actuators_layout1->addWidget(m_testFuelInjectorButton, 12, 1, 1, 1);

        m_IgnitionCoil = new QLabel(layoutWidget_4);
        m_IgnitionCoil->setObjectName(QStringLiteral("m_IgnitionCoil"));
        m_IgnitionCoil->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_IgnitionCoil, 13, 0, 1, 1);

        m_testIgnitionCoilButton = new QPushButton(layoutWidget_4);
        m_testIgnitionCoilButton->setObjectName(QStringLiteral("m_testIgnitionCoilButton"));
        m_testIgnitionCoilButton->setEnabled(false);

        actuators_layout1->addWidget(m_testIgnitionCoilButton, 13, 1, 1, 1);

        m_empty2 = new QLabel(layoutWidget_4);
        m_empty2->setObjectName(QStringLiteral("m_empty2"));

        actuators_layout1->addWidget(m_empty2, 14, 0, 1, 1);

        m_ResetActuators = new QLabel(layoutWidget_4);
        m_ResetActuators->setObjectName(QStringLiteral("m_ResetActuators"));
        m_ResetActuators->setAlignment(Qt::AlignLeading|Qt::AlignRight);

        actuators_layout1->addWidget(m_ResetActuators, 15, 0, 1, 1);

        m_AllActuatorsOffButton = new QPushButton(layoutWidget_4);
        m_AllActuatorsOffButton->setObjectName(QStringLiteral("m_AllActuatorsOffButton"));
        m_AllActuatorsOffButton->setEnabled(false);

        actuators_layout1->addWidget(m_AllActuatorsOffButton, 15, 1, 1, 3);

        actuators_layout1->setRowStretch(0, 1);
        actuators_layout1->setRowStretch(1, 1);
        actuators_layout1->setRowStretch(2, 1);
        actuators_layout1->setRowStretch(3, 1);
        actuators_layout1->setRowStretch(4, 1);
        actuators_layout1->setRowStretch(5, 1);
        actuators_layout1->setRowStretch(6, 1);
        actuators_layout1->setRowStretch(7, 1);
        actuators_layout1->setRowStretch(8, 1);
        actuators_layout1->setRowStretch(9, 1);
        actuators_layout1->setRowStretch(10, 1);
        actuators_layout1->setRowStretch(11, 1);
        actuators_layout1->setRowStretch(12, 1);
        actuators_layout1->setRowStretch(13, 1);
        actuators_layout1->setRowStretch(14, 1);
        actuators_layout1->setRowStretch(15, 1);
        actuators_layout1->setRowStretch(16, 99);
        actuators_layout1->setColumnStretch(0, 3);
        actuators_layout1->setColumnStretch(1, 1);
        actuators_layout1->setColumnStretch(2, 1);
        actuators_layout1->setColumnStretch(3, 1);
        label = new QLabel(actuators);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(500, 30, 711, 20));
        m_moveIACButton = new QPushButton(actuators);
        m_moveIACButton->setObjectName(QStringLiteral("m_moveIACButton"));
        m_moveIACButton->setEnabled(false);
        m_moveIACButton->setGeometry(QRect(715, 140, 200, 30));
        m_IACMinusButton = new QPushButton(actuators);
        m_IACMinusButton->setObjectName(QStringLiteral("m_IACMinusButton"));
        m_IACMinusButton->setEnabled(false);
        m_IACMinusButton->setGeometry(QRect(670, 140, 40, 30));
        m_IACPlusButton = new QPushButton(actuators);
        m_IACPlusButton->setObjectName(QStringLiteral("m_IACPlusButton"));
        m_IACPlusButton->setEnabled(false);
        m_IACPlusButton->setGeometry(QRect(920, 140, 40, 30));
        layoutWidget_5 = new QWidget(actuators);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(510, 60, 500, 30));
        idle_bypass_layout = new QHBoxLayout(layoutWidget_5);
        idle_bypass_layout->setSpacing(6);
        idle_bypass_layout->setContentsMargins(11, 11, 11, 11);
        idle_bypass_layout->setObjectName(QStringLiteral("idle_bypass_layout"));
        idle_bypass_layout->setContentsMargins(0, 0, 0, 0);
        m_idleBypassLabel_2 = new QLabel(layoutWidget_5);
        m_idleBypassLabel_2->setObjectName(QStringLiteral("m_idleBypassLabel_2"));
        m_idleBypassLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        idle_bypass_layout->addWidget(m_idleBypassLabel_2);

        m_iacPositionSteps_2 = new QLabel(layoutWidget_5);
        m_iacPositionSteps_2->setObjectName(QStringLiteral("m_iacPositionSteps_2"));

        idle_bypass_layout->addWidget(m_iacPositionSteps_2);

        m_idleBypassPosBar_2 = new QProgressBar(layoutWidget_5);
        m_idleBypassPosBar_2->setObjectName(QStringLiteral("m_idleBypassPosBar_2"));
        m_idleBypassPosBar_2->setValue(0);

        idle_bypass_layout->addWidget(m_idleBypassPosBar_2);

        layoutWidget_6 = new QWidget(actuators);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(613, 100, 395, 30));
        idle_bypass_layout2 = new QHBoxLayout(layoutWidget_6);
        idle_bypass_layout2->setSpacing(6);
        idle_bypass_layout2->setContentsMargins(11, 11, 11, 11);
        idle_bypass_layout2->setObjectName(QStringLiteral("idle_bypass_layout2"));
        idle_bypass_layout2->setContentsMargins(0, 0, 0, 0);
        m_iacSliderClosedLabel = new QLabel(layoutWidget_6);
        m_iacSliderClosedLabel->setObjectName(QStringLiteral("m_iacSliderClosedLabel"));

        idle_bypass_layout2->addWidget(m_iacSliderClosedLabel);

        m_iacPositionSlider = new QSlider(layoutWidget_6);
        m_iacPositionSlider->setObjectName(QStringLiteral("m_iacPositionSlider"));
        m_iacPositionSlider->setMaximum(4);
        m_iacPositionSlider->setSingleStep(1);
        m_iacPositionSlider->setPageStep(1);
        m_iacPositionSlider->setOrientation(Qt::Horizontal);
        m_iacPositionSlider->setInvertedAppearance(false);
        m_iacPositionSlider->setTickPosition(QSlider::TicksBelow);

        idle_bypass_layout2->addWidget(m_iacPositionSlider);

        m_iacSliderOpenLabel = new QLabel(layoutWidget_6);
        m_iacSliderOpenLabel->setObjectName(QStringLiteral("m_iacSliderOpenLabel"));

        idle_bypass_layout2->addWidget(m_iacSliderOpenLabel);

        m_vline3 = new QFrame(actuators);
        m_vline3->setObjectName(QStringLiteral("m_vline3"));
        m_vline3->setGeometry(QRect(485, 20, 4, 410));
        m_vline3->setFrameShape(QFrame::VLine);
        m_vline3->setFrameShadow(QFrame::Sunken);
        Tab_main->addTab(actuators, QString());
        raw = new QWidget();
        raw->setObjectName(QStringLiteral("raw"));
        raw_1 = new QWidget(raw);
        raw_1->setObjectName(QStringLiteral("raw_1"));
        raw_1->setGeometry(QRect(20, 10, 500, 576));
        HF_table = new QGridLayout(raw_1);
        HF_table->setSpacing(6);
        HF_table->setContentsMargins(11, 11, 11, 11);
        HF_table->setObjectName(QStringLiteral("HF_table"));
        HF_table->setContentsMargins(0, 0, 0, 0);
        header_1 = new QLabel(raw_1);
        header_1->setObjectName(QStringLiteral("header_1"));

        HF_table->addWidget(header_1, 0, 0, 1, 1);

        header_2 = new QLabel(raw_1);
        header_2->setObjectName(QStringLiteral("header_2"));

        HF_table->addWidget(header_2, 0, 1, 1, 1);

        header_3 = new QLabel(raw_1);
        header_3->setObjectName(QStringLiteral("header_3"));

        HF_table->addWidget(header_3, 0, 2, 1, 1);

        header_4 = new QLabel(raw_1);
        header_4->setObjectName(QStringLiteral("header_4"));

        HF_table->addWidget(header_4, 0, 3, 1, 1);

        x01 = new QLabel(raw_1);
        x01->setObjectName(QStringLiteral("x01"));

        HF_table->addWidget(x01, 1, 0, 1, 1);

        label_0x01 = new QLabel(raw_1);
        label_0x01->setObjectName(QStringLiteral("label_0x01"));

        HF_table->addWidget(label_0x01, 1, 1, 1, 1);

        m_7D_01 = new QLabel(raw_1);
        m_7D_01->setObjectName(QStringLiteral("m_7D_01"));

        HF_table->addWidget(m_7D_01, 1, 2, 1, 1);

        r_7D_01 = new QLabel(raw_1);
        r_7D_01->setObjectName(QStringLiteral("r_7D_01"));

        HF_table->addWidget(r_7D_01, 1, 3, 1, 1);

        x02 = new QLabel(raw_1);
        x02->setObjectName(QStringLiteral("x02"));

        HF_table->addWidget(x02, 2, 0, 1, 1);

        label_0x02 = new QLabel(raw_1);
        label_0x02->setObjectName(QStringLiteral("label_0x02"));

        HF_table->addWidget(label_0x02, 2, 1, 1, 1);

        m_7D_02 = new QLabel(raw_1);
        m_7D_02->setObjectName(QStringLiteral("m_7D_02"));

        HF_table->addWidget(m_7D_02, 2, 2, 1, 1);

        r_7D_02 = new QLabel(raw_1);
        r_7D_02->setObjectName(QStringLiteral("r_7D_02"));

        HF_table->addWidget(r_7D_02, 2, 3, 1, 1);

        x03 = new QLabel(raw_1);
        x03->setObjectName(QStringLiteral("x03"));

        HF_table->addWidget(x03, 3, 0, 1, 1);

        label_0x03 = new QLabel(raw_1);
        label_0x03->setObjectName(QStringLiteral("label_0x03"));

        HF_table->addWidget(label_0x03, 3, 1, 1, 1);

        m_7D_03 = new QLabel(raw_1);
        m_7D_03->setObjectName(QStringLiteral("m_7D_03"));

        HF_table->addWidget(m_7D_03, 3, 2, 1, 1);

        x04 = new QLabel(raw_1);
        x04->setObjectName(QStringLiteral("x04"));

        HF_table->addWidget(x04, 4, 0, 1, 1);

        label_0x04 = new QLabel(raw_1);
        label_0x04->setObjectName(QStringLiteral("label_0x04"));

        HF_table->addWidget(label_0x04, 4, 1, 1, 1);

        m_7D_04 = new QLabel(raw_1);
        m_7D_04->setObjectName(QStringLiteral("m_7D_04"));

        HF_table->addWidget(m_7D_04, 4, 2, 1, 1);

        r_7D_04 = new QLabel(raw_1);
        r_7D_04->setObjectName(QStringLiteral("r_7D_04"));

        HF_table->addWidget(r_7D_04, 4, 3, 1, 1);

        x05 = new QLabel(raw_1);
        x05->setObjectName(QStringLiteral("x05"));

        HF_table->addWidget(x05, 5, 0, 1, 1);

        label_0x05 = new QLabel(raw_1);
        label_0x05->setObjectName(QStringLiteral("label_0x05"));

        HF_table->addWidget(label_0x05, 5, 1, 1, 1);

        m_7D_05 = new QLabel(raw_1);
        m_7D_05->setObjectName(QStringLiteral("m_7D_05"));

        HF_table->addWidget(m_7D_05, 5, 2, 1, 1);

        r_7D_05 = new QLabel(raw_1);
        r_7D_05->setObjectName(QStringLiteral("r_7D_05"));

        HF_table->addWidget(r_7D_05, 5, 3, 1, 1);

        x06 = new QLabel(raw_1);
        x06->setObjectName(QStringLiteral("x06"));

        HF_table->addWidget(x06, 6, 0, 1, 1);

        label_0x06 = new QLabel(raw_1);
        label_0x06->setObjectName(QStringLiteral("label_0x06"));

        HF_table->addWidget(label_0x06, 6, 1, 1, 1);

        m_7D_06 = new QLabel(raw_1);
        m_7D_06->setObjectName(QStringLiteral("m_7D_06"));

        HF_table->addWidget(m_7D_06, 6, 2, 1, 1);

        r_7D_06 = new QLabel(raw_1);
        r_7D_06->setObjectName(QStringLiteral("r_7D_06"));

        HF_table->addWidget(r_7D_06, 6, 3, 1, 1);

        x07 = new QLabel(raw_1);
        x07->setObjectName(QStringLiteral("x07"));

        HF_table->addWidget(x07, 7, 0, 1, 1);

        label_0x07 = new QLabel(raw_1);
        label_0x07->setObjectName(QStringLiteral("label_0x07"));

        HF_table->addWidget(label_0x07, 7, 1, 1, 1);

        m_7D_07 = new QLabel(raw_1);
        m_7D_07->setObjectName(QStringLiteral("m_7D_07"));

        HF_table->addWidget(m_7D_07, 7, 2, 1, 1);

        x08 = new QLabel(raw_1);
        x08->setObjectName(QStringLiteral("x08"));

        HF_table->addWidget(x08, 8, 0, 1, 1);

        label_0x08 = new QLabel(raw_1);
        label_0x08->setObjectName(QStringLiteral("label_0x08"));

        HF_table->addWidget(label_0x08, 8, 1, 1, 1);

        m_7D_08 = new QLabel(raw_1);
        m_7D_08->setObjectName(QStringLiteral("m_7D_08"));

        HF_table->addWidget(m_7D_08, 8, 2, 1, 1);

        x09 = new QLabel(raw_1);
        x09->setObjectName(QStringLiteral("x09"));

        HF_table->addWidget(x09, 9, 0, 1, 1);

        label_0x09 = new QLabel(raw_1);
        label_0x09->setObjectName(QStringLiteral("label_0x09"));

        HF_table->addWidget(label_0x09, 9, 1, 1, 1);

        m_7D_09 = new QLabel(raw_1);
        m_7D_09->setObjectName(QStringLiteral("m_7D_09"));

        HF_table->addWidget(m_7D_09, 9, 2, 1, 1);

        r_7D_09 = new QLabel(raw_1);
        r_7D_09->setObjectName(QStringLiteral("r_7D_09"));

        HF_table->addWidget(r_7D_09, 9, 3, 1, 1);

        x0A = new QLabel(raw_1);
        x0A->setObjectName(QStringLiteral("x0A"));

        HF_table->addWidget(x0A, 10, 0, 1, 1);

        label_0x0A = new QLabel(raw_1);
        label_0x0A->setObjectName(QStringLiteral("label_0x0A"));

        HF_table->addWidget(label_0x0A, 10, 1, 1, 1);

        m_7D_0A = new QLabel(raw_1);
        m_7D_0A->setObjectName(QStringLiteral("m_7D_0A"));

        HF_table->addWidget(m_7D_0A, 10, 2, 1, 1);

        r_7D_0A = new QLabel(raw_1);
        r_7D_0A->setObjectName(QStringLiteral("r_7D_0A"));

        HF_table->addWidget(r_7D_0A, 10, 3, 1, 1);

        x0B = new QLabel(raw_1);
        x0B->setObjectName(QStringLiteral("x0B"));

        HF_table->addWidget(x0B, 11, 0, 1, 1);

        label_0x0B = new QLabel(raw_1);
        label_0x0B->setObjectName(QStringLiteral("label_0x0B"));

        HF_table->addWidget(label_0x0B, 11, 1, 1, 1);

        m_7D_0B = new QLabel(raw_1);
        m_7D_0B->setObjectName(QStringLiteral("m_7D_0B"));

        HF_table->addWidget(m_7D_0B, 11, 2, 1, 1);

        r_7D_0B = new QLabel(raw_1);
        r_7D_0B->setObjectName(QStringLiteral("r_7D_0B"));

        HF_table->addWidget(r_7D_0B, 11, 3, 1, 1);

        x0C = new QLabel(raw_1);
        x0C->setObjectName(QStringLiteral("x0C"));

        HF_table->addWidget(x0C, 12, 0, 1, 1);

        label_0x0C = new QLabel(raw_1);
        label_0x0C->setObjectName(QStringLiteral("label_0x0C"));

        HF_table->addWidget(label_0x0C, 12, 1, 1, 1);

        m_7D_0C = new QLabel(raw_1);
        m_7D_0C->setObjectName(QStringLiteral("m_7D_0C"));

        HF_table->addWidget(m_7D_0C, 12, 2, 1, 1);

        r_7D_0C = new QLabel(raw_1);
        r_7D_0C->setObjectName(QStringLiteral("r_7D_0C"));

        HF_table->addWidget(r_7D_0C, 12, 3, 1, 1);

        x0D = new QLabel(raw_1);
        x0D->setObjectName(QStringLiteral("x0D"));

        HF_table->addWidget(x0D, 13, 0, 1, 1);

        label_0x0D = new QLabel(raw_1);
        label_0x0D->setObjectName(QStringLiteral("label_0x0D"));

        HF_table->addWidget(label_0x0D, 13, 1, 1, 1);

        m_7D_0D = new QLabel(raw_1);
        m_7D_0D->setObjectName(QStringLiteral("m_7D_0D"));

        HF_table->addWidget(m_7D_0D, 13, 2, 1, 1);

        r_7D_0D = new QLabel(raw_1);
        r_7D_0D->setObjectName(QStringLiteral("r_7D_0D"));

        HF_table->addWidget(r_7D_0D, 13, 3, 1, 1);

        x0E = new QLabel(raw_1);
        x0E->setObjectName(QStringLiteral("x0E"));

        HF_table->addWidget(x0E, 14, 0, 1, 1);

        label_0x0E = new QLabel(raw_1);
        label_0x0E->setObjectName(QStringLiteral("label_0x0E"));

        HF_table->addWidget(label_0x0E, 14, 1, 1, 1);

        m_7D_0E = new QLabel(raw_1);
        m_7D_0E->setObjectName(QStringLiteral("m_7D_0E"));

        HF_table->addWidget(m_7D_0E, 14, 2, 1, 1);

        r_7D_0E = new QLabel(raw_1);
        r_7D_0E->setObjectName(QStringLiteral("r_7D_0E"));

        HF_table->addWidget(r_7D_0E, 14, 3, 1, 1);

        x0F = new QLabel(raw_1);
        x0F->setObjectName(QStringLiteral("x0F"));

        HF_table->addWidget(x0F, 15, 0, 1, 1);

        label_0x0F = new QLabel(raw_1);
        label_0x0F->setObjectName(QStringLiteral("label_0x0F"));

        HF_table->addWidget(label_0x0F, 15, 1, 1, 1);

        m_7D_0F = new QLabel(raw_1);
        m_7D_0F->setObjectName(QStringLiteral("m_7D_0F"));

        HF_table->addWidget(m_7D_0F, 15, 2, 1, 1);

        r_7D_0F = new QLabel(raw_1);
        r_7D_0F->setObjectName(QStringLiteral("r_7D_0F"));

        HF_table->addWidget(r_7D_0F, 15, 3, 1, 1);

        x10 = new QLabel(raw_1);
        x10->setObjectName(QStringLiteral("x10"));

        HF_table->addWidget(x10, 16, 0, 1, 1);

        label_0x10 = new QLabel(raw_1);
        label_0x10->setObjectName(QStringLiteral("label_0x10"));

        HF_table->addWidget(label_0x10, 16, 1, 1, 1);

        m_7D_10 = new QLabel(raw_1);
        m_7D_10->setObjectName(QStringLiteral("m_7D_10"));

        HF_table->addWidget(m_7D_10, 16, 2, 1, 1);

        r_7D_10 = new QLabel(raw_1);
        r_7D_10->setObjectName(QStringLiteral("r_7D_10"));

        HF_table->addWidget(r_7D_10, 16, 3, 1, 1);

        x11 = new QLabel(raw_1);
        x11->setObjectName(QStringLiteral("x11"));

        HF_table->addWidget(x11, 17, 0, 1, 1);

        label_0x11 = new QLabel(raw_1);
        label_0x11->setObjectName(QStringLiteral("label_0x11"));

        HF_table->addWidget(label_0x11, 17, 1, 1, 1);

        m_7D_11 = new QLabel(raw_1);
        m_7D_11->setObjectName(QStringLiteral("m_7D_11"));

        HF_table->addWidget(m_7D_11, 17, 2, 1, 1);

        r_7D_11 = new QLabel(raw_1);
        r_7D_11->setObjectName(QStringLiteral("r_7D_11"));

        HF_table->addWidget(r_7D_11, 17, 3, 1, 1);

        x12 = new QLabel(raw_1);
        x12->setObjectName(QStringLiteral("x12"));

        HF_table->addWidget(x12, 18, 0, 1, 1);

        label_0x12 = new QLabel(raw_1);
        label_0x12->setObjectName(QStringLiteral("label_0x12"));

        HF_table->addWidget(label_0x12, 18, 1, 1, 1);

        m_7D_12 = new QLabel(raw_1);
        m_7D_12->setObjectName(QStringLiteral("m_7D_12"));

        HF_table->addWidget(m_7D_12, 18, 2, 1, 1);

        r_7D_12 = new QLabel(raw_1);
        r_7D_12->setObjectName(QStringLiteral("r_7D_12"));

        HF_table->addWidget(r_7D_12, 18, 3, 1, 1);

        x13 = new QLabel(raw_1);
        x13->setObjectName(QStringLiteral("x13"));

        HF_table->addWidget(x13, 19, 0, 1, 1);

        label_0x13 = new QLabel(raw_1);
        label_0x13->setObjectName(QStringLiteral("label_0x13"));

        HF_table->addWidget(label_0x13, 19, 1, 1, 1);

        m_7D_13 = new QLabel(raw_1);
        m_7D_13->setObjectName(QStringLiteral("m_7D_13"));

        HF_table->addWidget(m_7D_13, 19, 2, 1, 1);

        r_7D_13 = new QLabel(raw_1);
        r_7D_13->setObjectName(QStringLiteral("r_7D_13"));

        HF_table->addWidget(r_7D_13, 19, 3, 1, 1);

        x15 = new QLabel(raw_1);
        x15->setObjectName(QStringLiteral("x15"));

        HF_table->addWidget(x15, 21, 0, 1, 1);

        label_0x15 = new QLabel(raw_1);
        label_0x15->setObjectName(QStringLiteral("label_0x15"));

        HF_table->addWidget(label_0x15, 21, 1, 1, 1);

        m_7D_15 = new QLabel(raw_1);
        m_7D_15->setObjectName(QStringLiteral("m_7D_15"));

        HF_table->addWidget(m_7D_15, 21, 2, 1, 1);

        x16 = new QLabel(raw_1);
        x16->setObjectName(QStringLiteral("x16"));

        HF_table->addWidget(x16, 22, 0, 1, 1);

        label_0x16 = new QLabel(raw_1);
        label_0x16->setObjectName(QStringLiteral("label_0x16"));

        HF_table->addWidget(label_0x16, 22, 1, 1, 1);

        m_7D_16 = new QLabel(raw_1);
        m_7D_16->setObjectName(QStringLiteral("m_7D_16"));

        HF_table->addWidget(m_7D_16, 22, 2, 1, 1);

        r_7D_16 = new QLabel(raw_1);
        r_7D_16->setObjectName(QStringLiteral("r_7D_16"));

        HF_table->addWidget(r_7D_16, 22, 3, 1, 1);

        x17 = new QLabel(raw_1);
        x17->setObjectName(QStringLiteral("x17"));

        HF_table->addWidget(x17, 23, 0, 1, 1);

        label_0x17 = new QLabel(raw_1);
        label_0x17->setObjectName(QStringLiteral("label_0x17"));

        HF_table->addWidget(label_0x17, 23, 1, 1, 1);

        m_7D_17 = new QLabel(raw_1);
        m_7D_17->setObjectName(QStringLiteral("m_7D_17"));

        HF_table->addWidget(m_7D_17, 23, 2, 1, 1);

        x18 = new QLabel(raw_1);
        x18->setObjectName(QStringLiteral("x18"));

        HF_table->addWidget(x18, 24, 0, 1, 1);

        label_0x18 = new QLabel(raw_1);
        label_0x18->setObjectName(QStringLiteral("label_0x18"));

        HF_table->addWidget(label_0x18, 24, 1, 1, 1);

        m_7D_18 = new QLabel(raw_1);
        m_7D_18->setObjectName(QStringLiteral("m_7D_18"));

        HF_table->addWidget(m_7D_18, 24, 2, 1, 1);

        x19 = new QLabel(raw_1);
        x19->setObjectName(QStringLiteral("x19"));

        HF_table->addWidget(x19, 25, 0, 1, 1);

        label_0x19 = new QLabel(raw_1);
        label_0x19->setObjectName(QStringLiteral("label_0x19"));

        HF_table->addWidget(label_0x19, 25, 1, 1, 1);

        m_7D_19 = new QLabel(raw_1);
        m_7D_19->setObjectName(QStringLiteral("m_7D_19"));

        HF_table->addWidget(m_7D_19, 25, 2, 1, 1);

        x1A = new QLabel(raw_1);
        x1A->setObjectName(QStringLiteral("x1A"));

        HF_table->addWidget(x1A, 26, 0, 1, 1);

        label_0x1A = new QLabel(raw_1);
        label_0x1A->setObjectName(QStringLiteral("label_0x1A"));

        HF_table->addWidget(label_0x1A, 26, 1, 1, 1);

        m_7D_1A = new QLabel(raw_1);
        m_7D_1A->setObjectName(QStringLiteral("m_7D_1A"));

        HF_table->addWidget(m_7D_1A, 26, 2, 1, 1);

        x1B = new QLabel(raw_1);
        x1B->setObjectName(QStringLiteral("x1B"));

        HF_table->addWidget(x1B, 27, 0, 1, 1);

        label_0x1B = new QLabel(raw_1);
        label_0x1B->setObjectName(QStringLiteral("label_0x1B"));

        HF_table->addWidget(label_0x1B, 27, 1, 1, 1);

        m_7D_1B = new QLabel(raw_1);
        m_7D_1B->setObjectName(QStringLiteral("m_7D_1B"));

        HF_table->addWidget(m_7D_1B, 27, 2, 1, 1);

        x1C = new QLabel(raw_1);
        x1C->setObjectName(QStringLiteral("x1C"));

        HF_table->addWidget(x1C, 28, 0, 1, 1);

        label_0x1C = new QLabel(raw_1);
        label_0x1C->setObjectName(QStringLiteral("label_0x1C"));

        HF_table->addWidget(label_0x1C, 28, 1, 1, 1);

        m_7D_1C = new QLabel(raw_1);
        m_7D_1C->setObjectName(QStringLiteral("m_7D_1C"));

        HF_table->addWidget(m_7D_1C, 28, 2, 1, 1);

        x1D = new QLabel(raw_1);
        x1D->setObjectName(QStringLiteral("x1D"));

        HF_table->addWidget(x1D, 29, 0, 1, 1);

        label_0x1D = new QLabel(raw_1);
        label_0x1D->setObjectName(QStringLiteral("label_0x1D"));

        HF_table->addWidget(label_0x1D, 29, 1, 1, 1);

        m_7D_1D = new QLabel(raw_1);
        m_7D_1D->setObjectName(QStringLiteral("m_7D_1D"));

        HF_table->addWidget(m_7D_1D, 29, 2, 1, 1);

        x1E = new QLabel(raw_1);
        x1E->setObjectName(QStringLiteral("x1E"));

        HF_table->addWidget(x1E, 30, 0, 1, 1);

        label_0x1E = new QLabel(raw_1);
        label_0x1E->setObjectName(QStringLiteral("label_0x1E"));

        HF_table->addWidget(label_0x1E, 30, 1, 1, 1);

        m_7D_1E = new QLabel(raw_1);
        m_7D_1E->setObjectName(QStringLiteral("m_7D_1E"));

        HF_table->addWidget(m_7D_1E, 30, 2, 1, 1);

        x1F = new QLabel(raw_1);
        x1F->setObjectName(QStringLiteral("x1F"));

        HF_table->addWidget(x1F, 31, 0, 1, 1);

        label_0x1F = new QLabel(raw_1);
        label_0x1F->setObjectName(QStringLiteral("label_0x1F"));

        HF_table->addWidget(label_0x1F, 31, 1, 1, 1);

        m_7D_1F = new QLabel(raw_1);
        m_7D_1F->setObjectName(QStringLiteral("m_7D_1F"));

        HF_table->addWidget(m_7D_1F, 31, 2, 1, 1);

        raw_2 = new QWidget(raw);
        raw_2->setObjectName(QStringLiteral("raw_2"));
        raw_2->setGeometry(QRect(620, 10, 500, 504));
        HF_table_2 = new QGridLayout(raw_2);
        HF_table_2->setSpacing(6);
        HF_table_2->setContentsMargins(11, 11, 11, 11);
        HF_table_2->setObjectName(QStringLiteral("HF_table_2"));
        HF_table_2->setContentsMargins(0, 0, 0, 0);
        header_5 = new QLabel(raw_2);
        header_5->setObjectName(QStringLiteral("header_5"));

        HF_table_2->addWidget(header_5, 0, 0, 1, 1);

        header_6 = new QLabel(raw_2);
        header_6->setObjectName(QStringLiteral("header_6"));

        HF_table_2->addWidget(header_6, 0, 1, 1, 1);

        header_7 = new QLabel(raw_2);
        header_7->setObjectName(QStringLiteral("header_7"));

        HF_table_2->addWidget(header_7, 0, 2, 1, 1);

        header_8 = new QLabel(raw_2);
        header_8->setObjectName(QStringLiteral("header_8"));

        HF_table_2->addWidget(header_8, 0, 3, 1, 1);

        Ax01 = new QLabel(raw_2);
        Ax01->setObjectName(QStringLiteral("Ax01"));

        HF_table_2->addWidget(Ax01, 1, 0, 1, 1);

        label_80x01 = new QLabel(raw_2);
        label_80x01->setObjectName(QStringLiteral("label_80x01"));

        HF_table_2->addWidget(label_80x01, 1, 1, 1, 1);

        m_80_01 = new QLabel(raw_2);
        m_80_01->setObjectName(QStringLiteral("m_80_01"));

        HF_table_2->addWidget(m_80_01, 1, 2, 1, 1);

        r_80_01 = new QLabel(raw_2);
        r_80_01->setObjectName(QStringLiteral("r_80_01"));

        HF_table_2->addWidget(r_80_01, 1, 3, 1, 1);

        Ax03 = new QLabel(raw_2);
        Ax03->setObjectName(QStringLiteral("Ax03"));

        HF_table_2->addWidget(Ax03, 3, 0, 1, 1);

        label_80x03 = new QLabel(raw_2);
        label_80x03->setObjectName(QStringLiteral("label_80x03"));

        HF_table_2->addWidget(label_80x03, 3, 1, 1, 1);

        m_80_03 = new QLabel(raw_2);
        m_80_03->setObjectName(QStringLiteral("m_80_03"));

        HF_table_2->addWidget(m_80_03, 3, 2, 1, 1);

        r_80_03 = new QLabel(raw_2);
        r_80_03->setObjectName(QStringLiteral("r_80_03"));

        HF_table_2->addWidget(r_80_03, 3, 3, 1, 1);

        Ax04 = new QLabel(raw_2);
        Ax04->setObjectName(QStringLiteral("Ax04"));

        HF_table_2->addWidget(Ax04, 4, 0, 1, 1);

        label_80x04 = new QLabel(raw_2);
        label_80x04->setObjectName(QStringLiteral("label_80x04"));

        HF_table_2->addWidget(label_80x04, 4, 1, 1, 1);

        m_80_04 = new QLabel(raw_2);
        m_80_04->setObjectName(QStringLiteral("m_80_04"));

        HF_table_2->addWidget(m_80_04, 4, 2, 1, 1);

        r_80_04 = new QLabel(raw_2);
        r_80_04->setObjectName(QStringLiteral("r_80_04"));

        HF_table_2->addWidget(r_80_04, 4, 3, 1, 1);

        Ax05 = new QLabel(raw_2);
        Ax05->setObjectName(QStringLiteral("Ax05"));

        HF_table_2->addWidget(Ax05, 5, 0, 1, 1);

        label_80x05 = new QLabel(raw_2);
        label_80x05->setObjectName(QStringLiteral("label_80x05"));

        HF_table_2->addWidget(label_80x05, 5, 1, 1, 1);

        m_80_05 = new QLabel(raw_2);
        m_80_05->setObjectName(QStringLiteral("m_80_05"));

        HF_table_2->addWidget(m_80_05, 5, 2, 1, 1);

        r_80_05 = new QLabel(raw_2);
        r_80_05->setObjectName(QStringLiteral("r_80_05"));

        HF_table_2->addWidget(r_80_05, 5, 3, 1, 1);

        Ax06 = new QLabel(raw_2);
        Ax06->setObjectName(QStringLiteral("Ax06"));

        HF_table_2->addWidget(Ax06, 6, 0, 1, 1);

        label_80x06 = new QLabel(raw_2);
        label_80x06->setObjectName(QStringLiteral("label_80x06"));

        HF_table_2->addWidget(label_80x06, 6, 1, 1, 1);

        m_80_06 = new QLabel(raw_2);
        m_80_06->setObjectName(QStringLiteral("m_80_06"));

        HF_table_2->addWidget(m_80_06, 6, 2, 1, 1);

        r_80_06 = new QLabel(raw_2);
        r_80_06->setObjectName(QStringLiteral("r_80_06"));

        HF_table_2->addWidget(r_80_06, 6, 3, 1, 1);

        Ax07 = new QLabel(raw_2);
        Ax07->setObjectName(QStringLiteral("Ax07"));

        HF_table_2->addWidget(Ax07, 7, 0, 1, 1);

        label_80x07 = new QLabel(raw_2);
        label_80x07->setObjectName(QStringLiteral("label_80x07"));

        HF_table_2->addWidget(label_80x07, 7, 1, 1, 1);

        m_80_07 = new QLabel(raw_2);
        m_80_07->setObjectName(QStringLiteral("m_80_07"));

        HF_table_2->addWidget(m_80_07, 7, 2, 1, 1);

        r_80_07 = new QLabel(raw_2);
        r_80_07->setObjectName(QStringLiteral("r_80_07"));

        HF_table_2->addWidget(r_80_07, 7, 3, 1, 1);

        Ax08 = new QLabel(raw_2);
        Ax08->setObjectName(QStringLiteral("Ax08"));

        HF_table_2->addWidget(Ax08, 8, 0, 1, 1);

        label_80x08 = new QLabel(raw_2);
        label_80x08->setObjectName(QStringLiteral("label_80x08"));

        HF_table_2->addWidget(label_80x08, 8, 1, 1, 1);

        m_80_08 = new QLabel(raw_2);
        m_80_08->setObjectName(QStringLiteral("m_80_08"));

        HF_table_2->addWidget(m_80_08, 8, 2, 1, 1);

        r_80_08 = new QLabel(raw_2);
        r_80_08->setObjectName(QStringLiteral("r_80_08"));

        HF_table_2->addWidget(r_80_08, 8, 3, 1, 1);

        Ax09 = new QLabel(raw_2);
        Ax09->setObjectName(QStringLiteral("Ax09"));

        HF_table_2->addWidget(Ax09, 9, 0, 1, 1);

        label_80x09 = new QLabel(raw_2);
        label_80x09->setObjectName(QStringLiteral("label_80x09"));

        HF_table_2->addWidget(label_80x09, 9, 1, 1, 1);

        m_80_09 = new QLabel(raw_2);
        m_80_09->setObjectName(QStringLiteral("m_80_09"));

        HF_table_2->addWidget(m_80_09, 9, 2, 1, 1);

        r_80_09 = new QLabel(raw_2);
        r_80_09->setObjectName(QStringLiteral("r_80_09"));

        HF_table_2->addWidget(r_80_09, 9, 3, 1, 1);

        Ax0A = new QLabel(raw_2);
        Ax0A->setObjectName(QStringLiteral("Ax0A"));

        HF_table_2->addWidget(Ax0A, 10, 0, 1, 1);

        label_80x0A = new QLabel(raw_2);
        label_80x0A->setObjectName(QStringLiteral("label_80x0A"));

        HF_table_2->addWidget(label_80x0A, 10, 1, 1, 1);

        m_80_0A = new QLabel(raw_2);
        m_80_0A->setObjectName(QStringLiteral("m_80_0A"));

        HF_table_2->addWidget(m_80_0A, 10, 2, 1, 1);

        r_80_0A = new QLabel(raw_2);
        r_80_0A->setObjectName(QStringLiteral("r_80_0A"));

        HF_table_2->addWidget(r_80_0A, 10, 3, 1, 1);

        Ax0B = new QLabel(raw_2);
        Ax0B->setObjectName(QStringLiteral("Ax0B"));

        HF_table_2->addWidget(Ax0B, 11, 0, 1, 1);

        label_80x0B = new QLabel(raw_2);
        label_80x0B->setObjectName(QStringLiteral("label_80x0B"));

        HF_table_2->addWidget(label_80x0B, 11, 1, 1, 1);

        m_80_0B = new QLabel(raw_2);
        m_80_0B->setObjectName(QStringLiteral("m_80_0B"));

        HF_table_2->addWidget(m_80_0B, 11, 2, 1, 1);

        r_80_0B = new QLabel(raw_2);
        r_80_0B->setObjectName(QStringLiteral("r_80_0B"));

        HF_table_2->addWidget(r_80_0B, 11, 3, 1, 1);

        Ax0C = new QLabel(raw_2);
        Ax0C->setObjectName(QStringLiteral("Ax0C"));

        HF_table_2->addWidget(Ax0C, 12, 0, 1, 1);

        label_80x0C = new QLabel(raw_2);
        label_80x0C->setObjectName(QStringLiteral("label_80x0C"));

        HF_table_2->addWidget(label_80x0C, 12, 1, 1, 1);

        m_80_0C = new QLabel(raw_2);
        m_80_0C->setObjectName(QStringLiteral("m_80_0C"));

        HF_table_2->addWidget(m_80_0C, 12, 2, 1, 1);

        r_80_0C = new QLabel(raw_2);
        r_80_0C->setObjectName(QStringLiteral("r_80_0C"));

        HF_table_2->addWidget(r_80_0C, 12, 3, 1, 1);

        Ax0D = new QLabel(raw_2);
        Ax0D->setObjectName(QStringLiteral("Ax0D"));

        HF_table_2->addWidget(Ax0D, 13, 0, 1, 1);

        label_80x0D = new QLabel(raw_2);
        label_80x0D->setObjectName(QStringLiteral("label_80x0D"));

        HF_table_2->addWidget(label_80x0D, 13, 1, 1, 1);

        m_80_0D = new QLabel(raw_2);
        m_80_0D->setObjectName(QStringLiteral("m_80_0D"));

        HF_table_2->addWidget(m_80_0D, 13, 2, 1, 1);

        r_80_0D = new QLabel(raw_2);
        r_80_0D->setObjectName(QStringLiteral("r_80_0D"));

        HF_table_2->addWidget(r_80_0D, 13, 3, 1, 1);

        Ax0E = new QLabel(raw_2);
        Ax0E->setObjectName(QStringLiteral("Ax0E"));

        HF_table_2->addWidget(Ax0E, 14, 0, 1, 1);

        label_80x0E = new QLabel(raw_2);
        label_80x0E->setObjectName(QStringLiteral("label_80x0E"));

        HF_table_2->addWidget(label_80x0E, 14, 1, 1, 1);

        m_80_0E = new QLabel(raw_2);
        m_80_0E->setObjectName(QStringLiteral("m_80_0E"));

        HF_table_2->addWidget(m_80_0E, 14, 2, 1, 1);

        r_80_0E = new QLabel(raw_2);
        r_80_0E->setObjectName(QStringLiteral("r_80_0E"));

        HF_table_2->addWidget(r_80_0E, 14, 3, 1, 1);

        Ax0F = new QLabel(raw_2);
        Ax0F->setObjectName(QStringLiteral("Ax0F"));

        HF_table_2->addWidget(Ax0F, 15, 0, 1, 1);

        label_80x0F = new QLabel(raw_2);
        label_80x0F->setObjectName(QStringLiteral("label_80x0F"));

        HF_table_2->addWidget(label_80x0F, 15, 1, 1, 1);

        m_80_0F = new QLabel(raw_2);
        m_80_0F->setObjectName(QStringLiteral("m_80_0F"));

        HF_table_2->addWidget(m_80_0F, 15, 2, 1, 1);

        Ax10 = new QLabel(raw_2);
        Ax10->setObjectName(QStringLiteral("Ax10"));

        HF_table_2->addWidget(Ax10, 16, 0, 1, 1);

        label_80x10 = new QLabel(raw_2);
        label_80x10->setObjectName(QStringLiteral("label_80x10"));

        HF_table_2->addWidget(label_80x10, 16, 1, 1, 1);

        m_80_10 = new QLabel(raw_2);
        m_80_10->setObjectName(QStringLiteral("m_80_10"));

        HF_table_2->addWidget(m_80_10, 16, 2, 1, 1);

        r_80_10 = new QLabel(raw_2);
        r_80_10->setObjectName(QStringLiteral("r_80_10"));

        HF_table_2->addWidget(r_80_10, 16, 3, 1, 1);

        Ax11 = new QLabel(raw_2);
        Ax11->setObjectName(QStringLiteral("Ax11"));

        HF_table_2->addWidget(Ax11, 17, 0, 1, 1);

        label_80x11 = new QLabel(raw_2);
        label_80x11->setObjectName(QStringLiteral("label_80x11"));

        HF_table_2->addWidget(label_80x11, 17, 1, 1, 1);

        m_80_11 = new QLabel(raw_2);
        m_80_11->setObjectName(QStringLiteral("m_80_11"));

        HF_table_2->addWidget(m_80_11, 17, 2, 1, 1);

        Ax12 = new QLabel(raw_2);
        Ax12->setObjectName(QStringLiteral("Ax12"));

        HF_table_2->addWidget(Ax12, 18, 0, 1, 1);

        label_80x12 = new QLabel(raw_2);
        label_80x12->setObjectName(QStringLiteral("label_80x12"));

        HF_table_2->addWidget(label_80x12, 18, 1, 1, 1);

        m_80_12 = new QLabel(raw_2);
        m_80_12->setObjectName(QStringLiteral("m_80_12"));

        HF_table_2->addWidget(m_80_12, 18, 2, 1, 1);

        r_80_12 = new QLabel(raw_2);
        r_80_12->setObjectName(QStringLiteral("r_80_12"));

        HF_table_2->addWidget(r_80_12, 18, 3, 1, 1);

        Ax13 = new QLabel(raw_2);
        Ax13->setObjectName(QStringLiteral("Ax13"));

        HF_table_2->addWidget(Ax13, 19, 0, 1, 1);

        label_80x13 = new QLabel(raw_2);
        label_80x13->setObjectName(QStringLiteral("label_80x13"));

        HF_table_2->addWidget(label_80x13, 19, 1, 1, 1);

        m_80_13 = new QLabel(raw_2);
        m_80_13->setObjectName(QStringLiteral("m_80_13"));

        HF_table_2->addWidget(m_80_13, 19, 2, 1, 1);

        r_80_13 = new QLabel(raw_2);
        r_80_13->setObjectName(QStringLiteral("r_80_13"));

        HF_table_2->addWidget(r_80_13, 19, 3, 1, 1);

        Ax15 = new QLabel(raw_2);
        Ax15->setObjectName(QStringLiteral("Ax15"));

        HF_table_2->addWidget(Ax15, 21, 0, 1, 1);

        label_80x15 = new QLabel(raw_2);
        label_80x15->setObjectName(QStringLiteral("label_80x15"));

        HF_table_2->addWidget(label_80x15, 21, 1, 1, 1);

        m_80_15 = new QLabel(raw_2);
        m_80_15->setObjectName(QStringLiteral("m_80_15"));

        HF_table_2->addWidget(m_80_15, 21, 2, 1, 1);

        Ax16 = new QLabel(raw_2);
        Ax16->setObjectName(QStringLiteral("Ax16"));

        HF_table_2->addWidget(Ax16, 22, 0, 1, 1);

        label_80x16 = new QLabel(raw_2);
        label_80x16->setObjectName(QStringLiteral("label_80x16"));

        HF_table_2->addWidget(label_80x16, 22, 1, 1, 1);

        m_80_16 = new QLabel(raw_2);
        m_80_16->setObjectName(QStringLiteral("m_80_16"));

        HF_table_2->addWidget(m_80_16, 22, 2, 1, 1);

        r_80_16 = new QLabel(raw_2);
        r_80_16->setObjectName(QStringLiteral("r_80_16"));

        HF_table_2->addWidget(r_80_16, 22, 3, 1, 1);

        Ax17 = new QLabel(raw_2);
        Ax17->setObjectName(QStringLiteral("Ax17"));

        HF_table_2->addWidget(Ax17, 23, 0, 1, 1);

        label_80x17 = new QLabel(raw_2);
        label_80x17->setObjectName(QStringLiteral("label_80x17"));

        HF_table_2->addWidget(label_80x17, 23, 1, 1, 1);

        m_80_17 = new QLabel(raw_2);
        m_80_17->setObjectName(QStringLiteral("m_80_17"));

        HF_table_2->addWidget(m_80_17, 23, 2, 1, 1);

        r_80_17 = new QLabel(raw_2);
        r_80_17->setObjectName(QStringLiteral("r_80_17"));

        HF_table_2->addWidget(r_80_17, 23, 3, 1, 1);

        Ax19 = new QLabel(raw_2);
        Ax19->setObjectName(QStringLiteral("Ax19"));

        HF_table_2->addWidget(Ax19, 25, 0, 1, 1);

        label_80x19 = new QLabel(raw_2);
        label_80x19->setObjectName(QStringLiteral("label_80x19"));

        HF_table_2->addWidget(label_80x19, 25, 1, 1, 1);

        m_80_19 = new QLabel(raw_2);
        m_80_19->setObjectName(QStringLiteral("m_80_19"));

        HF_table_2->addWidget(m_80_19, 25, 2, 1, 1);

        r_80_19 = new QLabel(raw_2);
        r_80_19->setObjectName(QStringLiteral("r_80_19"));

        HF_table_2->addWidget(r_80_19, 25, 3, 1, 1);

        Ax1A = new QLabel(raw_2);
        Ax1A->setObjectName(QStringLiteral("Ax1A"));

        HF_table_2->addWidget(Ax1A, 26, 0, 1, 1);

        label_80x1A = new QLabel(raw_2);
        label_80x1A->setObjectName(QStringLiteral("label_80x1A"));

        HF_table_2->addWidget(label_80x1A, 26, 1, 1, 1);

        m_80_1A = new QLabel(raw_2);
        m_80_1A->setObjectName(QStringLiteral("m_80_1A"));

        HF_table_2->addWidget(m_80_1A, 26, 2, 1, 1);

        Ax1B = new QLabel(raw_2);
        Ax1B->setObjectName(QStringLiteral("Ax1B"));

        HF_table_2->addWidget(Ax1B, 27, 0, 1, 1);

        label_80x1B = new QLabel(raw_2);
        label_80x1B->setObjectName(QStringLiteral("label_80x1B"));

        HF_table_2->addWidget(label_80x1B, 27, 1, 1, 1);

        m_80_1B = new QLabel(raw_2);
        m_80_1B->setObjectName(QStringLiteral("m_80_1B"));

        HF_table_2->addWidget(m_80_1B, 27, 2, 1, 1);

        Tab_main->addTab(raw, QString());
        layoutWidget_7 = new QWidget(centralWidget);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(3, 0, 781, 29));
        horizontalLayoutecuconnect = new QHBoxLayout(layoutWidget_7);
        horizontalLayoutecuconnect->setSpacing(6);
        horizontalLayoutecuconnect->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutecuconnect->setObjectName(QStringLiteral("horizontalLayoutecuconnect"));
        horizontalLayoutecuconnect->setContentsMargins(0, 0, 0, 0);
        m_connectButton = new QPushButton(layoutWidget_7);
        m_connectButton->setObjectName(QStringLiteral("m_connectButton"));

        horizontalLayoutecuconnect->addWidget(m_connectButton);

        m_disconnectButton = new QPushButton(layoutWidget_7);
        m_disconnectButton->setObjectName(QStringLiteral("m_disconnectButton"));
        m_disconnectButton->setDisabled(true);

        horizontalLayoutecuconnect->addWidget(m_disconnectButton);

        m_vline0 = new QFrame(layoutWidget_7);
        m_vline0->setObjectName(QStringLiteral("m_vline0"));
        m_vline0->setFrameShape(QFrame::VLine);
        m_vline0->setFrameShadow(QFrame::Sunken);

        horizontalLayoutecuconnect->addWidget(m_vline0);

        m_ecuIdLabel = new QLabel(layoutWidget_7);
        m_ecuIdLabel->setObjectName(QStringLiteral("m_ecuIdLabel"));

        horizontalLayoutecuconnect->addWidget(m_ecuIdLabel);

        m_vline1 = new QFrame(layoutWidget_7);
        m_vline1->setObjectName(QStringLiteral("m_vline1"));
        m_vline1->setFrameShape(QFrame::VLine);
        m_vline1->setFrameShadow(QFrame::Sunken);

        horizontalLayoutecuconnect->addWidget(m_vline1);

        comunicationlayout = new QHBoxLayout();
        comunicationlayout->setSpacing(6);
        comunicationlayout->setObjectName(QStringLiteral("comunicationlayout"));
        m_communicationsStatusLabel = new QLabel(layoutWidget_7);
        m_communicationsStatusLabel->setObjectName(QStringLiteral("m_communicationsStatusLabel"));

        comunicationlayout->addWidget(m_communicationsStatusLabel);

        m_commsGoodLed = new QLedIndicator(layoutWidget_7);
        m_commsGoodLed->setObjectName(QStringLiteral("m_commsGoodLed"));

        comunicationlayout->addWidget(m_commsGoodLed);

        m_commsBadLed = new QLedIndicator(layoutWidget_7);
        m_commsBadLed->setObjectName(QStringLiteral("m_commsBadLed"));

        comunicationlayout->addWidget(m_commsBadLed);

        m_vline2 = new QFrame(layoutWidget_7);
        m_vline2->setObjectName(QStringLiteral("m_vline2"));
        m_vline2->setFrameShape(QFrame::VLine);
        m_vline2->setFrameShadow(QFrame::Sunken);

        comunicationlayout->addWidget(m_vline2);

        m_engineerrorLabel = new QLabel(layoutWidget_7);
        m_engineerrorLabel->setObjectName(QStringLiteral("m_engineerrorLabel"));

        comunicationlayout->addWidget(m_engineerrorLabel);

        m_engine_error = new QLedIndicator(layoutWidget_7);
        m_engine_error->setObjectName(QStringLiteral("m_engine_error"));

        comunicationlayout->addWidget(m_engine_error);


        horizontalLayoutecuconnect->addLayout(comunicationlayout);

        layoutWidget_8 = new QWidget(centralWidget);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(0, 0, 2, 2));
        m_lowerHorizontalLayout = new QHBoxLayout(layoutWidget_8);
        m_lowerHorizontalLayout->setSpacing(6);
        m_lowerHorizontalLayout->setContentsMargins(11, 11, 11, 11);
        m_lowerHorizontalLayout->setObjectName(QStringLiteral("m_lowerHorizontalLayout"));
        m_lowerHorizontalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 905, 21));
        m_fileMenu = new QMenu(menuBar);
        m_fileMenu->setObjectName(QStringLiteral("m_fileMenu"));
        m_optionsMenu = new QMenu(menuBar);
        m_optionsMenu->setObjectName(QStringLiteral("m_optionsMenu"));
        m_helpMenu = new QMenu(menuBar);
        m_helpMenu->setObjectName(QStringLiteral("m_helpMenu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(m_fileMenu->menuAction());
        menuBar->addAction(m_optionsMenu->menuAction());
        menuBar->addAction(m_helpMenu->menuAction());
        m_fileMenu->addSeparator();
        m_fileMenu->addAction(m_exitAction);
        m_optionsMenu->addAction(m_editSettingsAction);
        m_helpMenu->addAction(m_helpContentsAction);
        m_helpMenu->addAction(m_helpAboutAction);

        retranslateUi(MainWindow);

        Tab_main->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        m_helpContentsAction->setText(QApplication::translate("MainWindow", "&Contents...", Q_NULLPTR));
        m_helpAboutAction->setText(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
        m_showFaultCodesAction->setText(QApplication::translate("MainWindow", "Show fault &codes...", Q_NULLPTR));
        m_idleAirControlAction->setText(QApplication::translate("MainWindow", "&Idle air control...", Q_NULLPTR));
        m_editSettingsAction->setText(QApplication::translate("MainWindow", "&Edit settings...", Q_NULLPTR));
        m_saveROMImageAction->setText(QApplication::translate("MainWindow", "&Save ROM image...", Q_NULLPTR));
        m_exitAction->setText(QApplication::translate("MainWindow", "&Exit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_lambda_voltage->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> 0-200 mV is lean mixture</p><p>700-900 mV is rich mixture </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_throttle_pos_label->setText(QApplication::translate("MainWindow", "Throttle Position", Q_NULLPTR));
        m_short_term_label->setText(QApplication::translate("MainWindow", "Short Term Fuel Correction", Q_NULLPTR));
        m_idlebypass_pos_label->setText(QApplication::translate("MainWindow", "Idle Air Control Motor Position", Q_NULLPTR));
        m_battery_voltage_label->setText(QApplication::translate("MainWindow", "Battery Voltage", Q_NULLPTR));
        m_ignition_advance_label->setText(QApplication::translate("MainWindow", "Ignition Advance", Q_NULLPTR));
        m_lambda_label->setText(QApplication::translate("MainWindow", "Lambda Voltage", Q_NULLPTR));
        m_closed_loop_label->setText(QApplication::translate("MainWindow", "Closed Loop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_mapGauge->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>engine stopped	&lt;&gt; ~ 100 kPa</p><p>engine idling 	&lt;&gt; ~ 25-40 kPa</p><p>when deviating check hoses</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_revCounterLabel->setText(QApplication::translate("MainWindow", "Engine Speed", Q_NULLPTR));
        m_mapGaugeLabel->setText(QApplication::translate("MainWindow", "Manifold Air Pressure", Q_NULLPTR));
        m_idleSwitchLabel->setText(QApplication::translate("MainWindow", "Idle Switch", Q_NULLPTR));
        m_logFileNameLabel->setText(QApplication::translate("MainWindow", "Log file name:", Q_NULLPTR));
        m_startLoggingButton->setText(QApplication::translate("MainWindow", "Start logging", Q_NULLPTR));
        m_stopLoggingButton->setText(QApplication::translate("MainWindow", "Stop logging", Q_NULLPTR));
        m_waterTempLabel->setText(QApplication::translate("MainWindow", "Coolant Temperature", Q_NULLPTR));
        m_airTempLabel->setText(QApplication::translate("MainWindow", "Air Temperature", Q_NULLPTR));
        m_long_trim_label->setText(QApplication::translate("MainWindow", "Long Term:", Q_NULLPTR));
        m_long_trim->setText(QApplication::translate("MainWindow", "--", Q_NULLPTR));
        Tab_main->setTabText(Tab_main->indexOf(overview_tab), QApplication::translate("MainWindow", "Overview", Q_NULLPTR));
        m_fuel_trim_plusButton->setText(QApplication::translate("MainWindow", "Richer", Q_NULLPTR));
        m_fuel_trim_minusButton->setText(QApplication::translate("MainWindow", "Leaner", Q_NULLPTR));
        m_idle_decay_plusButton->setText(QApplication::translate("MainWindow", "More", Q_NULLPTR));
        m_idle_decay_minusButton->setText(QApplication::translate("MainWindow", "Less", Q_NULLPTR));
        m_idle_speed_plusButton->setText(QApplication::translate("MainWindow", "Faster", Q_NULLPTR));
        m_idle_speed_minusButton->setText(QApplication::translate("MainWindow", "Slower", Q_NULLPTR));
        m_ignition_advance_minusButton->setText(QApplication::translate("MainWindow", "Earlier (?)", Q_NULLPTR));
        m_ignition_advance_plusButton->setText(QApplication::translate("MainWindow", "Later (?)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        e_idle_error->setToolTip(QApplication::translate("MainWindow", "Idle error is the difference between actual engine speed en target idle speed. Values only shown when idle switch is active and max. value shown is 200 RPM. ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        e_short_term_fuel_trim->setToolTip(QApplication::translate("MainWindow", "Short Term Fuel Trim is only active in closed loop. Values up to 10% are considered normal, occasionally up to 15%. Values higher than 15% are out of the ordinary. ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_45->setText(QApplication::translate("MainWindow", "error", Q_NULLPTR));
        label_52->setText(QApplication::translate("MainWindow", "advance", Q_NULLPTR));
        label_51->setText(QApplication::translate("MainWindow", "STFT", Q_NULLPTR));
        label_47->setText(QApplication::translate("MainWindow", "Closed Loop", Q_NULLPTR));
        label_53->setText(QApplication::translate("MainWindow", "Idle Switch", Q_NULLPTR));
        emission_lambda_voltage->setText(QApplication::translate("MainWindow", "lambda", Q_NULLPTR));
        m_revCounterLabel_2->setText(QApplication::translate("MainWindow", "Engine Speed", Q_NULLPTR));
        emi_rpm->setText(QApplication::translate("MainWindow", "Idle Speed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        emi_rpm->setToolTip(QApplication::translate("MainWindow", "You can adjust idle speed in steps of 50 RPM. This effects both cold and warm idle speed. '0' is MEMS default value (for a warm A+ SPi engine this is 850 RPM)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        emi_shorttermftrim->setText(QApplication::translate("MainWindow", "Fuel Trim", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        emi_shorttermftrim->setToolTip(QApplication::translate("MainWindow", "If your engine is not controlled by a lambda sensor, this is where you can regulate idle emmisions. Engine that are controlled by a lambda sensor will adjust this value over time", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        emi_idledecay->setText(QApplication::translate("MainWindow", "Hot Idle Position", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        emi_idledecay->setToolTip(QApplication::translate("MainWindow", "MEMS will adjust this value over time, so any adjustments only have effect untill MEMS has relearnt the optimal value", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        emi_ignadvance->setText(QApplication::translate("MainWindow", "Ignition Advance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        emi_ignadvance->setToolTip(QApplication::translate("MainWindow", "From the factory MEMS was supplied with different advance curves to adjust for fuel quality differences across countries (91 or 95 RON).<p>WARNING: only adjust settings if you know what you're doing, too much advance can destroy an engine!!!<p>Note: settings do not effect ignition advance at idle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lineEdit_3->setText(QApplication::translate("MainWindow", " Only for tuning purpose, rpm shows only up to 2000 RPM", Q_NULLPTR));
        m_resetECUButton->setText(QApplication::translate("MainWindow", "Reset ECU", Q_NULLPTR));
        m_resetAdjustmentsButton->setText(QApplication::translate("MainWindow", "Reset adjustments", Q_NULLPTR));
        Tab_main->setTabText(Tab_main->indexOf(emission_tab), QApplication::translate("MainWindow", "Adjustments", Q_NULLPTR));
        m_faultCodesLabel->setText(QApplication::translate("MainWindow", "Recorded errors:", Q_NULLPTR));
        m_faultCode01Label->setText(QApplication::translate("MainWindow", "01 - Coolant temp sensor", Q_NULLPTR));
        m_faultCode02Label->setText(QApplication::translate("MainWindow", "02 - Inlet Air temp sensor", Q_NULLPTR));
        m_faultCode03Label->setText(QApplication::translate("MainWindow", "03 - ", Q_NULLPTR));
        m_faultCode04Label->setText(QApplication::translate("MainWindow", "04 - High turbo inlet pressure", Q_NULLPTR));
        m_faultCode05Label->setText(QApplication::translate("MainWindow", "05 - Ambient air temp sensor", Q_NULLPTR));
        m_faultCode06Label->setText(QApplication::translate("MainWindow", "06 - Fuel temp sensor", Q_NULLPTR));
        m_faultCode07Label->setText(QApplication::translate("MainWindow", "07 - Knock detected", Q_NULLPTR));
        m_faultCode08Label->setText(QApplication::translate("MainWindow", "08 - ", Q_NULLPTR));
        m_faultCode09Label->setText(QApplication::translate("MainWindow", "09 - Temperature gauge", Q_NULLPTR));
        m_faultCode10Label->setText(QApplication::translate("MainWindow", "10 - Fuel pump circuit", Q_NULLPTR));
        m_faultCode11Label->setText(QApplication::translate("MainWindow", "11 - ", Q_NULLPTR));
        m_faultCode12Label->setText(QApplication::translate("MainWindow", "12 - A/C Clutch drive", Q_NULLPTR));
        m_faultCode13Label->setText(QApplication::translate("MainWindow", "13 - Purge valve", Q_NULLPTR));
        m_faultCode14Label->setText(QApplication::translate("MainWindow", "14 - MAP sensor", Q_NULLPTR));
        m_faultCode15Label->setText(QApplication::translate("MainWindow", "15 - Turbo boost valve", Q_NULLPTR));
        m_faultCode16Label->setText(QApplication::translate("MainWindow", "16 - TPS circuit", Q_NULLPTR));
        m_faultCode17Label->setText(QApplication::translate("MainWindow", "17 - ", Q_NULLPTR));
        m_faultCode18Label->setText(QApplication::translate("MainWindow", "18 - ", Q_NULLPTR));
        m_faultCode19Label->setText(QApplication::translate("MainWindow", "19 - ", Q_NULLPTR));
        m_faultCode20Label->setText(QApplication::translate("MainWindow", "20 - Lambda heater supply voltage", Q_NULLPTR));
        m_faultCode21Label->setText(QApplication::translate("MainWindow", "21 - Crank shaft Sync", Q_NULLPTR));
        m_faultCode22Label->setText(QApplication::translate("MainWindow", "22 - Fan 1 control", Q_NULLPTR));
        m_faultCode23Label->setText(QApplication::translate("MainWindow", "23 - Immobiliser control", Q_NULLPTR));
        m_faultCode24Label->setText(QApplication::translate("MainWindow", "24 - Fan 2 control", Q_NULLPTR));
        m_clearFaultsButton->setText(QApplication::translate("MainWindow", "Clear fault codes", Q_NULLPTR));
        m_RPMSensorLabel->setText(QApplication::translate("MainWindow", " Signal RPM and TDC sensor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_RPMSensorLabel->setToolTip(QApplication::translate("MainWindow", "Led should turn green as soon as the flywheel is turning", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_empty3->setText(QString());
        m_faultCodesLabel2->setText(QApplication::translate("MainWindow", "Live", Q_NULLPTR));
        m_faultCodesLabel3->setText(QApplication::translate("MainWindow", "Rec.", Q_NULLPTR));
        m_faultCodesLabel4->setText(QApplication::translate("MainWindow", " Anomalies:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_faultCodesLabel4->setToolTip(QApplication::translate("MainWindow", "These anomalies are either recognised by MEMS but not recorded or not recognised/acknowledged by MEMS.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_LambdaSensorLabel->setText(QApplication::translate("MainWindow", " Lambda Signal error", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_LambdaSensorLabel->setToolTip(QApplication::translate("MainWindow", "As detected by the ECU; \"Lambda Status\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_LambdaMaxLabel->setText(QApplication::translate("MainWindow", " Unusual high lambda signal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_LambdaMaxLabel->setToolTip(QApplication::translate("MainWindow", "Could be a sign the Lambda sensor is worn, or the signal wires are not properly shielded (especially against alternator or high tension ignition leads)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_LambdaMinLabel->setText(QApplication::translate("MainWindow", " Unusual low lambda signal", Q_NULLPTR));
        m_IACMinLabel->setText(QApplication::translate("MainWindow", " Idle Air Control Position bottom reached", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_IACMinLabel->setToolTip(QApplication::translate("MainWindow", "Could indicate that ECU has trouble keeping idle speed low enough. Check throttle cable adjustment and check for air leaks in the intake.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_JackCountLabel->setText(QApplication::translate("MainWindow", " Jack Count maxed out (>255 resets)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_JackCountLabel->setToolTip(QApplication::translate("MainWindow", "Can only be reset to 0 by resetting the complete ECU. Afterwards keep an eye on \"Jack Count No.\" in tab \"all data\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_clearRecordedAnomalies->setText(QApplication::translate("MainWindow", "Clear recorded anomalies", Q_NULLPTR));
        Tab_main->setTabText(Tab_main->indexOf(errors), QApplication::translate("MainWindow", "Errors", Q_NULLPTR));
        m_testActuatorLabel->setText(QApplication::translate("MainWindow", "Test actuators:", Q_NULLPTR));
        m_PTCRelay->setText(QApplication::translate("MainWindow", "Manifold Heater ", Q_NULLPTR));
        m_testPTCRelayButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_onPTCRelayButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
        m_offPTCRelayButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        m_FuelPumpRelay->setText(QApplication::translate("MainWindow", "Fuel Pump ", Q_NULLPTR));
        m_testFuelPumpRelayButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_testFuelPumpOnButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
        m_testFuelPumpOffButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        m_O2Heater->setText(QApplication::translate("MainWindow", "O2/Lambda Heater ", Q_NULLPTR));
        m_O2Heater_TestButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_O2Heater_OnButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_O2Heater_OnButton->setToolTip(QApplication::translate("MainWindow", "To prevent damage to the Lambda Sensor, the time the sensor is heated is limited. WARNING: After heating the sensor it is strongly advised to NOT start the engine untill the sensor has cooled down sufficiently", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_O2Heater_OffButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        m_Purge_Valve->setText(QApplication::translate("MainWindow", "Carbon Canister Purge Valve ", Q_NULLPTR));
        m_Purge_Valve_TestButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_Purge_Valve_OnButton->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        m_Purge_Valve_OffButton->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        m_ACRelay->setText(QApplication::translate("MainWindow", "A/C Clutch ", Q_NULLPTR));
        m_testACRelayButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_onACRelayButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
        m_offACRelayButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        m_Boost_Valve->setText(QApplication::translate("MainWindow", "Boost Valve ", Q_NULLPTR));
        m_Boost_Valve_TestButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_Boost_Valve_OnButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
        m_Boost_Valve_OffButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        m_Fan1->setText(QApplication::translate("MainWindow", "Fan 1 ", Q_NULLPTR));
        m_Fan1_TestButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_Fan1_OnButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
        m_Fan1_OffButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        m_Fan2->setText(QApplication::translate("MainWindow", "Fan 2 ", Q_NULLPTR));
        m_Fan2_TestButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_Fan2_OnButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
        m_Fan2_OffButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        m_Fan3->setText(QApplication::translate("MainWindow", "Fan 3 ", Q_NULLPTR));
        m_Fan3_TestButton->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_Fan3_OnButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
        m_Fan3_OffButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        m_FuelInjector->setText(QApplication::translate("MainWindow", "Fuel injector", Q_NULLPTR));
        m_testFuelInjectorButton->setText(QApplication::translate("MainWindow", "Fire", Q_NULLPTR));
        m_IgnitionCoil->setText(QApplication::translate("MainWindow", "Ignition coil ", Q_NULLPTR));
        m_testIgnitionCoilButton->setText(QApplication::translate("MainWindow", "Spark", Q_NULLPTR));
        m_ResetActuators->setText(QApplication::translate("MainWindow", "Reset all actuators ", Q_NULLPTR));
        m_AllActuatorsOffButton->setText(QApplication::translate("MainWindow", "all actuators OFF / Reset", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Select desired position in steps of 25% then activate &quot;Move idle air control motor&quot;</p></body></html>", Q_NULLPTR));
        m_moveIACButton->setText(QApplication::translate("MainWindow", "Move idle air control motor", Q_NULLPTR));
        m_IACMinusButton->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        m_IACPlusButton->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        m_idleBypassLabel_2->setText(QApplication::translate("MainWindow", "Idle bypass position:", Q_NULLPTR));
        m_iacPositionSteps_2->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        m_iacSliderClosedLabel->setText(QApplication::translate("MainWindow", "Closed", Q_NULLPTR));
        m_iacSliderOpenLabel->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        Tab_main->setTabText(Tab_main->indexOf(actuators), QApplication::translate("MainWindow", "Actuators", Q_NULLPTR));
        header_1->setText(QApplication::translate("MainWindow", "Pos. (7D)", Q_NULLPTR));
        header_2->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        header_3->setText(QApplication::translate("MainWindow", "Received", Q_NULLPTR));
        header_4->setText(QApplication::translate("MainWindow", "Computed", Q_NULLPTR));
        x01->setText(QApplication::translate("MainWindow", "0x01", Q_NULLPTR));
        label_0x01->setText(QApplication::translate("MainWindow", "Ignition Switch", Q_NULLPTR));
        m_7D_01->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_01->setText(QApplication::translate("MainWindow", "On / Off", Q_NULLPTR));
        x02->setText(QApplication::translate("MainWindow", "0x02", Q_NULLPTR));
        label_0x02->setText(QApplication::translate("MainWindow", "Throttle Angle", Q_NULLPTR));
        m_7D_02->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_02->setText(QApplication::translate("MainWindow", "--- \302\260", Q_NULLPTR));
        x03->setText(QApplication::translate("MainWindow", "0x03", Q_NULLPTR));
        label_0x03->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_03->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x04->setText(QApplication::translate("MainWindow", "0x04", Q_NULLPTR));
        label_0x04->setText(QApplication::translate("MainWindow", "Air Fuel Ratio", Q_NULLPTR));
        m_7D_04->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_04->setText(QApplication::translate("MainWindow", "--- AFR", Q_NULLPTR));
        x05->setText(QApplication::translate("MainWindow", "0x05", Q_NULLPTR));
        label_0x05->setText(QApplication::translate("MainWindow", "DTC 2", Q_NULLPTR));
        m_7D_05->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_05->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x06->setText(QApplication::translate("MainWindow", "0x06", Q_NULLPTR));
        label_0x06->setText(QApplication::translate("MainWindow", "Lambda Voltage", Q_NULLPTR));
        m_7D_06->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_06->setText(QApplication::translate("MainWindow", "--- mV", Q_NULLPTR));
        x07->setText(QApplication::translate("MainWindow", "0x07", Q_NULLPTR));
        label_0x07->setText(QApplication::translate("MainWindow", "Lambda Frequency", Q_NULLPTR));
        m_7D_07->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x08->setText(QApplication::translate("MainWindow", "0x08", Q_NULLPTR));
        label_0x08->setText(QApplication::translate("MainWindow", "Lambda Dutycycle", Q_NULLPTR));
        m_7D_08->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x09->setText(QApplication::translate("MainWindow", "0x09", Q_NULLPTR));
        label_0x09->setText(QApplication::translate("MainWindow", "Lambda Status", Q_NULLPTR));
        m_7D_09->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_09->setText(QApplication::translate("MainWindow", "ok / not ok", Q_NULLPTR));
        x0A->setText(QApplication::translate("MainWindow", "0x0A", Q_NULLPTR));
        label_0x0A->setText(QApplication::translate("MainWindow", "Loop Indicator", Q_NULLPTR));
        m_7D_0A->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_0A->setText(QApplication::translate("MainWindow", "Open / Closed", Q_NULLPTR));
        x0B->setText(QApplication::translate("MainWindow", "0x0B", Q_NULLPTR));
        label_0x0B->setText(QApplication::translate("MainWindow", "Long Term Fuel Trim", Q_NULLPTR));
        m_7D_0B->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_0B->setText(QApplication::translate("MainWindow", "--- %", Q_NULLPTR));
        x0C->setText(QApplication::translate("MainWindow", "0x0C", Q_NULLPTR));
        label_0x0C->setText(QApplication::translate("MainWindow", "Short Term Fuel Trim", Q_NULLPTR));
        m_7D_0C->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_0C->setText(QApplication::translate("MainWindow", "--- %", Q_NULLPTR));
        x0D->setText(QApplication::translate("MainWindow", "0x0D", Q_NULLPTR));
        label_0x0D->setText(QApplication::translate("MainWindow", "Carbon Canister Purge Valve", Q_NULLPTR));
        m_7D_0D->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_0D->setText(QApplication::translate("MainWindow", "--- %", Q_NULLPTR));
        x0E->setText(QApplication::translate("MainWindow", "0x0E", Q_NULLPTR));
        label_0x0E->setText(QApplication::translate("MainWindow", "DTC 3", Q_NULLPTR));
        m_7D_0E->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_0E->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x0F->setText(QApplication::translate("MainWindow", "0x0F", Q_NULLPTR));
        label_0x0F->setText(QApplication::translate("MainWindow", "Idle Base Position", Q_NULLPTR));
        m_7D_0F->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_0F->setText(QString());
        x10->setText(QApplication::translate("MainWindow", "0x10", Q_NULLPTR));
        label_0x10->setText(QApplication::translate("MainWindow", "Unknown / DTC?", Q_NULLPTR));
        m_7D_10->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_10->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x11->setText(QApplication::translate("MainWindow", "0x11", Q_NULLPTR));
        label_0x11->setText(QApplication::translate("MainWindow", "DTC 4", Q_NULLPTR));
        m_7D_11->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_11->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x12->setText(QApplication::translate("MainWindow", "0x12", Q_NULLPTR));
        label_0x12->setText(QApplication::translate("MainWindow", "Ignition Advance Offset", Q_NULLPTR));
        m_7D_12->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_12->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x13->setText(QApplication::translate("MainWindow", "0x13", Q_NULLPTR));
        label_0x13->setText(QApplication::translate("MainWindow", "Idle Speed Offset", Q_NULLPTR));
        m_7D_13->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_13->setText(QApplication::translate("MainWindow", "--- RPM", Q_NULLPTR));
        x15->setText(QApplication::translate("MainWindow", "0x14-15", Q_NULLPTR));
        label_0x15->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_15->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x16->setText(QApplication::translate("MainWindow", "0x16", Q_NULLPTR));
        label_0x16->setText(QApplication::translate("MainWindow", "DTC 5", Q_NULLPTR));
        m_7D_16->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_7D_16->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x17->setText(QApplication::translate("MainWindow", "0x17", Q_NULLPTR));
        label_0x17->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_17->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x18->setText(QApplication::translate("MainWindow", "0x18", Q_NULLPTR));
        label_0x18->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_18->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x19->setText(QApplication::translate("MainWindow", "0x19", Q_NULLPTR));
        label_0x19->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_19->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x1A->setText(QApplication::translate("MainWindow", "0x1A", Q_NULLPTR));
        label_0x1A->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_1A->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x1B->setText(QApplication::translate("MainWindow", "0x1B", Q_NULLPTR));
        label_0x1B->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_1B->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x1C->setText(QApplication::translate("MainWindow", "0x1C", Q_NULLPTR));
        label_0x1C->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_1C->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x1D->setText(QApplication::translate("MainWindow", "0x1D", Q_NULLPTR));
        label_0x1D->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_1D->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x1E->setText(QApplication::translate("MainWindow", "0x1E", Q_NULLPTR));
        label_0x1E->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_7D_1E->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        x1F->setText(QApplication::translate("MainWindow", "0x1F", Q_NULLPTR));
        label_0x1F->setText(QApplication::translate("MainWindow", "Jack Count No.", Q_NULLPTR));
        m_7D_1F->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        header_5->setText(QApplication::translate("MainWindow", "Pos. (80)", Q_NULLPTR));
        header_6->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        header_7->setText(QApplication::translate("MainWindow", "Received", Q_NULLPTR));
        header_8->setText(QApplication::translate("MainWindow", "Computed", Q_NULLPTR));
        Ax01->setText(QApplication::translate("MainWindow", "0x01-02", Q_NULLPTR));
        label_80x01->setText(QApplication::translate("MainWindow", "RPM", Q_NULLPTR));
        m_80_01->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_01->setText(QApplication::translate("MainWindow", "--- V", Q_NULLPTR));
        Ax03->setText(QApplication::translate("MainWindow", "0x03", Q_NULLPTR));
        label_80x03->setText(QApplication::translate("MainWindow", "Coolant Temperature", Q_NULLPTR));
        m_80_03->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_03->setText(QApplication::translate("MainWindow", "--- \302\260C", Q_NULLPTR));
        Ax04->setText(QApplication::translate("MainWindow", "0x04", Q_NULLPTR));
        label_80x04->setText(QApplication::translate("MainWindow", "Ambient Temperature", Q_NULLPTR));
        m_80_04->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_04->setText(QApplication::translate("MainWindow", "--- \302\260C", Q_NULLPTR));
        Ax05->setText(QApplication::translate("MainWindow", "0x05", Q_NULLPTR));
        label_80x05->setText(QApplication::translate("MainWindow", "Intake Air Temperature", Q_NULLPTR));
        m_80_05->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_05->setText(QApplication::translate("MainWindow", "--- \302\260C", Q_NULLPTR));
        Ax06->setText(QApplication::translate("MainWindow", "0x06", Q_NULLPTR));
        label_80x06->setText(QApplication::translate("MainWindow", "Fuel Temperature", Q_NULLPTR));
        m_80_06->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_06->setText(QApplication::translate("MainWindow", "--- \302\260C", Q_NULLPTR));
        Ax07->setText(QApplication::translate("MainWindow", "0x07", Q_NULLPTR));
        label_80x07->setText(QApplication::translate("MainWindow", "Manifold Air Pressure", Q_NULLPTR));
        m_80_07->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_07->setText(QApplication::translate("MainWindow", "--- kPa", Q_NULLPTR));
        Ax08->setText(QApplication::translate("MainWindow", "0x08", Q_NULLPTR));
        label_80x08->setText(QApplication::translate("MainWindow", "Battery Voltage", Q_NULLPTR));
        m_80_08->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_08->setText(QApplication::translate("MainWindow", "--- V", Q_NULLPTR));
        Ax09->setText(QApplication::translate("MainWindow", "0x09", Q_NULLPTR));
        label_80x09->setText(QApplication::translate("MainWindow", "Throttle Pot Sensor", Q_NULLPTR));
        m_80_09->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_09->setText(QApplication::translate("MainWindow", "--- V", Q_NULLPTR));
        Ax0A->setText(QApplication::translate("MainWindow", "0x0A", Q_NULLPTR));
        label_80x0A->setText(QApplication::translate("MainWindow", "Idle Switch", Q_NULLPTR));
        m_80_0A->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_0A->setText(QApplication::translate("MainWindow", "On / Off", Q_NULLPTR));
        Ax0B->setText(QApplication::translate("MainWindow", "0x0B", Q_NULLPTR));
        label_80x0B->setText(QApplication::translate("MainWindow", "Airco Switch", Q_NULLPTR));
        m_80_0B->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_0B->setText(QApplication::translate("MainWindow", "On / Off", Q_NULLPTR));
        Ax0C->setText(QApplication::translate("MainWindow", "0x0C", Q_NULLPTR));
        label_80x0C->setText(QApplication::translate("MainWindow", "Neutral Switch", Q_NULLPTR));
        m_80_0C->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_0C->setText(QApplication::translate("MainWindow", "On / Off", Q_NULLPTR));
        Ax0D->setText(QApplication::translate("MainWindow", "0x0D", Q_NULLPTR));
        label_80x0D->setText(QApplication::translate("MainWindow", "DTC 0", Q_NULLPTR));
        m_80_0D->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_0D->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        Ax0E->setText(QApplication::translate("MainWindow", "0x0E", Q_NULLPTR));
        label_80x0E->setText(QApplication::translate("MainWindow", "DTC 1", Q_NULLPTR));
        m_80_0E->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_0E->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        Ax0F->setText(QApplication::translate("MainWindow", "0x0F", Q_NULLPTR));
        label_80x0F->setText(QApplication::translate("MainWindow", "Idle Set Point", Q_NULLPTR));
        m_80_0F->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        Ax10->setText(QApplication::translate("MainWindow", "0x10", Q_NULLPTR));
        label_80x10->setText(QApplication::translate("MainWindow", "Idle Hot / Idle Decay", Q_NULLPTR));
        m_80_10->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_10->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        Ax11->setText(QApplication::translate("MainWindow", "0x11", Q_NULLPTR));
        label_80x11->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_80_11->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        Ax12->setText(QApplication::translate("MainWindow", "0x12", Q_NULLPTR));
        label_80x12->setText(QApplication::translate("MainWindow", "Idle Air Control Motor Position", Q_NULLPTR));
        m_80_12->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_12->setText(QApplication::translate("MainWindow", "--- %", Q_NULLPTR));
        Ax13->setText(QApplication::translate("MainWindow", "0x13-14", Q_NULLPTR));
        label_80x13->setText(QApplication::translate("MainWindow", "Idle Speed Deviation", Q_NULLPTR));
        m_80_13->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_13->setText(QApplication::translate("MainWindow", "--- RPM", Q_NULLPTR));
        Ax15->setText(QApplication::translate("MainWindow", "0x15", Q_NULLPTR));
        label_80x15->setText(QApplication::translate("MainWindow", "Ignition Advance Offset", Q_NULLPTR));
        m_80_15->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        Ax16->setText(QApplication::translate("MainWindow", "0x16", Q_NULLPTR));
        label_80x16->setText(QApplication::translate("MainWindow", "Ignition Advance", Q_NULLPTR));
        m_80_16->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_16->setText(QApplication::translate("MainWindow", "--- \302\260", Q_NULLPTR));
        Ax17->setText(QApplication::translate("MainWindow", "0x17-18", Q_NULLPTR));
        label_80x17->setText(QApplication::translate("MainWindow", "Coil Time", Q_NULLPTR));
        m_80_17->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_17->setText(QApplication::translate("MainWindow", "--- ms", Q_NULLPTR));
        Ax19->setText(QApplication::translate("MainWindow", "0x19", Q_NULLPTR));
        label_80x19->setText(QApplication::translate("MainWindow", "Crankshaft Position Sensor", Q_NULLPTR));
        m_80_19->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        r_80_19->setText(QApplication::translate("MainWindow", "signal yes/no", Q_NULLPTR));
        Ax1A->setText(QApplication::translate("MainWindow", "0x1A", Q_NULLPTR));
        label_80x1A->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_80_1A->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        Ax1B->setText(QApplication::translate("MainWindow", "0x1B", Q_NULLPTR));
        label_80x1B->setText(QApplication::translate("MainWindow", "Unknown", Q_NULLPTR));
        m_80_1B->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        Tab_main->setTabText(Tab_main->indexOf(raw), QApplication::translate("MainWindow", "All Data", Q_NULLPTR));
        m_connectButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        m_disconnectButton->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        m_ecuIdLabel->setText(QApplication::translate("MainWindow", "ECU ID:", Q_NULLPTR));
        m_communicationsStatusLabel->setText(QApplication::translate("MainWindow", "Communications:", Q_NULLPTR));
        m_engineerrorLabel->setText(QApplication::translate("MainWindow", "ECU Errors:", Q_NULLPTR));
        m_fileMenu->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        m_optionsMenu->setTitle(QApplication::translate("MainWindow", "&Options", Q_NULLPTR));
        m_helpMenu->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
