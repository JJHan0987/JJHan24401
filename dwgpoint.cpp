#include "dwgpoint.h"

DwgPoint::DwgPoint(QObject *parent)
    : DwgObject{parent}
{}
void DwgPoint::SetData(QPoint pt)
{
    mPt = pt;
}

void DwgPoint::Draw(QPainter *painter)
{
    painter->drawPoint(mPt);
}
