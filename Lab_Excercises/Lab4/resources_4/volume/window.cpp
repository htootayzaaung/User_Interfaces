// Volume control simulation in Qt
// (NDE, 2015-06-17)

#include <QtWidgets>
#include "window.hpp"

VolumeControl::VolumeControl()
{
  createWidgets();
  arrangeWidgets();
  setWindowTitle("Volume Control");
  makeConnections();
}

void VolumeControl::createWidgets()
{
  number = new QLCDNumber(3);
  number->display(50);
  number->setStyleSheet("color: green");

  slider = new QSlider(Qt::Horizontal);
  slider->setRange(0, 128);
  slider->setTickPosition(QSlider::TicksBelow);
  slider->setTickInterval(10);
  slider->setValue(50);
}

void VolumeControl::arrangeWidgets()
{
  QGridLayout* layout = new QGridLayout();
  layout->addWidget(number, 0, 0);
  layout->addWidget(slider, 1, 0);
  layout->setRowMinimumHeight(0, 75);
  setLayout(layout);
}

void VolumeControl::makeConnections()
{
    connect(slider, SIGNAL(valueChanged(int)), number, SLOT(display(int)));
}

// Implement makeConnections method here
