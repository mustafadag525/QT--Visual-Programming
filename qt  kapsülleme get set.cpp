#include "dialog.h"

#include <QApplication>











#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Calisan{
public:
 string Ad;
 string Firma;
 int Yas;




 // encapsulation : belirlediğimiz bir adı kullanıcı farklı girerse burdan engelleriz;

 void setAd(string ad)
 {
     Ad=ad;
 }

 void getAd(string ad)
 {
     return Ad;
 }







public: Calisan(string ad,string firma,int yas)  //constructor

 {
     Ad=ad;
     Firma=firma;
     Yas=yas;
 }










void ozellikekranayaz()
{
    cout<<"Calisan adi: "<<Ad<<endl; // bilgileri ekrana yazmak için;
    cout<<"Calisilan firma: "<<Firma<<endl;
    cout<<"Yas: "<<Yas<<endl;

}


};






int main(int argc, char *argv[])
{





//encapsulation

    Calisan calisan1=Calisan("mustafa","mdgames",20); // constructors kısmı;
    calisan1.ozellikekranayaz();


    calisan1.getAd("mustafa");
string adı=calisan1.getAd();
cout<<adı;












    Calisan calisan1;   // normal tanımlama;
    calisan1.Ad="mustafa";
    calisan1.Firma="mdgames";
    calisan1.Yas=20;
    calisan1.ozellikekranayaz();






    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
