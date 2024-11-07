#include<iostream>
using namespace std;

// It is combination of mutiple and hierarchical inheritance. 
class A
{
    protected:
    int a;

    public:
    A(){
        a =0;
    }
    A(int a){
        this -> a = a;
    }

    void displayA()
    {
        cout<<"This is A"<<endl;
        cout<<"A = "<<a<<endl;
    }
};

class B: virtual public A // virtual is use to fixing diamond ring problem ,
// where diamond ring problem causes repeatation of same datamember of same class, in this program 'a' of Class A is causing problem 
{
    protected: 
    int b;

    public:
    B(){
        b =0;
    }
    B(int a,int b): A(a){
        this -> b = b;
    }

    void displayB()
    {
        cout<<"This is B"<<endl;
        cout<<"B = "<<b<<endl;
    }
};
class C: public virtual A // virtual can be interchange between public
{ 
    protected: 
    int c;

    public:
    C(){
        c =0;
    }
    C(int a, int c): A(a){
        this -> c = c;
    }

    void displayC()
    {
        cout<<"This is C"<<endl;
        cout<<"C = "<<c<<endl;
    }
};

class D: public B, public C
{
    private:
    int d;

    public:
    D(){
        d = 0;
    }
    D(int a, int b, int c, int d): A(a), B(a,b), C(a, c) // This can be interchange, parent class members should be pass.
    {
        this -> d = d;
    }

    void displayD()
    {
        cout<<"This is D"<<endl;
        A::displayA(); //for calling display function on A
        B::displayB();
        C::displayC();
        // cout<<"C ="<<c<<endl;
        cout<<"D: "<<d<<endl;
        cout<<"Addition = "<<a+b+c+d<<endl;
    }
};

int main()
{
    D obj4(10,15,30, 20);
    obj4.displayD();
}


