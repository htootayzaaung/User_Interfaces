#include <QApplication>
#include <QtWidgets>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //Creating a window
    QWidget *window = new QWidget();

    //Setting a fixed size
    window->setFixedSize(QSize(500, 500));

    //Creating buttons
    QPushButton *button1 = new QPushButton("button1");
    QPushButton *button2 = new QPushButton("button2");
    QPushButton *button3 = new QPushButton("button3");
    QPushButton *search = new QPushButton("Search");
    QLineEdit *textbox = new QLineEdit("Name: ");

    //Creating a layout
    QHBoxLayout *layout = new QHBoxLayout();

    //Adding buttons to the layout
    layout->addWidget(button1);
    //layout->addStretch(1);
    layout->addWidget(button2);
    //layout->addStretch(1);
    layout->addWidget(button3);
    //layout->addStretch(1);
    layout->addWidget(textbox);
    layout->addWidget(search);

    //Setting window layout to layout
    window->setLayout(layout);

    //Setting the window title
    window->setWindowTitle("QHBoxLayout Test");

    window->show();
    return app.exec();
}
