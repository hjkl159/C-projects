#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_volumeandbrightnesscontrol.h"

class volumeandbrightnesscontrol : public QMainWindow
{
    Q_OBJECT

public:
    volumeandbrightnesscontrol(QWidget *parent = nullptr);
    ~volumeandbrightnesscontrol();

private:
    Ui::volumeandbrightnesscontrolClass ui;
};
