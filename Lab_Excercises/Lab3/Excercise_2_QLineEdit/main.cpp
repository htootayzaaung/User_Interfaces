#include <QApplication>
#include <QLineEdit>
#include <QIntValidator>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLineEdit *widget = new QLineEdit();
    widget->setMinimumSize(200, 400);
    widget->setAlignment(Qt::AlignCenter);
    //widget->setEnabled(false);            //This prevents the user from typing in the text
    //widget->setInputMask("999");          //This only allows you to input "999", other characters or strings are not allowed!
    QIntValidator *validator = new QIntValidator(1, 99);        //Input is restricted uo integers in this range.
    widget->setValidator(validator);
    widget->show();
    return app.exec();
}
