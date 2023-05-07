#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")// 该指令仅支持VS环境
#endif
#include "QtWidgetsApplication1.h"

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{
 //   delete ui;
}
