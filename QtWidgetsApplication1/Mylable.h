#ifndef MYLABEL_H
#define MYLABEL_H
#include <qwidget.h>
#include <QLabel>

class Mylable :public QLabel {

    Q_OBJECT
public:
   explicit Mylable(QWidget * parent=0);
    ~Mylable();
    //�������¼�
    void enterEvent(QEnterEvent* event);
    //����뿪�¼�
    void leaveEvent(QEvent* event);
    //��갴��
    virtual void mousePressEvent(QMouseEvent* event);
    //�ͷžͻ��������¼�
    virtual void mouseReleaseEvent(QMouseEvent* event);
    //���˫���¼�
    virtual void mouseDoubleClickEvent(QMouseEvent* event);
    //��׷������¼��¼�
    virtual void mouseMoveEvent(QMouseEvent* event);
signals:

public slots:
};
#endif 

