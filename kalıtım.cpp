#include "dialog.h"

#include <QApplication>

#include <iostream>
#include<QDebug>

using std::string;
using std::cout;
using std::endl;


class Musteri{
// kapsülleme

    private:
    string ad;
    int yas;


public:
    void setad(string ad)
    {
        this->ad=ad;
    }
    string getad()
    {
        return ad;
    }

    void setyas(int yas)
    {
        this->yas=yas;
    }
    int getyas()
    {
        return yas;
    }

    void zamal()
    {
        if(yas>=30)
            cout<<"200 tl zam"<<endl;
        else
            cout<<"100 tl zam"<<endl;
    }
void ozellikyaz()
{
    cout<<"isim:"<<ad<<endl;
    cout<<"yas: "<<yas<<endl;
}

};


int main(int argc, char *argv[])
{

Musteri mst;
mst.setad("mustafa");
mst.setyas(30);
cout<<mst.getad()<<endl;
cout<<mst.getyas()<<endl;
mst.zamal();



    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
