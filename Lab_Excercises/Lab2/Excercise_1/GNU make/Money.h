#ifndef MONEY_H
#define MONEY_H
#include <iostream>
using namespace std;

class Money
{
    private:
        int euros;
        int cents;

    public:
        int getEuros();
        int getCents();
        Money(int e, int c);
        void printMoney();
        void addMoreMoney(Money m1, Money m2);
};

int Money::getEuros()
{
    return euros;
}

int Money::getCents()
{
    return cents;
}

Money::Money(int e, int c)
{
    euros = e;
    cents = c;
}

void Money::printMoney()
{
    std::cout << "£" << euros << "." << cents << std::endl;
}

void Money::addMoreMoney(Money m1, Money m2)
{
    euros = euros + m1.euros + m2.euros;
    cents = cents + m1.cents + m2.cents;
}

#endif
