#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QMessageBox>
#include "server.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:


    void on_btnStart_clicked();
    void on_btnStop_clicked();
    void next();
    void back();
    void changed();




private:
    Ui::Dialog *ui;
    QPushButton *btnNext;
    QPushButton *btnBack;
    Server server;

    void init();
    void enableButtons();

};
#endif // DIALOG_H
