#include <iostream>

using namespace std;

class Person_Original
{
    public:
        string name;
        int age;

        Person_Original (string n, int a)
            : name(n), age(a)
        {}
};

class Person_Modified
{
    private:
        string firstName;
        string lastName;
        int age;

    public:
        Person_Modified (string fname, string lname, int a)
            : firstName(fname), lastName(lname), age(a)
        {}

        void OOP_style_print()
        {
            cout << "firstName: " << firstName << endl;
            cout << "lastName: " << lastName << endl;
            cout << "age: " << age << endl;
            cout << endl;
        }
};

void print_person_Original(Person_Original p);


int main()
{
    Person_Original person1 {"Jack", 58};
    Person_Original person2 {"Fin", 34};
    Person_Original person3 {"Mike", 22};

    print_person_Original(person1);
    print_person_Original(person2);
    print_person_Original(person3);

    Person_Modified person4 {"David", "Beckham", 47};
    Person_Modified person5 {"Thierry", "Henry", 45};
    Person_Modified person6 {"Nemanja", "Vidic", 40};

    person4.OOP_style_print();
    person5.OOP_style_print();
    person6.OOP_style_print();

    return 0;
}

void print_person_Original(Person_Original p)
{
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl << endl;
}
