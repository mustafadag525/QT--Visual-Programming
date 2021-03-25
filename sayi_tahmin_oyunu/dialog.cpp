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


int sayi;
QString birinci_aralık,ikinci_aralık;
int b_aralik,i_aralik;

void Dialog::on_btnSayiuret_clicked()
{
    srand(time(0));
    birinci_aralık=ui->edtbirinciaralik->text();
    ikinci_aralık=ui->edtikinciaralik->text();
    b_aralik=birinci_aralık.toInt();
    i_aralik=ikinci_aralık.toInt();
    sayi=rand()%(i_aralik-b_aralik)+b_aralik;
    QDebug << sayi;

}
int ds=0;
void Dialog::on_btnTahmin_clicked()
{


    ui->btnTahmin->setAutoDefault(true);
    int tahmin=rand()%(i_aralik-b_aralik)+b_aralik;
    ds++;
    QString string=QString::number(ds);
    if(sayi!=tahmin)
    {
        ui->txtSonuc->setText("doğru tahmin edilmedi. deneme sayısı: "+string);
    }
    else

    {
        ui->txtSonuc->setText("tebrikler doğru tahmin edildi. deneme sayısı: "+string);
        ui->btnTahmin->setVisible(false);
    }





}
