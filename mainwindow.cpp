#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ql = new MyQLabel("box_closed.png", this);
    ql->setThing(Thing(rand() % 3));
    ql->setGeometry(0,0,161,161);


}

MainWindow::~MainWindow()
{
    delete ql;
    delete ui;
}

