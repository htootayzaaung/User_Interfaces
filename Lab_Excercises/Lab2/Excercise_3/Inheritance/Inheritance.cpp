#include <iostream>
using namespace std;

class Bar
{
  virtual string getName()
  {
    return "I am Bar";
  }
};

class Foo : public Bar      //the public here says that we can cast from a "Foo" to a "Bar"
{                           //any objects created can be called with either a "Foo" object or a "Bar" object
  string getName()
  {
    return "I am Foo";
  }
};
