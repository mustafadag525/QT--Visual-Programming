#include "resimsec.h"
#include "ui_resimsec.h"

resimsec::resimsec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resimsec)
{
    ui->setupUi(this);
    init();
}

resimsec::~resimsec()
{
    delete ui;
}

void resimsec::on_buttonBox_accepted()
{
    accept();
}

void resimsec::on_buttonBox_rejected()
{
    reject();
}

void resimsec::init()
{
    QDir root=QDir("/file/resimler");
    QFileInfoList list=root.entryInfoList();
    foreach(QFileInfo fi,list)
    {
        QListWidgetItem *itm=QListWidgetItem(ui->listWidget);
        itm->setText(fi.absoluteFilePath());
        itm->setIcon(QIcon(fi.absoluteFilePath()));
        ui->listWidget->addItem();
    }
}
