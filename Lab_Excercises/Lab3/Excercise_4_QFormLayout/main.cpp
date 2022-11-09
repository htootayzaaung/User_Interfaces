#include <QApplication>
#include <QFormLayout>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget();
    window->setWindowTitle("QFormLayout Test");

    QLineEdit *nameField = new QLineEdit();
    QLineEdit *emailField = new QLineEdit();
    QLineEdit *ageField = new QLineEdit();

    QFormLayout *form = new QFormLayout();
    form->addRow("Full &Name:", nameField);
    form->addRow("&Email:", emailField);
    form->addRow("&Age:", ageField);
    form->setLabelAlignment(Qt::AlignCenter);
    form->setRowWrapPolicy(QFormLayout::WrapAllRows);

    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addLayout(form);

    window->setLayout(mainLayout);
    window->show();
    return app.exec();
}
