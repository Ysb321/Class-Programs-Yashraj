#include <iostream>
#include <string.h>
using namespace std;

class Person{
    int age;
    char name[20];
    char gender;

    public:

    void setData(int age, char *name, char gender)
    {
        this -> age = age;
        strcpy(this -> name, name);
        this -> gender = gender;
    }

    void display()
    {
        cout << "Age: "<< age << endl;
        cout << "Name: "<< name << endl;
        cout << "Gender: "<< gender << endl << endl;
    }

    void setAge(int age){
        this -> age = age;
    }
    void setName(char *name){
        strcpy(this -> name, name);
    }
    void setGender(char gender){
        this -> gender = gender;
    }

    // int getAge()
    // {
    //     return age;
    // }

    // char *getName()
    // {
    //     return name;
    // }

    // char getGender()
    // {
    //     return gender;
    // }
    
};

int main(){
    Person P;
    P.setData(20, "Yashraj", 'M');
    P.display();
    P.setAge(22);
    P.display();
}