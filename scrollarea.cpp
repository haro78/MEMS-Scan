#include <qapplication.h>
#include <Qlistview.h>
int main (int argc,char*argv[])
{qApplication a (argc,argv);
          QListView* listview = new QListView();
 listview->addColumn("Device");
 listview->addColumn("output");
 QlistviewItem* throttle_angel = new QlistViewItem(listview, "throttle_angle");
  QlistviewItem* air_fuel_ratio = new QlistViewItem(listview, "air_fuel_ratio");
  QlistviewItem* item= newQListViewItem(QLednumber)  ;
  QlistviewItem* item= newQListViewItem(QLednumber)  ;
 listview->resize(400,300);
 listview->show();
 a.setMainwidget(listview);
 return a.exec();


          }
