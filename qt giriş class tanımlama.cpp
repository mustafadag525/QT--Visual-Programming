#include "dialog.h"

#include <QApplication>

#include <iostream> // ekrana bişeyler yazmak için

using std::string;
using std::cout;
using std::endl;


class Calisan{
public:
 string Ad;
 string Firma;
 int Yas;


    void ozellikleriyaz()
    {
        cout<<"calisan adı:<<"<<Ad<<endl;
    }


};


int main(int argc, char *argv[])
{

    Calisan calisan1;
    calisan1.Ad="Mustafa";
    calisan1.Firma="mdgames";
    calisan1.Yas=20;

    calisan1.ozellikleriyaz();


    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
