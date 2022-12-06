// Test program for PostcodeLineEdit class
// (NDE, 2015-10-01)

#include "postcode.h"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  // Create widgets

  QFont font("DejaVu Sans", 18);

  PostcodeLineEdit* postcode = new PostcodeLineEdit();
  postcode->setFont(font);

  QLabel* label = new QLabel("&Postcode:");
  label->setFont(font);
  label->setBuddy(postcode);

  // Arrange widgets horizontally

  QHBoxLayout* layout = new QHBoxLayout();
  layout->addWidget(label);
  layout->addWidget(postcode);

  // Create and display window

  QWidget* window = new QWidget();
  window->setWindowTitle("PostcodeLineEdit Test");
  window->setLayout(layout);

  window->show();

  return app.exec();
}
