#include <iostream>

using namespace std;

double findMean (double array[]);

int main()
{
    double sum = 0;
    double arr[5];

    cout << "enter 5 numbers: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << ">";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The mean is: " << sum / 5 << endl;

    cout << "The mean is: " << findMean(arr) << endl;
    return 0;
}

double findMean (double array[])
{
    double total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += array[i];
    }

    double mean = total /5;
    return mean;
}
