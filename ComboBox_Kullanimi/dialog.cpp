#include "dialog.h"
#include "ui_dialog.h"
#include "QMessageBox"
#include "QString"
#include "QtDebug"


#include "QSettings"  // setting ve variant kayıt defteri için kullanılrı
#include "QVariant"


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



void Dialog::yukle()
{
    QSettings settings("key değeri (ornek : mdsoftware)","value değerini yazarız(1.dosya)");
    QVariant value=setting.value("ayarla","0");


}




void Dialog::on_cmbRenk_currentIndexChanged(const QString &arg1) // qstring alma nedeni combox içindeki yazıları seçmek için , int da isee reng vardır;
{
    QString yazi=" seçtiğiniz renk: ......"+arg1;
    ui->lblRenk->setText(yazi);
    this->setStyleSheet("background-color:"+arg1);

}

void Dialog::on_btnHatrla_clicked()
{
    //kayıt defteri oluşturma hatırlatma;

    QSettings settings("key değeri (ornek : mdsoftware)","value değerini yazarız(1.dosya)");
    settings.setValue("ayarlar",ui->cmbRenk->currentIndex());
    QMessageBox::information(this,"bilgi","bilgi");




}
