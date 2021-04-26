#include "dialog.h"
#include "ui_dialog.h"
#include <QFile>
#include <QTextStream>

#include <QPushButton>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPushButton *btnAccept=new QPushButton(QIcon(":dialog/resimler/Delete-2-icon.png"),"Accept",this);

    // 2.yol
    QPushButton *btnReject=new QPushButton("Reject",this);
    btnReject->setIcon(QIcon("dialog/resimler/Alarm-Tick-icon.png"));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnYeni_clicked()
{

    ui->txtmetin->clear();

}

void Dialog::on_btnOku_clicked()
{
oku();
}

void Dialog::on_btnKaydet_clicked()
{
    kaydet();

}

bool Dialog::kaydet()
{

    QFile my_file("file.txt"); // yeni dosya oluşturukdu;
    if(!my_file.open(QIODevice::WriteOnly))     //QIODevice yazı yazılabiliyormu bu dosyaya
    {
        QMessageBox::critical(this,"HATA",my_file.errorString());


    }
    QTextStream stream(&my_file);
    stream<<ui->txtmetin->toPlainText();
    my_file.close();
    m_saved=true;
    QMessageBox::information(this,"bilgi","mtein kaydedildi","tamam");


}

bool Dialog::oku()
{
    QFile my_file("file.txt");
    if(!my_file.exists())     //exists dosya mevcu mu yani var mı

    {

    }

    if(my_file.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(this,"HATA",my_file.errorString());
    }

    QTextStream stream(&my_file);
    ui->txtmetin->setPlainText(stream.readAll());
    my_file.close();

}

void Dialog::on_txtmetin_textChanged()
{
    // textte bir şeyler yazıldı mı burdan kontrol edeceğiz
    m_saved=false;

}

void Dialog::closeEvent(QCloseEvent *event)
{

    if (!m_saved) {
        QMessageBox::StandardButton btn=QMessageBox::question(this,"Kayıt Edilsin mi?","Metin Kutusunun icerigi değişmiştir. Kaydetmek ister misiniz?");
        if (btn==QMessageBox::StandardButton::Yes)
            kaydet();
    }
    event->accept();

}


