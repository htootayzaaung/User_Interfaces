#include <iostream>
#include "CurrencyArray.h"

using namespace std;

int main()
{
    CurrencyArray little(1, 100);
    CurrencyArray lots(9, 99);
    lots = little;
    lots.amountArray[0] = 0;
    return 0;
}
