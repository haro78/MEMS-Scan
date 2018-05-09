#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>
#include <QTreeWidget>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

    void addTreeRoot(QString name, QString description);
    void addTreeChild(QTreeWidgetItem *parent,
                      QString name, QString description);
};

#endif // DIALOG_H
