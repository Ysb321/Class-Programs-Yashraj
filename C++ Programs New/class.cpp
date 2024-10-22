#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    char name[20];
    int age;

    public:
    void setData(char* name, int age)
    {
        this->age = age;
        strcpy(this->name, name);
    }

    void display()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age;
    }
};

int main()
{
    Person p;
    char name[20];
    int age;
    printf("Enter a Name of Person: ");
    gets(name);
    printf("Enter a Age of Person: ");
    scanf("%d", &age);
    p.setData(name, age);
    p.display();
}