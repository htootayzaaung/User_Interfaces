#include <iostream>
using namespace std;

/*
	_Suppose a "Person" class contains: "int getAge()" and "String getName()" methods
	
	_A "Lecturer" and "Student" classes inherits from a "Person" class.

	_A "Lecturer" class contains: "int getSalary()" methods
	
*/

class Person
{
	private:
		string name;
		int age;
	
	Person()
		:name("John Doe"), age(25)
	{}

	public:
		string getName()
		{
			return name;
		}
		
		int getAge()
		{
			return age;
		}
};

class Student: public Person 
{
	private:
		int studentLoan;

	public:
		Student()
		: studentLoan (3000)
		{};
		
		int getStudentLoan
		{
			return studentLoan;
		}

};

int main()
{
	Student student1;
	cout << student1.getStudentLoad() << endl;

	return 0;
}
