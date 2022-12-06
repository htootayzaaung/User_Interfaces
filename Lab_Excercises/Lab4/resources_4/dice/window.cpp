// Dice rolling application - class implementation
// (NDE, 2015-07-10)

#include <QtWidgets>
#include "window.h"

DiceRoller::DiceRoller()
{
  loadDieFaceImages();
  createWidgets();
  arrangeWidgets();
  makeConnections();
  setWindowTitle("Dice Roller");
}

void DiceRoller::loadDieFaceImages()
{
  for (int i = 0; i < 6; ++i) {
    QString filename = QString(":/die%1.png").arg(i+1);
    dieFaces[i].load(filename);
  }
}

void DiceRoller::createWidgets()
{
    die1 = new QLabel();
    die2 = new QLabel();
    rollDice();
}

void DiceRoller::arrangeWidgets()
{
  // Arrange dice labels horizontally

  QHBoxLayout* diceLayout = new QHBoxLayout();
  diceLayout->addWidget(die1);
  diceLayout->addWidget(die2);

  // Arrange dice box and button vertically

  QVBoxLayout* layout = new QVBoxLayout();
  layout->addLayout(diceLayout);
  layout->addWidget(rollButton);

  setLayout(layout);
}

void DiceRoller::rollDice()
{
    int n = rand() % 5;
    die1->setPixmap(dieFaces[n]);
    n = rand() % 4;
    die2->setPixmap(dieFaces[n]);
}

void DiceRoller::makeConnections()
{
    connect(rollButton, SIGNAL(clicked()), this, SLOT(rollDice()));
}

