﻿#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")// 该指令仅支持VS环境
#endif
#include "Mylable.h"
#include <qwidget.h>
#include <QLabel>
#include <qmessagebox.h>
#include <QMouseEvent>

Mylable::Mylable(QWidget* parent):QLabel(parent)
{

}
Mylable::~Mylable()
{

 }
void Mylable::enterEvent(QEnterEvent* event)
{
	/*QMessageBox *box = new QMessageBox(this);
	box->information(this,"222！","鼠标进来了");*/
}
void Mylable::leaveEvent(QEvent* event)
{
	//QMessageBox* box = new QMessageBox(this);
	//box->information(this, "111！", "鼠标离开了");

}

void Mylable::mousePressEvent(QMouseEvent* event)
{
	
	/*QMessageBox* box = new QMessageBox(this);
	QString str =  QString("鼠标按下了位置在 %1 %2").arg(event->x()).arg(event->y());
	box->information(this, "222！",str);*/

}

void Mylable::mouseReleaseEvent(QMouseEvent* event)
{
	/*QMessageBox* box = new QMessageBox(this);
	QString str = QString("鼠标释放了位置在 %1 %2").arg(event->x()).arg(event->y());
	box->information(this, "222！", str);*/
}

void Mylable::mouseDoubleClickEvent(QMouseEvent* event)
{/*
	QMessageBox* box = new QMessageBox(this);
	QString str = QString("鼠标双击了位置在 %1 %2").arg(event->x()).arg(event->y());
	box->information(this, "222！", str);*/
}

void Mylable::mouseMoveEvent(QMouseEvent* event)
{
	QMessageBox* box = new QMessageBox(this);
	QString str = QString("追踪鼠标事件 %1 %2").arg(event->x()).arg(event->y());
	box->information(this, "222！", str);
}
