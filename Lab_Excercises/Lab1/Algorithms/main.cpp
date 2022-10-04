#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool is_negative (int value)
{
    return (value < 0);
}

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);

    replace(v.begin(), v.end(), 0, 1);                              //replace all 0s with 1s

    int n = count_if(v.begin(), v.end(), is_negative);              //count negative values

    replace_if(v.begin(), v.end(), is_negative, 0);                 //replace negative values with 0




    return 0;
}
