#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    int a;
    static char name[20];

    public:

    static void nameStatic(char* name2)
    {
        strcpy(name, name2);
    }

    static void display()
    {
        cout << "Name: " << name << endl;
    }
};

char Person:: name[20];

int main()
{
    Person::nameStatic("ABC");
    Person::display();
    return 0;
}