#include<iostream>
using namespace std;

// one base class and 2 derived class
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

    void display()
    {
        cout<<"This is A"<<endl;
        cout<<"A = "<<a<<endl;
    }
};

class B: public A
{
    private:
    int b;

    public:
    B(){
        b =0;
    }
    B(int b){
        this -> b = b;
    }

    void display()
    {
        cout<<"This is B"<<endl;
        cout<<"B = "<<b<<endl;
    }
};
class C: public A
{
    private:
    int c;

    public:
    C(){
        c =0;
    }
    C(int c){
        this -> c = c;
    }

    void display()
    {
        cout<<"This is C"<<endl;
        cout<<"C = "<<c<<endl;
    }
};

int main()
{
    B obj1(12);
    obj1.display();

    C obj2(11);
    obj2.display();
}