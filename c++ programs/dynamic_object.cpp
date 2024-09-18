#include <iostream>
#include <string.h>
using namespace std;

class Person{
    int *age;
    char* name;

    public:
    Person(int age, char* name)
    {
        cout << "constructor" <<endl;
        this -> age = new int (age);
        int len = strlen(name);
        this -> name = new char[len + 1];
        strcpy(this -> name, name);
    }

    void display()
    {
        cout<< "Name = "<< name <<endl;
        cout<< "Age = "<< *age;
    }

    ~Person()// if dynamic object deleted then that time it will run 
    {
        cout << "\ndestructor"<<endl; 
        delete age;
        delete [] name;
    }
};

int main()
{
    Person *ptr;
    ptr = new Person(20, "ABC");
    ptr -> display();
    delete ptr;
}