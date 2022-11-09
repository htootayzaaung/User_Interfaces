#include "mainwindow.h"
#include <QtWidgets>                        //header for Qt classes
#include <QApplication>

int main(int argc, char *argv[])
{
    //print out the QT version to the console (a good check the library is installed and up to date)
    qDebug() << QT_VERSION_STR;

    /*
    a single QApplication object is created at the start of the main, to manage resources and control
    interaction.
    */
    QApplication app(argc, argv);

    QLabel* label = new QLabel("<h1>Hello World! Stupid Idiot Tom!</h1>");       //creation of new object

    /*
     * set the size of the label-the size is width and height in pixels.
     * arrow operator (->) to call a function on a pointer to an object.
    */
    label->setFixedSize(QSize(1000, 1000));
    label->show();                                              //display the widget in a window
    return app.exec();
}
