#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *zamanlayici = new QTimer(this);
    connect(zamanlayici,SIGNAL(timeout()),this,SLOT(degistir()));
    zamanlayici->start(500);


/*    QTimer *zamanlayici = new QTimer(this);
    connect(zamanlayici,SIGNAL(timeout()),this,SLOT(degistir()));
    zamanlayici->start(500);
    etiket *etiketim = new etiket(this);
    etiket *etiketim2 = new etiket(this);*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{

    yeniButon *buton = new yeniButon(this);

    buton->setGeometry(event->x(),event->y(),100,50);

    buton->show();
    butonlar.push_back(buton);
    buton->setText(QString::number((butonlar.size())));
     /*   buton->setGeometry(event->x()-25,event->y()-25,100,50);
    buton->show();
    butonlar.push_back(buton);
    buton->setText(QString::number(butonlar.size()) + " nolu buton");*/
    ui->statusbar->showMessage("X = " + QString::number(event->x()) +
                               " Y = " + QString::number(event->y()));

}

void MainWindow::degistir()
{
    int sayisi = butonlar.size();
    for (int i = 0; i < sayisi; ++i) {
        if(butonlar[i]->tiklandimi) {
            butonlar[i]->setGeometry(butonlar[i]->x() + 10,
                                 butonlar[i]->y(),
                                 butonlar[i]->width(),
                                 butonlar[i]->height());
        }
    }
}
