#include <iostream>
#include <string>
using namespace std;

int main()
{
    string target = "World";
    string message = "Hello " + target + "!";

    cout << message << endl;
    cout << "message.length(): " << message.length() << endl;

    cout << "message[6]: " << message[6] << endl;
    cout << "message.find(\"W\"): " << message.find("W") << endl;

    message.replace(0, 5, "Goodbye");
    cout << message << endl << endl;

    string str = "hello world";

    for (int i = 11; i >= 0; i--)
    {
        cout << str.substr(0, i) << endl;
    }

    return 0;
}
