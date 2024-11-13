#include<iostream>
#include<string.h>
using namespace std;

// Singleton can create object only once.
class Singleton
{
    int a = 10;
    static Singleton* ptr;
    public:
    Singleton(){}

    static Singleton* getObject()
    {
        if(ptr == NULL)
        {
            ptr = new Singleton();
        }
        return ptr;
    }

    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};

Singleton* Singleton :: ptr = NULL;

int main()
{
    Singleton* p = Singleton :: getObject();
    p -> display();
}