#ifndef MYQLABEL_H
#define MYQLABEL_H

#include <QLabel>
#include <QDebug>

enum Thing{
    BOMB = 0,
    BRILIANT = 1,
    NOTHING = 2,
};


class MyQLabel : public QLabel
{
    Q_OBJECT
public:
    MyQLabel(QString str, QWidget* parent = nullptr);
    virtual ~MyQLabel();
    void setThing(Thing tmp);

private:
    Thing thing;
    QPixmap qp;

protected:
     void mousePressEvent(QMouseEvent *ev);
};

#endif // MYQLABEL_H


/* Написать enum для Label
 *
 * Добавить переменную enum в клас Label
 * Реализовать функцию, которая будет устанавливать значение этой переменной
 * По нажатию мышки в консоль писать, что в этой переменной сейчас храниться
 */
