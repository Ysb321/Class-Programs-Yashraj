#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int* rollNo;
    char* name;
    float* percentage;

    public:
    Student()
    {
      this -> rollNo = new int(20);
      this -> percentage = new float(80.5);
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

    ~Student()
    {
        delete [] this -> name;
        delete rollNo;
        delete percentage;

    }

    void setName(char* name)
    {
        int len = strlen(name);
        this -> name = new char[len + 1];
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
};
int main(){
    Student S; // Default Constructor
    S.display();
    cout<<"+++++++++"<<endl;
    Student s1(21, "Yashraj", 88.50); // Parameterize Constructor
    s1.display();
    cout<<"+++++++++"<<endl;
    Student s2(s1); // Copy Constructor
    s2.display();
    cout<<"+++++++++"<<endl;
    s1.setName("Yash"); // Setter
    s1.display();
    cout<<"++++++++"<<endl;
}