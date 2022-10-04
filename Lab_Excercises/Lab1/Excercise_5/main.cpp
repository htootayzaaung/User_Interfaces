#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print5_vector(vector <double> vec);

vector <double> read5_multiply2_reverse (vector <double> vec);

vector <double> input_vector_prompt ();

int main()
{
    vector <double> numbers1 = input_vector_prompt();

    cout << "Default order: ";
    print5_vector(numbers1);

    sort(numbers1.begin(), numbers1.end(), std::greater<int>());

    cout << "Descending order: ";
    print5_vector(numbers1);

    sort(numbers1.begin(), numbers1.end());
    cout << "Ascending order: ";
    print5_vector(numbers1);

    vector <double> numbers2 = read5_multiply2_reverse(numbers1);
    cout << "Read 5 doubles, multiply each value by 2: ";
    print5_vector(numbers2);

    return 0;
}

void print5_vector(vector <double> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}


vector <double> read5_multiply2_reverse (vector <double> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] *= 2;
    }

    reverse(vec.begin(), vec.end());

    return vec;
}

vector <double> input_vector_prompt ()
{
    vector <double> vec;

    cout << "enter 5 numbers: " << endl;

    for (int i = 0; i < 5; i++)
    {
        double temp;
        cout << ">";
        cin >> temp;
        vec.push_back(temp);
    }

    return vec;
}

