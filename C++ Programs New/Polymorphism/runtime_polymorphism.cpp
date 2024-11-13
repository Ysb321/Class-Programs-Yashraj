#include<iostream>
#include<string.h>
using namespace std;

//Whenever virtual is used in class that will be runtime polymorphism
class Base
{
    public:
virtual void display() // when virtual use in class that class will be polymorphic class.
    {
        cout<<"Base"<<endl;
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
        cout<<"Derived"<<endl;
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
    ptr = &obj; // address of obj will return to pointer ptr. Now this line will read because of virtual is used in base class
    ptr -> display();
    ptr -> someFun();
}