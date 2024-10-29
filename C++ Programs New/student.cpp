#include<iostream>
#include<string.h>
using namespace std;

// constructor can be overload but not overwrite. example. default and paramitrize constructor.
// one constructor call one time only. 
//if there is any constructor then compiler will not provide constructor.
class Student
{
    char name[20];
    int rollNum;
    char gender;
   
    public:
    Student()
    {
        cout<<"Default Constructor Called"<<endl;
        strcpy(name, "NOName");
        rollNum = 21;
        gender = 'M';
    }
    Student(char* name, int rollNum, char gender)
    {
        cout<<"Parametrize Constructor Called"<<endl;
        strcpy(this->name, name);
        this->rollNum = rollNum;
        this->gender = gender;
    }
    void setData(char* name, int rollNum, char gender)
    {
        strcpy(this->name, name);
        this->rollNum = rollNum;
        this->gender = gender;
    }
    void setName(char* name)
    {
        strcpy(this->name, name);
    }
    void setRollNum(int rollNum)
    {
        this->rollNum = rollNum;
    }
    void setGender(char gender)
    {
        this->gender = gender;
    }
    char* getName()
    {
        return name;
    }
    int getrollNum()
    {
        return rollNum;
    }
    char getGender()
    {
        return gender;
    }
    void display()
    {
        cout<<"Name: "<<name<<" Roll Number: "<<rollNum<<" Gender: "<<gender<<endl;
    }
};

int main()
{
    Student s;
    s.display();
    // cout<<"Enter a Name: "<<endl;
    // cin>> name;
    // cout<<"Enter a Age: "<<endl;
    // cout<<"Enter a Gender: "<<endl;
    Student s1("Yashraj", 23, 'M');
    s1.display();

    // s.setData("Yashraj", 22, 'M');
    // s.display();
    // Student s1;
    // s1.display();
    return 0;
}