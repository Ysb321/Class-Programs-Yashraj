#include<iostream>
#include<string.h>
using namespace std;

// Singleton can create object only once.
class Singleton
{
    int a = 10;
    static Singleton* ptr; // memory for ptr will be create only once due to static keyword
    public:
    Singleton(){}

    static Singleton* getObject() // if class call then automaticaly static function will call it don't need a object to call
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