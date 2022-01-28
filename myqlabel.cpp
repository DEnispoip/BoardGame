#include "myqlabel.h"

MyQLabel::MyQLabel(QString str, QWidget* parent):
    QLabel(parent)
{
    thing = Thing::NOTHING;
    qp.load(str);
    this->setPixmap(qp);
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

