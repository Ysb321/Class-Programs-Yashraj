#include<iostream>
#include<string.h>
using namespace std;

// This Inheritance have parent class, child class and grand child class or many more generation 
class Person
{
    protected:
    int age;
    char name[20];

    public:
    Person()
    {
        age=0;
        strcpy(this->name, "NoName");
    }
    Person(int age, char* name)
    {
        this -> age = age;
        strcpy(this->name, name);
    }
    void displayPerson()
    {
        cout<<"The Name is: "<<name<<endl;
        cout<<"The Age is: "<<age<<endl;
    }
};

class Employee: public Person
{
    protected:
    float salary;

    public:
    Employee()
    {
        salary = 0.00;
    }
    Employee(int age, char* name, float salary): Person(age, name)
    {
        this->salary = salary;
    }
    void displayEmployee()
    {
        Person::displayPerson();
        cout<<"The Salary is: "<<salary<<endl;
    }
};

class Developer: public Employee
{
    private:
    int eid;

    public:
    Developer()
    {
        eid = 0;
    }
    Developer(int age, char* name, float salary, int eid): Employee(age, name, salary)
    {
        this -> eid = eid;
    }
    void displayDeveloper() 
    {
        Employee::displayEmployee();
        cout<<"The Employee Id is: "<<eid<<endl;
    }
};

int main()
{
    Developer d;
    d.displayDeveloper();

    Developer d1(24, "Yashraj", 234.23, 13323);
    d1.displayDeveloper();
    
    Employee e1(23, "Yash", 234.2);
    e1.displayEmployee();

}