#include<iostream>
using namespace std;

// here is two base class and one derived class
class A{
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
        cout<<"A = "<<a<<endl;
    }
};

class B{
    protected: 
    int b;

    public:
    B(){
        b =0;
    }
    B(int b){
        this -> b = b;
    }

    void displayB()
    {
        cout<<"B = "<<b<<endl;
    }
};

class C: public A, public B{
    private:
    int c;

    public:
    C(){
        c = 0;
    }
    C(int a, int b, int c): B(b), A(a) // This can be interchange
    {
        this -> c = c;
    }

    void displayC()
    {
        A::displayA(); //for calling display function on A
        B::displayB();
        cout<<"C ="<<c<<endl;
        cout<<"Addition = "<<a+b+c<<endl;
    }
};

int main()
{
    A obj;
    obj.displayA();

    A obj1(20);
    obj1.displayA();

    B obj2(40);
    obj2.displayB();

    C obj4(10,10,30);
    obj4.displayC();
}


