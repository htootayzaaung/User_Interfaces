#ifndef WINDOW_H
#define WINDOW_H
#include <QWidget>          //just the supertype of all widgets
class QPushButton;          //forward-declare QPushButton so we don't need to import

class MyWindow: public QWidget
{
    public:
        MyWindow();

    private:
        void createWidgets();
        void arrangeWidgets();

        //Pointers to widgets are created here
        QPushButton *aButton;

};

#endif // WINDOW_H
