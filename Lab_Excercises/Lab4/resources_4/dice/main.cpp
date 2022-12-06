// Dice rolling application - main program
// (NDE, 2015-07-10)

#include <cstdlib>
#include <QApplication>
#include "window.h"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  // Create window and make it visible

  DiceRoller* window = new DiceRoller();
  window->show();

  return app.exec();
}
