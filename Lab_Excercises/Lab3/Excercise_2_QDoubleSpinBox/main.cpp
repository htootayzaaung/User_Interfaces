#include <QtWidgets>
#include <QApplication>
#include <QDoubleSpinBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QDoubleSpinBox *widget = new QDoubleSpinBox();

    widget->show();
    widget->setRange(0.0, 1.0);
    widget->setSingleStep(0.05);
    widget->setMinimumSize(250, 40);
    widget->setWindowTitle("QDoubleSpinBox");

    return app.exec();
}
