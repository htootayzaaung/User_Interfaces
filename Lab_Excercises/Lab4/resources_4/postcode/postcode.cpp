// Example of widget customisation via subclassing
// (NDE, 2015-10-01)

#include "postcode.h"

#include <QRegularExpression>

// Regular expression for UK postcodes (based on rules from Wikipedia)
static const QRegularExpression REG_EXP("^(GIR ?0AA|[A-PR-UWYZ]([0-9]{1,2}|([A-HK-Y][0-9]([0-9ABEHMNPRV-Y])?)|[0-9][A-HJKPS-UW]) ?[0-9][ABD-HJLNP-UW-Z]{2})$");

PostcodeLineEdit::PostcodeLineEdit(QWidget* parent): QLineEdit(parent)
{
  QRegularExpressionValidator *validator = new QRegularExpressionValidator(REG_EXP, this);
  this->setValidator(validator);
}
