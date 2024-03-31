#ifndef DWGLINE_H
#define DWGLINE_H

#include "dwgobject.h"

class DwgLine : public DwgObject
{
    Q_OBJECT
public:
    explicit DwgLine(QObject *parent = nullptr);

private:
    QPoint mStartPt,mEndPt;

    // DwgObject interface
public:
    virtual void Draw(QPainter *painter);
    virtual void SetData(QPoint pt1,QPoint pt2);
};

#endif // DWGLINE_H
