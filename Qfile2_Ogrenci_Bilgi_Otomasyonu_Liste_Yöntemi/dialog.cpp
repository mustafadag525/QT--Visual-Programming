#include "dialog.h"
#include "ui_dialog.h"
#include "ogrenci.cpp"

QList<ogrenci*> ogrler;



Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}


Dialog::~Dialog()
{
    delete ui;


















    // uygulama açıldığında kalan veya geçen varsa liswidgetslere yazılsın;

   /* QFile my_file("gecenler.txt");
    if(!my_file.exists())
    {
        QMessageBox::information(this,"uyarı","böyle bir dosya bulunmamaktadır","tamam");
        return;
    }

   else if(!my_file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this,"uyarı",my_file.errorString(),"tamam");
        return;
    }
    QTextStream stream(&my_file);
     // dosyayı okumak için
    while (!stream.atEnd()) {
        ui->lst_gecenler->addItem(stream.readLine()); // satır satır okuma
    }
    my_file.close();


    QFile my_file2("kalanlar.txt");
    if(!my_file2.exists())
    {
        QMessageBox::information(this,"uyarı","böyle bir dosya bulunmamaktadır","tamam");
        return;
    }

   else if(!my_file2.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this,"uyarı",my_file2.errorString(),"tamam");
        return;
    }
    QTextStream stream2(&my_file2);
     // dosyayı okumak için
    while (!stream2.atEnd()) {
        ui->lst_gecenler->addItem(stream2.readLine()); // satır satır okuma
    }
    my_file2.close();
    */
}


void Dialog::on_btnhesapla_clicked()
{

    ogrenci *ogr=new ogrenci(ui->edAd->text(),ui->edSoyad->text(),ui->edVize->text().toInt(),ui->edFinal->text().toInt());
    ogrler.append(ogr);
    double gecme_notu=ogr->gecme_not_hesapla(ogr->vize_notu,ogr.final_not)

            if(gecme_notu>=60)
            {
                ui->lst_gecenler->addItem(ogr->ad+ogr->soyad+""+" geçme notu: "+QString::number(gecme_notu));
                QFile my_file("gecenler.txt");
                if(!my_file.open(QIODevice::WriteOnly | QIODevice::Append))   // appened sonradan bir kişi eklerken baştaki kişi silinmesin diye
                {
                    QMessageBox::information(this,"uyarı",my_file.errorString(),"tamam");
                    return;
                }

                QTextStream stream(&my_file);
                stream<<ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu)+"\n";
                my_file.close();

            }
            else
            {
                ui->lst_kalanlar->addItem(ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu));
                QFile my_file("kalanlar.txt");
                if(!my_file.open(QIODevice::WriteOnly | QIODevice::Append))
                {
                    QMessageBox::information(this,"uyarı",my_file.errorString(),"tamam")+"\n";
                    return;
                }

                QTextStream stream(&my_file);
                stream<<ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu);
                my_file.close();

            }

   /* double gecme_notu;

    gecme_notu=ui->edVize->text().toDouble()*0.4+ui->edFinal->text().toDouble()*0.6;

    if(gecme_notu>=60)
    {
        ui->lst_gecenler->addItem(ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu));
        QFile my_file("gecenler.txt");
        if(!my_file.open(QIODevice::WriteOnly | QIODevice::Append))   // appened sonradan bir kişi eklerken baştaki kişi silinmesin diye
        {
            QMessageBox::information(this,"uyarı",my_file.errorString(),"tamam");
            return;
        }

        QTextStream stream(&my_file);
        stream<<ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu)+"\n";
        my_file.close();

    }
    else
    {
        ui->lst_kalanlar->addItem(ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu));
        QFile my_file("kalanlar.txt");
        if(!my_file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
            QMessageBox::information(this,"uyarı",my_file.errorString(),"tamam")+"\n";
            return;
        }

        QTextStream stream(&my_file);
        stream<<ui->edAd->text()+ui->edSoyad->text()+""+" geçme notu: "+QString::number(gecme_notu);
        my_file.close();

    }
    */
}
