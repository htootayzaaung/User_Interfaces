#include <iostream>
#include "CurrencyArray.h"

using namespace std;

CurrencyArray baz (CurrencyArray m4)
{
    cout << "method" << endl;
    return m4;
}

CurrencyArray *baz_pointer(CurrencyArray *m5)
{
    cout << "pointer-method" << endl;
    return m5;
}

CurrencyArray &baz_reference(CurrencyArray &m6)
{
    cout << "address-method" << endl;
    return m6;
}

CurrencyArray& create()
{
    CurrencyArray m7(2, 4);
    return m7;
}

int main()
{
    cout << "start of main" << endl;

    {
        CurrencyArray m3(2, 4);
        cout << "middle of main" << endl;
        m3 = baz(m3);
    }

    cout << "end of main" << endl;

    cout << endl << endl;

    cout << "start of main" << endl;

    {
        CurrencyArray *m4 = new CurrencyArray(2, 4);

        cout << "middle of main" << endl;
        baz_pointer(m4);
    }

    cout << "end of main" << endl;

    cout << endl << endl;

    cout << "stary of main" << endl;

    CurrencyArray m5(2, 4);

    cout << "middle of main" << endl;

    baz_reference(m5);

    cout << "end of main" << endl;

    CurrencyArray &m6 = create();

    cout << "£" << m6.getEuros() << "." << m6.getCents() << endl;

    return 0;
}
