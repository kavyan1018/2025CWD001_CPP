// person -> base class
// student -> Derived class

#include <iostream>
#include <string.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Ente your Name :";
        cin >> name;

        cout << "Ente your Age :";
        cin >> age;
    }
};

class Student : public Person // Derived class
{
    public:
        int marks;
        void getStudent()
        {

            cout << "Enter Your Marks :";
            cin >> marks;
        }

        void display()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Marks : " << marks << endl;
        }
};

int main()
{
    Student S;

    S.getPerson();   // inherited  function
    S.getStudent(); // Student function
    S.display();

    return 0;
}