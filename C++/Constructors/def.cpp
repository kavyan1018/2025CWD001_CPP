/*
Default Constructor
    syntax 
            class Classname{ 
            
                public : 
                    // obj cre

                    ini 
            }

*/


#include<iostream>
using namespace std;

class Student{

    public :
        string name;
        int age;


    // def consstructors 

    Student(){

        name = "Dilkash";
        age = 20;    
    }
};

int main()
{
    Student s1; // def cons called 

    cout << s1.name << endl;
    cout << s1.age << endl;

}