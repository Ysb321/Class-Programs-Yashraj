#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    int* empId;
    char* name;
    char* project;
    float* salary;

    public:
    Employee(){
        cout<<"default Constructor"<<endl;
        empId = new int(20);
        name = new char[8];
        strcpy(name, "yashraj");
        project = new char[5];
        strcpy(project, "yash");
        salary = new float(23.6);

    }
    Employee(int empId, char* name, char* project, float salary)
    {
         cout<<"Paramiterise Constructor"<<endl;
        this -> empId = new int(empId);
        int len = strlen(name);
        int len2 = strlen(project);
        this -> name = new char(len + 1);
        this -> project = new char(len2 + 1);
        strcpy(this -> name, name);
        strcpy(this -> project, project);
        this -> salary = new float(salary);
    }

    Employee(Employee &k)
    {
        cout<<"Copy Constructor"<<endl;
        this -> empId = new int(*k.empId);
        int len = strlen(k.name);
        int len2 = strlen(k.project);
        this -> name = new char(len + 1);
        this -> project = new char(len2 + 1);
        strcpy(this -> name, k.name);
        strcpy(this -> project, k.project);
        this -> salary = new float(*k.salary);
    }

    ~Employee() {
        cout<<"\nDestructor"<<endl;
        delete empId;
        delete salary;
        delete[] name;
        delete[] project;
    }

    void setEmpName(char* name)
    {
        cout<<"Setter"<<endl;
        delete[] this->name;
        int len = strlen(name);
        this -> name = new char(len + 1);
        strcpy(this -> name, name);
    }

    char* getEmpName()
    {
        return name;
    }

    void display()
    {
        cout<<"Employee Id: "<< *empId <<endl;
        cout<<"Employee Name: "<< name <<endl;
        cout<<"Employee Project: "<< project <<endl;
        cout<<"Employee Salary: "<< *salary <<endl;
    }

};

int main(){
    Employee E;
    E.display();
    cout<<"+++++++"<<endl;
    Employee *ptr = new Employee(1, "Yashraj", "Hello World", 22.34);
    ptr -> display();
    cout<<"+++++++"<<endl;
    Employee E2(*ptr);
    E2.display();
    cout<<"+++++++"<<endl;
    ptr -> setEmpName("YashRaj");
    ptr -> display();
    delete ptr;
}