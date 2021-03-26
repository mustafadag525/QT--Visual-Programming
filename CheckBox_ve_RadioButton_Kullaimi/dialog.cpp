#include "dialog.h"
#include "ui_dialog.h"
#include <QObjectList> // listele kımında nesne tutabilmek için;

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


void Dialog::on_btnTemizle_clicked()
{
    QList <QString> my_list;

    my_list<<"kitap"<<"defter"<<"kalem";

    foreach (QString my_str, my_list) {

        qDebug()<<my_str;

    }

reject();// kapatmak için

}

void Dialog::on_btnListele_clicked()
{
    QString secimler;
    QObjectList boxes=this->children();

    foreach(QObject* obj,boxes)
    {
        if(obj->inherits("QCheckBox")){
            QCheckBox*box_ptr=qobject_cast<QCheckBox*>(obj);
                    if(box_ptr->isChecked()) secimler+=box_ptr->text()+"\r\n";
        }
    }
    ui->plainTextEdit->appendPlainText(secimler);
}





