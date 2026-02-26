// parameterized constructor

/*
    syntax 
            class Classname{ 
            
                public : 

                    className(datatype parameters){
                        ini 
                    }
                    
            }

*/


#include<iostream>
using namespace std;

class Student{

    public :
        string name;
        int age;


    // para constructors 

    Student(string n,int a){

        name = n;
        age = a;    
    }
};

int main()
{
    Student s1("Vishwesh" , 21); // para cons called 

    cout << s1.name << endl;
    cout << s1.age << endl;

}