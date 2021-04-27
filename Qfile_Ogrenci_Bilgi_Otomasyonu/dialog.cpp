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


void Dialog::on_btnhesapla_clicked()
{
    double gecme_notu;

    gecme_notu=ui->edVize->text().toDouble()*0.4+ui->edFinal->text().toDouble()*0.6;

    if(gecme_notu>=60)
    {
        ui->lst_gecenler->addItem(ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu));
        QFile my_file("gecenler.txt");
        if(!my_file.open(QIODevice::WriteOnly))
        {
            QMessageBox::information(this,"uyarı",my_file.errorString(),"tamam");
            return;
        }

        QTextStream stream(&my_file);
        stream<<ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu);
        my_file.close();

    }
    else
    {
        ui->lst_kalanlar->addItem(ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu));
        QFile my_file("kalanlar.txt");
        if(!my_file.open(QIODevice::WriteOnly))
        {
            QMessageBox::information(this,"uyarı",my_file.errorString(),"tamam");
            return;
        }

        QTextStream stream(&my_file);
        stream<<ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu);
        my_file.close();

    }
}
