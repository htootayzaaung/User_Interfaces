#include <iostream>

using namespace std;

//bool palindrome(string n);

void palindrome(string n);

int main()
{
    /*
    cout << palindrome ("wanna");
    cout << palindrome ("anna");
    cout << palindrome ("hello");
    */

    palindrome("wanna");
    palindrome("anna");
    palindrome("hello");
    return 0;
}

/*
bool palindrome(string n)
{
    if (n.size() % 2 == 0)
    {
        int iterate_size = (n.size() / 2);
        int counter = 0;

        for (int i = 0; i < iterate_size; i++)
        {
            if (n[i] != n[n.size() - i])
            {
                return false;
            }
            else if (n[i] == n[n.size() -i])
            {
                counter++;
            }
        }
        if (counter == iterate_size)
        {
            return true;
        }
    }

    else if (n.size() % 2 != 0)
    {
        int iterate_size = (n.size() - 1) / 2;

        for (int i = 0; i < iterate_size; i++)
        {
            int counter = 0;
            if (n[i] != n[n.size() - i])
            {
                return false;
            }
            else if (n[i] == n[n.size() -i])
            {
                counter++;
                if (counter == iterate_size)
                {
                    return true;
                }
            }
        }
    }
}
*/

void palindrome(string n)
{
    if (n.size() % 2 == 0)
    {
        int iterate_size = (n.size() / 2);
        int counter = 0;

        for (int i = 0; i < iterate_size; i++)
        {
            if (n[i] != n[n.size() - i - 1])
            {
                cout << "False" << endl;
                i = iterate_size;
            }
            else if (n[i] == n[n.size() - i - 1])
            {
                counter++;
            }
        }
        if (counter == iterate_size)
        {
            cout << "True" << endl;
        }
    }

    else if (n.size() % 2 != 0)
    {
        int iterate_size = (n.size() - 1) / 2;

        for (int i = 0; i < iterate_size; i++)
        {
            int counter = 0;
            if (n[i] != n[n.size() - i -1])
            {
                cout << "False" << endl;
                i = iterate_size;
            }
            else if (n[i] == n[n.size() - i - 1])
            {
                counter++;
                if (counter == iterate_size)
                {
                    cout << "True" << endl;
                }
            }
        }
    }
}
