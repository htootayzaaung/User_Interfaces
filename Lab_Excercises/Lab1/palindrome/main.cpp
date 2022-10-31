#include <iostream>

using namespace std;

string palindrome(string word);

int main()
{
    string wanna = palindrome("wanna");
    string anna = palindrome("anna");
    string hello = palindrome("hello");

    cout << wanna << endl;
    cout << anna << endl;
    cout << hello << endl;

    return 0;
}

string palindrome(string word)
{
    string temp = "";
    int word_length = word.size();


    for (int i = word_length - 1; i >= 0; i--)
    {
        temp = temp + word[i];
    }
    if (word == temp)
    {
        return "Palindrome";
    }
    else
    {
        return "Not Palindrome";
    }
}
