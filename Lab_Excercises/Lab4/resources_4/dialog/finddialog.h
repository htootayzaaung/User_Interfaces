// Header file for Find dialog (implemented in finddialog.cpp)
// (NDE, 2014-10-27)

#pragma once

#include <QDialog>

class QCheckBox;   // forward reference
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog: public QDialog
{
  Q_OBJECT

  public:
    FindDialog(QWidget* = 0);

  signals:
    void findNext(const QString&, Qt::CaseSensitivity);
    void findPrevious(const QString&, Qt::CaseSensitivity);

  private:
    void createWidgets();
    void arrangeWidgets();
    void makeConnections();

    QLabel* label;
    QLineEdit* lineEdit;
    QCheckBox* caseBox;
    QCheckBox* backwardBox;
    QPushButton* findButton;
    QPushButton* closeButton;

  private slots:
    void findClicked();
    void enableFindButton(const QString&);
};
