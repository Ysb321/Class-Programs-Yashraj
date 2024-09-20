#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    protected:
    int age;
    char name[20];

    public:
    Person()
    {
        age = 0;
        strcpy(name, "Yashraj");
    }

    Person(int age, char* name)
    {
        this -> age = age;
        strcpy(this -> name, name);
    }
    void display()
    {
        cout<<"Base Class"<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

class Employee: public Person
{
    int eId;
    float salary;

    public:
    Employee()
    {
        eId = 0;
        salary =0.0;
        age = 10;
        strcpy(name, "Yash");
    }

    Employee(int age, char* name, int eId, float salary)
    {
        this -> age = age;
        strcpy(this -> name, name);
        this -> eId = eId;
        this -> salary = salary;
    }

    void displayEmp()
    {
        cout<<"Derived Class"<<endl;
        cout<<"Eid: "<<eId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Person P;
    P.display();
    cout<<"+++++++++"<<endl;
    Person P1(22, "YashraJ");
    P1.display();
    cout<<"+++++++++"<<endl;
    Employee E;
    E.displayEmp();
    cout<<"+++++++++"<<endl;
    Employee E1(21, "Yashraj", 223, 233.5);
    E1.displayEmp();
}