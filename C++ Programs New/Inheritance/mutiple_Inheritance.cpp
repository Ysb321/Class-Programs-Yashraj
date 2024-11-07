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

    void display()
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

    void display()
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

    void display()
    {
        A::display(); //for calling display function on A
        B::display();
        cout<<"C ="<<c<<endl;
        cout<<"Addition = "<<a+b+c<<endl;
    }
};

int main()
{
    // A obj;
    // obj.display();

    // A obj1(20);
    // obj1.display();

    // B obj2(40);
    // obj2.display();

    C obj4(10,10,30);
    obj4.display();
}


