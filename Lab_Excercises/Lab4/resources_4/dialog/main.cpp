// Test program for Find dialog
// (NDE, 2014-10-27)

#include <QApplication>
#include "finddialog.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  FindDialog* dialog = new FindDialog();
  dialog->show();

  return app.exec();
}
