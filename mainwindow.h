#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dwgobject.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum DrawType
{
    DNone,
    DPoint,
    DLine,
    DCircle,
    DRectangle,
    DPolyLine,
    DSDLine
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QList<DwgObject *> m_mainlist;     // 定义了一个数组用于保存所有屏幕上绘制的图元对象
    DrawType curDrawType = DNone;            // 定义一个变量用来记录当前鼠标正在绘制哪种图元
    QPainter *m_painter = nullptr;

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveAs_triggered();

    void on_actionExit_triggered();

    void pointTB_clicked();

    void on_lineTB_clicked();

    void cirAct1_triggered();

    void on_rectangleTB_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
