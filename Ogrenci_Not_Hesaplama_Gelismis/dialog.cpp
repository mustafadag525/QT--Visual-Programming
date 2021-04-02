#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
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


void Dialog::on_btnHesapla_clicked()
{
    QString ad,bolum,vize_not,final_not,durum;

    ad=ui->edtAd->text();
    bolum=ui->edtBolum->text();
    vize_not=ui->edtVize->text();
    final_not=ui->edtFinal->text();

    if(ad=="" || bolum=="" || vize_not=="" || final_not=="")
    {
        ui->txtDurum->setText("lütfen bilgileri kontrol ediniz");
        QMessageBox::information(this,"uyarı","lütfen bilgileri tam giriniz","tamam");


    }


    double vn,fn,gecme_notu;
    vn=vize_not.toDouble();
    fn=final_not.toDouble();
    gecme_notu=(vn*0.4)+(fn*0.6);

    if(gecme_notu>=60)
    {
        ui->txtDurum->setText("geçtiniz");
        ui->edtDurum->text()="tebrikler";
    }
    else

    {
        ui->txtDurum->setText("kaldınız");
        ui->edtDurum->text()="malasef";
    }




}
