#include "stdafx.h"
#include "volumeandbrightnesscontrol.h"

volumeandbrightnesscontrol::volumeandbrightnesscontrol(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    // ����Ĭ�ϴ�С
    // this->resize(250, 90);
    qDebug() << "MainWindow::MainWindow:" << this->size();
    // ���ر�����
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    // ��ʼλ��
    this->move(2200, 200);
    // ����ɫ
    this->setStyleSheet("background:black");
    // ͸��
    setWindowOpacity(0.4);
}

volumeandbrightnesscontrol::~volumeandbrightnesscontrol()
{}

