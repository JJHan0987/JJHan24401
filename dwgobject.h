#ifndef DWGOBJECT_H
#define DWGOBJECT_H

#include <QColor>
#include <QObject>
#include <QPainter>


class DwgObject : public QObject
{
    Q_OBJECT
public:
    explicit DwgObject(QObject *parent = nullptr);
    ~DwgObject() {};

    virtual void Draw(QPainter * painter) = 0;

private:
    int mLineWidth = 0;
    QColor mLineColor = Qt::black;

signals:

};

#endif // DWGOBJECT_H
