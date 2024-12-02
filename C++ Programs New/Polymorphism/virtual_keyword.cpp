#include<iostream>
#include<string.h>
using namespace std;

class Person{
    protected:
    char name[20];
    char gender;

    public:

    Person(char* name, char gender)
    {
        this -> gender = gender;
        strcpy(this->name, name);
    }

    virtual void GetMessage(){ // virtual use for overriding of function;
        cout<<"This is Virtual function"<<endl;
    }
    void display()
    {
        cout<<"Name: "<<name<<" Gender: "<<gender<<endl;
    }
};

class Student : public Person{
    int rollNum;

    public:

    Student(char* name, char gender, int rollNum) : Person(name, gender)
    {
        this -> rollNum = rollNum;
    }
    void GetMessage()
    {
        cout<<"This Overriding function."<<endl;
    }
    void display()
    {
        Person::display();
        cout<<"Roll Number: "<<rollNum<<endl;
    }
};

int main(){
    Person *ptr;
    Student obj2("Yashraj", 'M', 22);
    Person obj("Yash", 'M');
    ptr = &obj2; // virtual read this line

    ptr -> GetMessage();
    obj.display();
    obj2.display();
    return 0; 
}
