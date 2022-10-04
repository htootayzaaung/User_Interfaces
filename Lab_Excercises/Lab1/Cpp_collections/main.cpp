#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*
    int data[100];
    int data2[] = {1, 2, 3, 4};
    data2[1] = -2;

    cout << data2[1] << endl;
    return 0;
    */

    vector <int> a;                                 //empty vector for ints
    vector <int> b(10);                             //10 ints all 0 (default)
    vector <int> c(5, -1);                          //5 ints all -1
    vector <int> d(c);                              //d will be a copy of c
    vector <string> p;                              //empty vector of strings
    vector <string> q (5, "xyz");                   //5 strings, all "xyz"

    cout << "b: ";
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    cout << "c: ";
    for (int i = 0; i < 5; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    cout << "d: ";
    for (int i = 0; i < 5; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    cout << "q: ";
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;

    /*****************************************************************************************************************/

    vector <string> words;

    words.push_back("Apple");                                       //puts "Apple" at the end
    words.push_back("Banana");                                      //puts "Banana" at the end
    words.push_back("Kiwi");                                        //puts "Kiwi" at the end

    cout << "words.size(): " << words.size() << endl;               //prints 3 as for now
    cout << "words[1]: " << words[1] << endl;                       //"Banana"
    cout << "words.at(1): " << words.at(1) << endl;                 //"Banana"

    words.pop_back();
    cout << "words.pop_back() called...." << endl;                  //removes the last element in "words" and there are only 2 elements left in the
    cout << "words.size(): " << words.size() << endl;               //vector "words"

    words.clear();
    cout << "words.clear() called...." << endl;                     //clears the entire vector "words"
    cout << "words.size(): " << words.size() << endl;               //0
}
