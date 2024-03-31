#ifndef DWGRACTANGLE_H
#define DWGRACTANGLE_H

#include "dwgobject.h"

class DwgRactangle : public DwgObject
{
    Q_OBJECT
public:
    explicit DwgRactangle(QObject *parent = nullptr);

private:
    qreal mx,my,mWidth,mHeight;

    // DwgObject interface
public:
    virtual void Draw(QPainter *painter);
    virtual void SetData(QPoint pt1, QPoint pt2);
};

#endif // DWGRACTANGLE_H
