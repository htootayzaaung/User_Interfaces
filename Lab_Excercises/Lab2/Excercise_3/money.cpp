#include <iostream>
#include <cmath>
#include "money.h"

using namespace std;


Money::Money(int e, int c)      //Classic-constructor
{
    if (e < 0)
    {
        throw invalid_argument("invalid euros\n");        //returns from the method instantly
    }
    if (c < 0 || c > 99)
    {
        throw invalid_argument("invalid cents\n");
    }
    euros = e;
    cents = c;
}


/*
Money::Money(int e, int c):     //Constructor-initialization lists
    euros(e), cents(c)
{}
*/

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

Money operator+ (const Money &m1, const Money &m2)      //This is how you would do operations for the objects? WOW!
{
    int e = m1.getEuros() + m2.getEuros();
    int c = m1.getCents() + m2.getCents();
    return Money(e + c / 100, c % 100);
}

Money operator+ (const Money &m1, int value)
{
    int e = m1.getEuros() + value;
    return Money(e, m1.getCents());
}

Money operator+ (const Money &m1, double value)
{
    int e = m1.getEuros() + trunc(value);
    int c = m1.getCents() + (int)((value - trunc(value)) * 100);
    return Money(e, c);
}

int main()
{
    Money m1 (2, 50);
    Money m2 (0, 52);
    Money sum = m1 + m2;
    Money sum1 = sum + 1;
    Money sum2 = sum1 + 45.32;
    cout << "Sum: " << sum.toString() << endl;
    cout << "Sum1: " << sum1.toString() << endl;
    cout << "Sum2: " << sum2.toString() << endl;

    try
    {
        Money m1 (23, 101);
    }
    catch (invalid_argument const &e)
    {
        cout << "invalid argument" << e.what() << endl;
    }

    return 0;   //everything went as planned
}
