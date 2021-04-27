/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *btnhesapla;
    QLabel *label_6;
    QLabel *label_7;
    QListWidget *lst_gecenler;
    QListWidget *lst_kalanlar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *edAd;
    QLineEdit *edSoyad;
    QLineEdit *edVize;
    QLineEdit *edFinal;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 10, 281, 21));
        btnhesapla = new QPushButton(Dialog);
        btnhesapla->setObjectName(QString::fromUtf8("btnhesapla"));
        btnhesapla->setGeometry(QRect(200, 310, 93, 28));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 360, 55, 16));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(340, 355, 61, 21));
        lst_gecenler = new QListWidget(Dialog);
        lst_gecenler->setObjectName(QString::fromUtf8("lst_gecenler"));
        lst_gecenler->setGeometry(QRect(30, 380, 256, 192));
        lst_kalanlar = new QListWidget(Dialog);
        lst_kalanlar->setObjectName(QString::fromUtf8("lst_kalanlar"));
        lst_kalanlar->setGeometry(QRect(320, 380, 256, 192));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 70, 131, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(240, 80, 181, 191));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        edAd = new QLineEdit(widget1);
        edAd->setObjectName(QString::fromUtf8("edAd"));

        verticalLayout_2->addWidget(edAd);

        edSoyad = new QLineEdit(widget1);
        edSoyad->setObjectName(QString::fromUtf8("edSoyad"));

        verticalLayout_2->addWidget(edSoyad);

        edVize = new QLineEdit(widget1);
        edVize->setObjectName(QString::fromUtf8("edVize"));

        verticalLayout_2->addWidget(edVize);

        edFinal = new QLineEdit(widget1);
        edFinal->setObjectName(QString::fromUtf8("edFinal"));

        verticalLayout_2->addWidget(edFinal);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\303\266\304\237renci not hesaplmama otomasyonu", nullptr));
        btnhesapla->setText(QCoreApplication::translate("Dialog", "hesapla", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "ge\303\247enler", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "kalanlar", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "ad", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "soyad", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "vize not", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "final not", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
