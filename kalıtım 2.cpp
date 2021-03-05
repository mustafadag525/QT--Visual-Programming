#include "dialog.h"

#include <QApplication>



#include<iostream>
#include<QDebug>

using std::cout;
using std::string;
using std::endl;




 class Person{

    private:
    string ad;
    string soyad;




public:   Person(string ad,string soyad)
    {

        this->ad=ad;
        this->soyad=soyad;
    }


public:
    void setad(string ad){this->ad=ad;}
    void setsoyad(string soyad){this->soyad=soyad;}
    string getad(){return ad;}
    string getsoyad(){return  soyad;}



};



class Ogrenci:public Person{ //kalıtım
    
private: string ogr_notu;
    
public: Ogrenci(string ogr_notu,string ad,string soyad):ogr_notu(ogr_notu),Person(ad,soyad){
        
        
         
    }
public: 
    void setogr_notu(string ogr_notu){return; ogr_notu;}
    string getogr_notu(){return ogr_notu;}
    
};









int main(int argc, char *argv[])
{


    Person p=Person("a","b");
    p.setad("ali");
    cout<<p.getad()<<endl;
    Ogrenci ogr;
    ogr.serogr_notu(50);
    cout<<ogr.getogr_notu()<<endl;




    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
