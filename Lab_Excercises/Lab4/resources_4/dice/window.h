// Dice rolling application - class definition
// (NDE, 2015-07-10)

#pragma once

#include <QWidget>

class QPixmap;
class QLabel;
class QPushButton;

class DiceRoller: public QWidget
{
  Q_OBJECT

  public:
    DiceRoller();

  private:
    void loadDieFaceImages();
    void createWidgets();
    void arrangeWidgets();
    void makeConnections();

    QPixmap dieFaces[6];
    QLabel* die1;
    QLabel* die2;
    QPushButton* rollButton;

  private slots:
    void rollDice();
};


