#include <iostream>

using namespace std;

class Foo
{
    public:

        Foo()                                               //This is the constructor that we call to create a new object.
        {
            cout << "created" << endl;
        }

        ~Foo()                                              //This is called whenever the object is destroyed. Often this is called automatically.
        {
            cout << "destroyed" << endl;
        }

        Foo(Foo &f)                                         //Foo(Foo &f) is the copy function. This function is also often automatically called.
        {
            cout << "copied" << endl;
        }
};

int main()
{

    return 0;
}

/*
 What's happening behind the scenes?

 Suppose a function:

 void aFunction(Foo g){ .... } is called, what's happening is that a function uses the copy of an object "g" value-wise and carries out the operation
 whatever and however is defined as per the function. Most importantly, the object is also destroyed at the end of the function, and it is the
 destructor that plays the role of destroying an object.

 Suppose the main-function:

 int main()
 {
    Foo f;                              //This creates an object.
    aFunction(f);                       //Destroys an object.
 }

*/
