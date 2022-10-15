#include <iostream>
#include "money.h"

using namespace std;

/*
Money::Money(int e, int c)      //Classic-constructor
{
    euros = e;
    cents = c;
}
*/

Money::Money(int e, int c):     //Constructor-initialization lists
    euros(e), cents(c)
{}

int Money::getEuros() const
{
    return euros;
}

int Money::getCents() const
{
    return cents;
}

string Money::toString() const
{
    //to_string is a utility in the std namespace
    return "EUR" + to_string(euros) + "." + to_string(cents);
}

Money Money::plus(const Money &other) const
{
    return Money(euros + other.euros, cents + other.cents);
}

int main()
{
    Money m1 (2, 50);
    Money m2 (0, 52);
    Money sum = m1.plus(m2);
    cout << "Sum: " << sum.toString() << endl;
    return 0;   //everything went as planned
}
