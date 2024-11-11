#include<iostream>
#include<string.h>
using namespace std;

// Whenever class doesn't containts virtual that will be compiler polymorphism
class Base
{
    public:
    void display()
    {
        cout<<"Hello"<<endl;
    }

    void someFun()
    {
        cout<<"some"<<endl;
    }

};

class Derived: public Base
{
    public:
    void display()
    {
        cout<<"World"<<endl;
    }

    void someFunDerived()
    {
        cout<<"some function"<<endl;
    }
};

int main()
{
    // Base* ptr;
    // Base obj;
    // ptr = &obj;
    // ptr -> display();
    // ptr -> someFun();

    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr -> display();
    ptr -> someFun();
}