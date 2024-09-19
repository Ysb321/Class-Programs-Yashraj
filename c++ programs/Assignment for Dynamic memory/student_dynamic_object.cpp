#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    char* name;
    int* rollNo;
    float* percentage;

    public:
    Student()
    {
        this -> rollNo = new int(5);
        this -> percentage = new float(88.7);
        this -> name = new char[8];
        strcpy(this -> name, "Yashraj");
    }

    Student(int rollNo, char* name, float percentage)
    {
        this -> rollNo = new int(rollNo);
        this -> percentage = new float(percentage);
        int len = strlen(name);
        this -> name = new char(len + 1);
        strcpy(this -> name, name);
    }

    Student(Student &K)
    {
        this -> rollNo = new int(*K.rollNo);
        this -> percentage = new float(*K.percentage);
        int len = strlen(K.name);
        this -> name = new char(len + 1);
        strcpy(this -> name, K.name);
    }

    void setName(char* name)
    {
        int len = strlen(name);
        this -> name = new char(len + 1);
        strcpy(this -> name, name);
    }

    char* getName()
    {
        return name;
    }


    void display()
    {
        cout<<"Name of Student: "<< name <<endl;
        cout<<"Roll Number of Student: "<< *rollNo <<endl;
        cout<<"Percentage of Student: "<< *percentage <<endl;
    }

    ~Student()
    {
        delete [] name;
        delete rollNo;
        delete percentage;
    }


};

int main()
{
    Student *ptr; // default constructor
    ptr = new Student();
    ptr -> display();
    cout<<"+++++++"<<endl;
    ptr = new Student(22, "Yashraj", 89.9); // paramiterize constructor
    ptr -> display();
    cout<<"++++++++"<<endl;
    Student *s2 = new Student(*ptr); // copy constructor
    s2 -> display();
    cout<<"++++++"<<endl;
    ptr -> setName("Yash"); // setter
    ptr -> display();
    cout<<"++++++"<<endl;
    delete ptr;
}

