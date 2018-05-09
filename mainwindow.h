#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QThread>
#include <QHash>
#include <QPair>
#include <QTimer>
#include <analogwidgets/manometer.h>
#include <analogwidgets/manometer100.h>
#include <analogwidgets/manometer900.h>
#include <qledindicator/qledindicator.h>
#include "optionsdialog.h"
#include "memsinterface.h"
#include "aboutbox.h"
#include "logger.h"
#include "commonunits.h"
#include "helpviewer.h"
#include <qapplication.h>
#include <qwidget.h>
#include <qlayout.h>
#include <qobject.h>

#include <iostream>

#include <QTreeWidget>
namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{    
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
	void onDataReady();
    void onConnect();
    void onDisconnect();
    void onReadError();
    void onReadSuccess();
    void onFailedToConnect(QString dev);
    void onInterfaceThreadReady();
    void onNotConnected();
    void onEcuIdReceived(uint8_t* id);
	void LambdaMaxOnce();
	void LambdaMinOnce();
	void IACMinOnce();
	void clearRecordedAnomalies();
    void onFuelPumpTestComplete();
	void onO2HeaterTestComplete();
	void onBoostValveTestComplete();
	void onPurgeValveTestComplete();
    void onACRelayTestComplete();
    void onPTCRelayTestComplete();
	void onFan1TestComplete();
	void onFan2TestComplete();
	void onFan3TestComplete();
    void onMoveIACComplete();
    void onCommandError();
    void onFaultCodeClearComplete();
	void onAdjustmentsResetComplete();
	void onECUResetComplete();
	void onConfirmResetECU();
	void onConfirmResetAdjustments();
signals:
	void requestToStartPolling();
    void requestThreadShutdown();
	void ResetAdjustmentsRequested();
	void ResetECURequested();
    void fuelPumpTest();
	void fuelPumpOn();
	void fuelPumpOff();
    void ptcRelayTest();
	void ptcRelayOn();
	void ptcRelayOff();
    void acRelayTest();
	void acRelayOn();
	void acRelayOff();
    void injectorTest();
    void coilTest();
    void moveIAC(int desiredPos);
    void fuel_trim_plus();
    void fuel_trim_minus();
    void idle_decay_plus();
    void idle_decay_minus();
    void idle_speed_plus();
    void idle_speed_minus();
    void ignition_advance_plus();
    void ignition_advance_minus();
	void Purge_Valve_Test();
    void Purge_Valve_On();
	void Purge_Valve_Off();
	void O2Heater_Test();
    void O2Heater_On();
    void O2Heater_Off();
	void Boost_Valve_Test();
    void Boost_Valve_On();
	void Boost_Valve_Off();
	void Fan1_Test();
    void Fan2_Test();
	void Fan3_Test();
    void Fan1_On();
    void Fan2_On();
	void Fan3_On();
	void Fan1_Off();
    void Fan2_Off();
	void Fan3_Off();
	void OpenIAC();
	void CloseIAC();
	void AllActuators_Off();
    void interactive_mode();
	
protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *m_ui;
    QThread *m_memsThread;
    MEMSInterface *m_mems;
    OptionsDialog *m_options;
    AboutBox *m_aboutBox;
    QMessageBox *m_pleaseWaitBox;
    HelpViewer *m_helpViewerDialog;


    Logger *m_logger;

    const float mapGaugeMaxPsi = 16.0;  // vorher static
    const float mapGaugeMaxKPa = 160.0; // vorher static

    bool m_actuatorTestsEnabled;
	bool m_actuatorsOffEnabled;
	bool m_adjustmentsEnabled;

    QHash<TemperatureUnits,QString> *m_tempUnitSuffix;
    QHash<TemperatureUnits,QPair<int,int> > *m_tempRange;
    QHash<TemperatureUnits,QPair<int,int> > *m_tempLimits;
    QHash<TemperatureUnits,QPair<int,int> > *m_airtempRange;
    QHash<TemperatureUnits,QPair<int,int> > *m_airtempLimits;

    void buildSpeedAndTempUnitTables();
    void setupWidgets();
    int convertTemperature(int tempF);
	int convertLambda(int scaleMems);
    void addTreeRoot(QString name, QString description);
    void addTreeChild(QTreeWidgetItem *parent,
         QString name, QString description);
private slots:
    void onExitSelected();
    void onEditOptionsClicked();
    void onHelpContentsClicked();
    void onHelpAboutClicked();
    void onConnectClicked();
    void onDisconnectClicked();
    void onStartLogging();
    void onStopLogging();
    void onMoveIACClicked();
    void onTestFuelPumpRelayClicked();
	void onTestFuelPumpOnClicked();
	void onTestFuelPumpOffClicked();
    void onTestACRelayClicked();
	void onOnACRelayClicked();
	void onOffACRelayClicked();
    void onTestPTCRelayClicked();
	void onOnPTCRelayClicked();
	void onOffPTCRelayClicked();
    void setActuatorTestsEnabled(bool enabled);
	void setActuatorsOffEnabled(bool enables);
	void setAdjustmentsEnabled(bool enabled);
    void on_m_fuel_trim_plusButton_clicked();
    void on_m_fuel_trim_minusButton_clicked();
    void on_m_idle_decay_plusButton_clicked();
    void on_m_idle_decay_minusButton_clicked();
    void on_m_idle_speed_plusButton_clicked();
    void on_m_idle_speed_minusButton_clicked();
    void on_exitButton_clicked();
    void on_m_ignition_advance_plusButton_clicked();
    void on_m_ignition_advance_minusButton_clicked();
    void on_m_idle_air_plusButton_clicked();
    void on_m_idle_air_minusButton_clicked();
    void on_interactive_push_button_clicked();
	void on_m_Purge_Valve_TestButton_clicked();
    void on_m_Purge_Valve_OnButton_clicked();
	void on_m_Purge_Valve_OffButton_clicked();
	void on_m_O2Heater_TestButton_clicked();
    void on_m_O2Heater_OnButton_clicked();
    void on_m_O2Heater_OffButton_clicked();
	void on_m_Boost_Valve_TestButton_clicked();
    void on_m_Boost_Valve_OnButton_clicked();
	void on_m_Boost_Valve_OffButton_clicked();
	void on_m_Fan1_TestButton_clicked();
	void on_m_Fan2_TestButton_clicked();
	void on_m_Fan3_TestButton_clicked();
    void on_m_Fan1_OnButton_clicked();
    void on_m_Fan2_OnButton_clicked();
	void on_m_Fan3_OnButton_clicked();
	void on_m_Fan1_OffButton_clicked();
    void on_m_Fan2_OffButton_clicked();
	void on_m_Fan3_OffButton_clicked();
	void on_m_IACMinusButton_clicked();
	void on_m_IACPlusButton_clicked();
	void on_m_AllActuatorsOffButton_clicked();
};
class MainWidget : public QWidget
{

    Q_OBJECT

public:

    MainWidget(QWidget *parent = 0, const char *name = 0);

};

#endif // MAINWINDOW_H
