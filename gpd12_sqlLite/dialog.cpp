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


void Dialog::on_btnBaglan_clicked()
{
    sqlitedb.setDatabaseName("C:/gorselProg/ders_sql/myDBders.db");
    if (!sqlitedb.open())
    {
        QMessageBox::information(this,"Hata","Baglantı saglanamadı");
    }
    else
    {
        QMessageBox::information(this,"Durum","Baglantı BASARILI");
    }
}

void Dialog::on_btnEkle_clicked()
{
    if (!sqlitedb.open())
    {
        QMessageBox::information(this,"Hata","Once Veritabanına bağlanınız!!!");
    }
    else
    {
        // SQL sorgu cümlesi çalıştıracağız
        QSqlQuery qry;
        qry.prepare("INSERT INTO uye values (?,?)");
        qry.addBindValue(ui->edtAd->text());
        qry.addBindValue(ui->edtSoyad->text());
        if (qry.exec())
            QMessageBox::information(this,"durum","EKLEDİ");
        else
        {
           qDebug() << qry.lastError();
        }
    }
}

void Dialog::on_btnList_clicked()
{
    QSqlQuery sorgu;
    model=new QSqlQueryModel();
    if (sorgu.exec("Select * from uye"))
    {
        model->setQuery(sorgu);
        ui->tableView->setModel(model);

    }
    else
        qDebug() << sorgu.lastError();
}
