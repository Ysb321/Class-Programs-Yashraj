#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    int eid;
    char name[20];

    public:

    Employee(int eid, char* name)
    {
        this -> eid = eid;
        strcpy(this->name, name);
    }
    virtual float calculateSalary(int basic_sal)=0;

};

class Developer:public Employee
{
    char projectName[20];

    public:

    Developer(char* projectName, int eid, char* name): Employee(eid,name)
    {
        strcpy(this->projectName, projectName);
    }
    float calculateSalary(int basic_sal)
    {
        return(basic_sal+basic_sal*0.1+basic_sal*0.2+basic_sal*0.5);
    }
};

int main()
{
    Developer* ptr;
    Developer obj("project", 223, "sadf");
    ptr = &obj;
    // Developer obj("project", 223, "sadf");
    float result = ptr -> calculateSalary(234.566);
    cout<<"Result: "<<result<<endl;
}