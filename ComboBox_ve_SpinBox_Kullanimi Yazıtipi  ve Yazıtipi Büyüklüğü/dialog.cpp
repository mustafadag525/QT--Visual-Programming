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


void Dialog::on_btnUygula_clicked()
{
    ui->lblGoster->setEnabled(true);

    QString yazitipi,renk,yazi;
    yazitipi=ui->fontYaziTipi->currentText();
   int size=ui->spinBox_yaztipi->value();
    renk=ui->comboBox_renk->currentText();
    yazi=ui->edtYaz->text();

    ui->lblGoster->setText(yazi);
    //stil ayarlamaları


    QFont my_font(yazitipi,size);
    if(ui->ch_bold->isChecked())
    {
        my_font.setBold(true);  // qfont yazitipi ni seçer
    }

    if(ui->ch_italik->isChecked())
    {
        my_font.setItalic(true);
    }



    QPalette  my_color;                           // yazı rengi için
    my_color.setColor(QPalette::WindowText,ui->comboBox_renk->currentText());
    ui->lblGoster->setFont(my_font);
    ui->lblGoster->setPalette(my_color);


}
