#include "yenibuton.h"

yeniButon::yeniButon(QWidget *parent) :
    QPushButton(parent)
{
    tiklandimi = false;
    connect(this,SIGNAL(clicked()),this,SLOT(tikla()));
}

void yeniButon::tikla()
{
    tiklandimi = !tiklandimi;
}
