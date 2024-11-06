#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    protected:
    char name[20];
    int age;

    public:
    Person()
    {
        strcpy(name, "NoName");
        age=0;
    }
    Person(char* name, int age)
    {
        this->age = age;
        strcpy(this->name, name);
    }
    void displayPerson()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }
};

class Employee: public Person
{
    private:
    int eid;
    float salary;

    public:
    Employee()
    {
        eid=0;
        salary=0.0;
    }
    Employee(char* name, int age, int eid, float salary): Person(name, age)
    {
        this-> eid = eid;
        this-> salary = salary;
    }
    void displayEmployee()
    {
        Person::displayPerson();
        cout<<"Employee ID is: "<<eid<<endl;
        cout<<"Salary is: "<<salary<<endl;
    }

};

int main()
{
    Employee emp;
    emp.displayEmployee();

    Employee emp1("Yashraj", 24, 2134, 23554.23);
    emp1.displayEmployee();
}
