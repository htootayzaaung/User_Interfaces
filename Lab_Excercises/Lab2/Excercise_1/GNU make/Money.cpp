#include <iostream>
#include "Money.h"
using namespace std;

int main()
{
    Money m1 = Money(3, 50);
    m1.printMoney();

    Money m2 = Money(1, 50);
    m2.printMoney();

    Money m3  = Money(0, 0);
    m3.addMoreMoney(m1, m2);
    m3.printMoney();

    return 0;
}
