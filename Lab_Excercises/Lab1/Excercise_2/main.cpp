#include <iostream>
using namespace std;

int main()
{
    double x, y;
    double X, Y, Z;

    cout << "Enter x & y coordinates: ";
    cin >> x >> y;
    cout << "Coordinates are (" << x << ", " << y << ")" << endl;

    if ((x >= 0 && x <= 3) && (y >= 0 && y <= 3))
    {
        cout << "Inside" << endl;
    }
    else
    {
        cout << "Outside" << endl;
    }

    cout << "Enter x length (m)> ";
    cin >> X;

    cout << "Enter y length (m)> ";
    cin >> Y;

    cout << "Enter z length (m)> ";
    cin >> Z;

    cout << "The volume of the cuboid is " << X * Y * Z << "!" << endl;
}
