#ifndef BOARDFRAME_H
#define BOARDFRAME_H

#include <QWidget>
#include "myqlabel.h"

class boardFrame : public QWidget
{
    Q_OBJECT
public:
    boardFrame(QWidget* parent = nullptr);
    virtual ~boardFrame();

private:
    MyQLabel* label;
};

#endif // BOARDFRAME_H
