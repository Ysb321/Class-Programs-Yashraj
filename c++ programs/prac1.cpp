#include <iostream>
#include <string.h>
using namespace std;

class Employee {
    int empNo;
    float empSalary;
    char name[20];

    public:

    void setData(int num, float salary, char *name_ptr)
    {
        empNo = num;
        empSalary = salary;
        strcpy(name, name_ptr);
    } 

    void display()
    {
        cout<<"Employee Number: "<< empNo << " Employee Salary: "<< empSalary << " Employee Name: " << name << endl;
    }
};

int main(){
    Employee p;
    p.setData(30, 13.555, "Yashraj");
    p.setData(30, 13.555, "Yashraj");
    p.display();
    return 0;
}