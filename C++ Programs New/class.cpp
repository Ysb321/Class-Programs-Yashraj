#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    char name[20];
    int age;

    public:
    void setData(const char* name, int age)
    {
        this->age = age;
        strcpy(this->name, name);
    }

    void display()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age;
    }
};

int main()
{
    Person P;
    P.setData("ABC", 12);
    P.display();
}