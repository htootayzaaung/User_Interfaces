#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

double findMean (double array[]);

int main()
{
    double sum = 0;
    double total = 0;
    double summation = 0;
    double arr[5];

    cout << "Arrays: \n\n";
    cout << "enter 5 numbers: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << ">";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The mean is: " << sum / 5 << endl;

    cout << "The mean is: " << findMean(arr) << endl << endl;

    /************************************************************************************************/

    cout << "Vectors: \n\n";
    cout << "enter 5 numbers: " << endl;

    vector <double> vec;

    for (int i = 0; i < 5; i++)
    {
        double temp = 0;
        cout << ">";
        cin >> temp;
        vec.push_back(temp);
        total += vec[i];
    }

    cout << "The mean is: " << total / 5 << endl;

    return 0;
}

double findMean (double array[])
{
    double total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += array[i];
    }

    double mean = total / 5;
    return mean;
}

