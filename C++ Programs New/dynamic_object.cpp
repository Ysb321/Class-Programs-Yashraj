#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    char* name;
    int* rollNum;

    public:
    Student()
    {
        name = new char[3];
        rollNum = new int;
        strcpy(name, "NO Name");
        *rollNum = 21; 
    }
    Student(char* name, int rollNum)
    {
        int len = strlen(name);
        this-> name = new char[len+1];
        strcpy(this->name, name);
        this-> rollNum= new int;
        *(this->rollNum) = rollNum; 
    }
    ~Student()
    {
        cout<<"This is destructor";
        delete [] name;
        delete rollNum;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Roll Number: "<<*rollNum<<endl;
    }
};

int main()
{
    char name[20];
    int rollNum;
    Student* ptr1;
    ptr1= new Student;
    ptr1->display();
    cout<<"Enter a Name: "<<endl;
    cin>>name;
    cout<<"Enter a Roll Number: "<<endl;
    cin>>rollNum;
    Student* ptr2;
    ptr2= new Student(name, rollNum);
    ptr2->display();
    return 0;
}