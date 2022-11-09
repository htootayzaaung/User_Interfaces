#include <QApplication>
#include <QTextEdit>
#include <QColor>
#include <QTextOption>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTextEdit *widget = new QTextEdit();
    widget->setWindowTitle("QTextEditExample");
    widget->setFont(QFont("DejaVu Sans", 14, QFont::Bold));
    widget->setTextColor(Qt::red);
    widget->setWordWrapMode(QTextOption::WordWrap);
    widget->show();
    return app.exec();
}
