#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGeometry(0 ,0 ,3*161, 4*161);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    for(size_t i = 0; i < 3; i++ ){
        for(size_t j = 0; j < 4; j++){
            MyQLabel* tmp = new MyQLabel("box_closed.png",this);
            tmp->setGeometry(i*tmp->getSize().width(),j* tmp->getSize().height(), tmp->getSize().width(), tmp->getSize().height());
            tmp->setThing(Thing(rand()%3));
            labelArr.push_back(tmp);
        }
    }
}

MainWindow::~MainWindow()
{

    delete ui;
}

