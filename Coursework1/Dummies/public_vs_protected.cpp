#include <iostream>
using namespace std;

/*
public:

_All the class members declared under public will be available to everyone.

_The data members and member functions declared public can be accessed by other
classes too.

_The public members of a class can be accessed from anywhere in the program
using the direct member access (.) dot operator.

*/

/*
protected:

_Protected access modifier is similar to that of private access modifiers, the
difference is that the class member declared as "protected" are inaccessible
outside thae class but they can be accessed by anysubclass (derived class) of
that class.
*/

class Circle
{
  public:
    double radius;

    double compute_area()
    {
      return 3.14 * radius;
    }
};

class Parent
{
  protected:
    int id_protected;
};

class Child : public Parent
{
  public:
    void setId(int id)
    {
      id_protected = id;
    }

    void displayId()
    {
      cout << "id_protected is: " << id_protected << endl;
    }
};

int main()
{
  Circle obj;

  obj.radius = 5.5;

  cout << "Radius is: " << obj.radius << endl;
  cout << "Area is: " << obj.compute_area() << endl;

  cout << endl << "**********************" << endl << endl;

  Child obj1;

  obj1.setId(81);

  obj1.displayId();

	return 0;
}
