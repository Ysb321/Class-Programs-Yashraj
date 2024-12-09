#include<iostream>
using namespace std;

// method or function overloading
// Function Overloading: Functions with the same name but different parameters.
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

    void display() // zero argument
    {
        cout<<"A = "<<a<<endl;
    }

};

class B: public A{
    private: 
    int b;

    public:
    B(){
        b =0;
    }
    B(int a, int b): A(a){
        this -> b = b;
    }

    void display(int prefix) // one argument, this is overloading
    {
        cout<<prefix<<" "<<a<<endl;
    }
};

int main()
{
    B obj4(10,30);
    obj4.display(12);
    obj4.A::display();
}


