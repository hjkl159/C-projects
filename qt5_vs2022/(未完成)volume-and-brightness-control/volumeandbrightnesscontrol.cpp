#include "stdafx.h"
#include "volumeandbrightnesscontrol.h"

volumeandbrightnesscontrol::volumeandbrightnesscontrol(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    // 窗口默认大小
    // this->resize(250, 90);
    qDebug() << "MainWindow::MainWindow:" << this->size();
    // 隐藏标题栏
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    // 初始位置
    this->move(2200, 200);
    // 背景色
    this->setStyleSheet("background:black");
    // 透明
    setWindowOpacity(0.4);
}

volumeandbrightnesscontrol::~volumeandbrightnesscontrol()
{}

