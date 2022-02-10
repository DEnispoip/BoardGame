#include "boardFrame.h"

boardFrame::boardFrame(QWidget* parent):
      QWidget(parent)
{

    label = new MyQLabel("box_closed.png",this);
    this->setGeometry(0,0,label->getSize().width(),label->getSize().height());
}

boardFrame::~boardFrame()
{

}
