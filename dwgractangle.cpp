#include "dwgractangle.h"

DwgRactangle::DwgRactangle(QObject *parent)
    : DwgObject{parent}
{}


void DwgRactangle::Draw(QPainter *painter)
{
    painter->drawRect(mx,my,mWidth,mHeight);
}

void DwgRactangle::SetData(QPoint pt1, QPoint pt2)
{
    mx = pt1.x();
    my = pt1.y();
    mWidth = pt2.x()-pt1.x();
    mHeight = pt2.y()-pt1.y();
}
