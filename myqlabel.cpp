#include "myqlabel.h"

MyQLabel::MyQLabel(QString str, QWidget* parent):
    QLabel(parent)
{
    thing = Thing::NOTHING;
    size = new QSize(161,161);
    qp.load(str);
    this->setPixmap(qp);
    this->setGeometry(0,0,size->width(),size->height());
}

MyQLabel::~MyQLabel(){

}

void MyQLabel::mousePressEvent(QMouseEvent* ev){
    switch (thing) {
        case Thing::NOTHING:
        qp.load("box_open.png");
        this->setPixmap(qp);        
        break;
        case Thing::BOMB:
        qp.load("bomb.png");
        this->setPixmap(qp);
        break;
        case Thing::BRILIANT:
        qp.load("diamond.png");
        this->setPixmap(qp);
        break;
    }
}

void MyQLabel::setThing(Thing tmp){
    thing = tmp;
}

