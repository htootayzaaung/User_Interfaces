// Volume control simulation in Qt
// (NDE, 2015-06-17)

#include <QApplication>
#include "window.hpp"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QWidget* window = new VolumeControl;
  window->show();

  return app.exec();
}
