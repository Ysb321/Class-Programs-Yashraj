#include <iostream>
#include <string.h>
using namespace std;

class Test
{
    float marks;
    char grade;
    char name[20];

    public:
    void setTest(float marks, char grade, char *name)
    {
        this -> marks = marks;
        this -> grade = grade;
        strcpy(this -> name, name);
    }

    void display(){
        cout<< "Marks: "<<marks<<endl;
        cout<< "Grade: "<<grade<<endl;
        cout<< "Name: "<<name<<endl;
    }

    Test()
    {
        marks = 20.344; //float values
        grade ='A'; //character value
        strcpy(name, "Yashraj"); //string
    }
};

int main()
{
    Test t;
    t.display(); //It will call constructor.
}