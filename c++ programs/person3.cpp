#include <iostream>
#include <string.h>
using namespace std;
 
class Person{
    int age;
    char name[20];
    char gender;

    public:

    void setData(int age, char *name, char gender)
    {
       this -> age = age; // 'this' pointer use to point towards global variable
        // name = n could not be happen bcoz name is constant variable 
        strcpy( this -> name, name);
       this->  gender = gender;
    }
    void display()
    {
        cout<<" Name: " << this -> name; // 'this' not requierd
        cout<<" age: " << age;
        cout<<" Gender: " << gender;
    }
};

int main(){
    Person P;
    int age;
    char name[20];
    char gender;

    cout<< "Enter age:\n";
    cin>> age;

    cout<< "Enter Name:\n";
    cin>> name;

    cout<< "Enter Gender:\n";
    cin>> gender;

    P.setData(age, name, gender);
    P.display();
}