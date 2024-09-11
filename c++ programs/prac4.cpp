#include <iostream>
#include <string.h>
using namespace std;

class Person{
    char name[20];
    char gender;
    int number;

    public:
    Person(){
        strcpy(this -> name, "Yashraj");
        gender = 'M';
        number = 123445;
    }

    Person(char *name, char gender, int number){
        strcpy(this -> name, name);
        this -> gender = gender;
        this -> number = number;
    }

    Person(Person &P1){
        strcpy(this -> name, P1.name);
        this -> gender = P1.gender;
        this -> number = P1.number;

    }

    void display(){
        cout << "Name of Person is: "<< name << endl;
        cout << "Name of Person Gender is: "<< gender << endl;
        cout << "Name of Person Number is: "<< number << endl;
    }
};

int main(){
    Person P;
    P.display();

    Person P1("Yash", 'M', 23244);
    P1.display();

    Person P2(P1);
    P2.display();

}