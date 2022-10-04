#include <iostream>
#include <vector>

using namespace std;

vector <double> input_vector_prompt ();

void swap (int *x, int *y);

void print_vector(vector <double> vec);

int main()
{
    int a  = 3, b = 5;
    swap(&a, &b);

    return 0;
}

/*
    _By default C++ is call-by-value: function parameters are copies if the arguments passed to the function. This is costly for large arguments such
    as vectors with many elements.

    _Declaring a parameter as a reference avoids a potentially costly copy operation.

    For examples:

    void read_data (const string &fname, vector &data)                  //Read data from a file into a vector
    {
        ....
    }

    float mean_value (const vector &data)                               //Compute the mean
    {
        ....
    }

*/

void swap (int *x, int *y)
{
    cout << "Before swapping: " << endl;
    cout << "a: " << *x << endl << "b: " << *y << "\n\n";
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "After swapping: " << endl;
    cout << "a: " << *x << endl << "b: " << *y << endl;
}



