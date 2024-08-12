#include "stdafx.h"
#include "volumeandbrightnesscontrol.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    volumeandbrightnesscontrol w;
    w.show();
    return a.exec();

}