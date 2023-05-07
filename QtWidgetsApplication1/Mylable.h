#ifndef MYLABEL_H
#define MYLABEL_H
#include <qwidget.h>
#include <QLabel>

class Mylable :public QLabel {

    Q_OBJECT
public:
   explicit Mylable(QWidget * parent=0);
    ~Mylable();
    //鼠标进入事件
    void enterEvent(QEnterEvent* event);
    //鼠标离开事件
    void leaveEvent(QEvent* event);
    //鼠标按下
    virtual void mousePressEvent(QMouseEvent* event);
    //释放就会产生鼠标事件
    virtual void mouseReleaseEvent(QMouseEvent* event);
    //鼠标双击事件
    virtual void mouseDoubleClickEvent(QMouseEvent* event);
    //内追踪鼠标事件事件
    virtual void mouseMoveEvent(QMouseEvent* event);
signals:

public slots:
};
#endif 

