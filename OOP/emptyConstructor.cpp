#include <iostream>
using namespace std;

class Foo
{
	private:
		int myk;
	
	public:
		Foo(int k)
		{
			myk = k;
			cout << "myk: " << myk << endl;
		}
		
		/*		
		Foo()
		{
			myk = 0;
			cout << "created" << endl;
		}
		*/ //Classsic emptyConstructor		
		
		Foo()
			:myk(0)
			{
				cout << "created" << endl;
			} //emptyConstructor with constructor initialization list
		
		int whatsMyk()
		{
			return myk;
		}
		~Foo()
		{
			cout << "destroyed" << endl;
		}
};

int main()
{
	Foo a(20);
	cout << "a.whatsMyk(): " << a.whatsMyk() << endl;
	cout << "a.whatsMyk(): " << a.whatsMyk() << endl;	
	
	cout << endl;
	
	Foo *b = new Foo(3);
	cout << "b->whatsMyk(): " << b->whatsMyk() << endl;
	
	cout << endl;
	
	Foo c;
	cout << "c.whatsMyk(): " << c.whatsMyk() << endl;

	cout << endl;

	Foo *d = new Foo();
	cout << "d->whatsMyk(): " << d->whatsMyk() << endl;
	
	return 0;

}
