#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double d1 = 45.32;
	cout << "d1: " << trunc(d1) << endl;
	cout << "d1 - trinc(d1): " << d1 - trunc(d1) << endl;
	cout << "(int)((d1 - trunc(d1) * 100): " << (int)((d1 - trunc(d1)) * 100) << endl;
	cout << "sizeof((int)((d1 - trunc(d1)) * 100)): " << sizeof((int)((d1 - trunc(d1)) * 100)) << endl;	
return 0;
}
