#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    int empId;
    char* name;
    char* project;
    float salary;
    public:
    Employee(int empId, char* name, char* project, float salary)
    {
        this -> empId = empId;
        int len = strlen(name);
        int len2 = strlen(project);
        this -> name = new char(len + 1);
        this -> project = new char(len2 + 1);
        strcpy(this -> name, name);
        strcpy(this -> project, project);
        this -> salary = salary;
    }

    ~Employee() {
        delete[] name;
        delete[] project;
    }

    void setEmpName(char* name)
    {
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
        cout<<"Employee Id: "<< empId <<endl;
        cout<<"Employee Name: "<< name <<endl;
        cout<<"Employee Project: "<< project <<endl;
        cout<<"Employee Salary: "<< salary <<endl;
    }

};

int main(){
    Employee E1(1, "Yashraj", "Hello World", 22.34);
    E1.display();
    E1.setEmpName("YashRaj");
    E1.display();
}