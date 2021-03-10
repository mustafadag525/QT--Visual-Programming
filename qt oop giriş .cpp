#include <iostream>

using namespace std;


class Calisan{
public:
    string ad;
    int yas;

    Calisan(string ad,int yas)
    {
        this->ad=ad;
        this->yas=yas;
    }

    void ozellikyaz()
    {
        cout<<"ad: "<<ad<<endl;
        cout<<"yas: "<<yas<<endl;
    }

};


class Musteri:public Calisan{

public:
    string kd;

    Musteri(string ad,int yas,string kd):Calisan(ad,yas)
    {
        this->kd=kd;
    }

    void kdozellik()
    {
        cout<<"ad: "<<ad<< 12<<" kullandıgı dil"<<kd<<endl;
    }

};


int main()
{
   // Calisan cls=Calisan("mustfa",12);
   // cls.ozellikyaz();

    Musteri mst=Musteri("mustafa",12,"c++");
    mst.kdozellik();


}
