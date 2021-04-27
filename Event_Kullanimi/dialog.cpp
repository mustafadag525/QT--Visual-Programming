#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnps_clicked()
{
// parents sınıf kullanılarak
    Dialog2 *dialog=new Dialog2(this);
    dialog->show();
}

void Dialog::on_btn_nops_clicked()
{
    // parent sınıf kullanmadan
    Dialog2 *dialog=new Dialog2(); // pencere kapanmaz
    dialog->show();
}

void Dialog::on_btn_pe_clicked()
{// parents sınıf kullanılarak
    Dialog2 *dialog=new Dialog2(this);
    dialog->exec();

}

void Dialog::on_btn_nope_clicked()
{
    // parent sınıf kullanmadan
    Dialog2 *dialog=new Dialog2(); // pencere kapanmaz
    dialog->exec();  // ecet showdan farkı ana ekran gibi gösterir. arkadaki sayfaya ulaşılamaz
}
