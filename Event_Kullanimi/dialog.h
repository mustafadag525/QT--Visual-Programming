#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "dialog2.h"
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
    void on_btnps_clicked();

    void on_btn_nops_clicked();

    void on_btn_pe_clicked();

    void on_btn_nope_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
