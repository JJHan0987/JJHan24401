#ifndef DWGPOINT_H
#define DWGPOINT_H

#include "dwgobject.h"

class DwgPoint : public DwgObject
{
    Q_OBJECT
public:
    explicit DwgPoint(QObject *parent = nullptr);

private:
    QPoint mPt;

    // DwgObject interface
public:
    virtual void Draw(QPainter *painter);
    virtual void SetData(QPoint pt);
};

#endif // DWGPOINT_H
