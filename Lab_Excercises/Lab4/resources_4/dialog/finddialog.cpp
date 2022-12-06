// Implementation file for Find dialog
// (NDE, 2014-10-27)

#include <QtWidgets>
#include "finddialog.h"


FindDialog::FindDialog(QWidget* parent): QDialog(parent)
{
  createWidgets();
  arrangeWidgets();
  makeConnections();

  setWindowTitle("Find");
  setFixedHeight(sizeHint().height());
}


void FindDialog::createWidgets()
{
}


void FindDialog::arrangeWidgets()
{
}


void FindDialog::makeConnections()
{
}


void FindDialog::findClicked()
{
}


void FindDialog::enableFindButton(const QString& text)
{
}
