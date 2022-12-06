// Composite widget example
// (NDE, 2016-07-18)

#include <QtWidgets>
#include "controller.h"

Controller::Controller(QString title, QWidget* parent):
  QGroupBox(title, parent)
{
  createWidgets();
  arrangeWidgets();
  makeConnections();
}

void Controller::createWidgets()
{
}

void Controller::arrangeWidgets()
{
}

void Controller::makeConnections()
{
}
