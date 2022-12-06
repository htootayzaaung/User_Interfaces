// Composite widget example
// (NDE, 2016-07-18)

#pragma once

#include <QGroupBox>

class QLCDNumber;
class QSlider;

class Controller: public QGroupBox
{
  public:
    Controller(QString title = "", QWidget* parent = 0);

  private:
    void createWidgets();
    void arrangeWidgets();
    void makeConnections();

    QLCDNumber* number;
    QSlider* slider;
};
