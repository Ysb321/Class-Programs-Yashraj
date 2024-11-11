#include<iostream>
#include<string.h>
using namespace std;
// when two  function in Inheritance having same function name then overriding take place.
// In overiding function function name, argument type, return type must be  same  
class A
{
    protected:
    char prefix[20];
    public:
    A(char* prefix)
    {
        strcpy(this->prefix,prefix);
    }
    void display()
    {
        cout<<"Hello"<<" "<<prefix<<endl;
    }
    void someFun()
    {
        cout<<"some"<<endl;
    }
};

class B: public A
{
    int p;
    public:
    B(int p): A(prefix)
    {
        this-> p = p;
    }
    void display() // This display will be replace 
    {
        cout<<"World"<<" "<<prefix<<endl;
    } 
};

int main()
{
    B obj(12);
    obj.display();
    obj.someFun();
}