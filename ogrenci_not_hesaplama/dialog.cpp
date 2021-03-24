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


void Dialog::on_btnHesapla_clicked()
{
    QString ad,dersad,vize_not,final_not;

    ad=ui->edtAd->text();
    dersad=ui->edtDers_2->text();
    vize_not=ui->edtVize->text();
    final_not=ui->edtFinal->text();


    if(ad=="" || dersad=="" || vize_not==""|| final_not=="")
    {

        ui->txt_sonuc->setText("eksik bilgi, lütfen düzeltiniz");
        QMessageBox::warning(this,"uyarı","lütfen seçimlerinizi tam giriniz","tamam");
    }

    if(ad==" " || dersad==" " || vize_not==" "|| final_not==" ")
    {

        ui->txt_sonuc->setText("eksik bilgi, lütfen düzeltiniz");
        QMessageBox::warning(this,"uyarı","lütfen seçimlerinizi tam giriniz","tamam");
    }



    int vn,fn,gecme_notu;
    vn=vize_not.toInt();
    fn=final_not.toInt();
    gecme_notu=(vn*0.4)+(fn*0.6);


    if(gecme_notu>=60)
    {
        ui->txt_sonuc->setText(ad+" isimli öğrenci "+dersad+" isimli dersten geçmiştir");

    }
    else
    {
        ui->txt_sonuc->setText(ad+" isimli öğrenci "+dersad+" isimli dersten kalmıştır");
    }


}
