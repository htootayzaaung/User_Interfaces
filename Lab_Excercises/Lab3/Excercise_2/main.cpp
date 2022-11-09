#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPushButton *widget = new QPushButton("Click Here");
    widget->setIcon(QIcon((":/icon.png")));
    widget->setFont(QFont("Times", 18, QFont::Bold));
    widget->setWindowTitle("QPushButton");
    widget->setMinimumSize(240, 60);
    QObject::connect(widget, SIGNAL(clicked()), &app, SLOT(quit()));                    //upon clicking the "Click Here" button it will quit!
    //widget->setEnabled(false);                                                        //this disables the button
    widget->show();

    return app.exec();
}
