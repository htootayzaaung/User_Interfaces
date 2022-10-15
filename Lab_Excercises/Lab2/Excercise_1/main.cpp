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
    cout << "£" << euros << "." << cents << endl;
}

void Money::addMoreMoney(Money m1, Money m2)
{
    euros = euros + m1.euros + m2.euros;
    cents = cents + m1.cents + m2.cents;
}

int main()
{
    Money m1 = Money{3, 50};
    m1.printMoney();

    Money m2 = Money{1, 50};
    m2.printMoney();

    Money m3  = Money{0, 0};
    m3.addMoreMoney(m1, m2);
    m3.printMoney();

    return 0;
}
