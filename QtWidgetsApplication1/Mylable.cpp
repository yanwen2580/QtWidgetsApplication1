#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")// 该指令仅支持VS环境
#endif
#include "Mylable.h"
#include <qwidget.h>
#include <QLabel>
#include <qmessagebox.h>

Mylable::Mylable(QWidget* parent):QLabel(parent)
{

}
Mylable::~Mylable()
{

 }
void Mylable::enterEvent(QEnterEvent* event)
{
	QMessageBox *box = new QMessageBox(this);
	box->information(this,"222！","鼠标进来了");
}
void Mylable::leaveEvent(QEvent* event)
{
	//QMessageBox* box = new QMessageBox(this);
	//box->information(this, "111！", "鼠标离开了");

}

void Mylable::mousePressEvent(QMouseEvent* event)
{
}

void Mylable::mouseReleaseEvent(QMouseEvent* event)
{
}

void Mylable::mouseDoubleClickEvent(QMouseEvent* event)
{
}

void Mylable::mouseMoveEvent(QMouseEvent* event)
{
}
