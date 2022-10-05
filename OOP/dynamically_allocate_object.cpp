#include <iostream>
using namespace std;

class Foo
{
	public:
		Foo()
		{
			cout << "created" << endl;
		}
	
		int aMethod()
		{
			return 1337;
		}
};


int main()
{
	Foo a;
	cout << "a.aMethod(): " << a.aMethod() << "\n\n";
	
	Foo *b = new Foo();						//dynamically allocate an object "b";
	cout << "b->aMethod(): " << b->aMethod() << endl;		//calls the function "aMethod" in the class "Foo"
	cout << "(*b).aMethod(): " << (*b).aMethod() << endl;
	delete b;							//frees a dynamically allocated object "b"	
	
	return 0;
}
