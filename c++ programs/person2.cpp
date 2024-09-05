#include <iostream>
#include <string.h>
using namespace std;
 
class Person{
    int age; 
    char name[20];
    char gender;

    public:

    void setData(int a, char *n, char g)
    {
        age = a;
        // name = n could not be happen bcoz name is constant variable 
        strcpy(name, n);
        gender = g;
    }
    void display()
    {
        cout<<" Name: " << name;
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