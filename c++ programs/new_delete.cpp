// Constructor & Destructor in c++
#include <iostream>
#include <string.h>
using namespace std;

class Person{
    char* name;
    int * age;

    public:

    Person(){
        name = new char[4]; // created dynamic array of size 4 last for null store 3 address
        strcpy(name, "ABC");
        age = new int;
        *age = 11;
    }

    Person(char* name, int age){
        int length = strlen(name); // calculate the length on string
      this ->  name = new char[length + 1]; // add one to length for null
        strcpy(this -> name, name);
        this -> age = new int (age);
    }

    void setName(char* name)
    {
        delete [] (this -> name); // delete original name for changing new name
        int len = strlen(name);
       this -> name = new char[len +1];
        strcpy(this -> name, name);
    }

    char* getName(){
        return name;
    }

    ~Person(){
        cout<<"\ndestructor for deletion of dynamic memory"; // It will print two times bcoz objects are two;
        delete [] name;
        delete age;
    }

    void display(){
        cout<<"Name is: "<< name<<endl;
        cout<<"Age is: "<< *age;
    }
};

int main(){
    Person P;
    Person p1("ABCzdasd", 12);
    // p1.setName("yashraj");
    P.setName("Yashraj");
    P.display();
    cout << endl;
    p1.display();
}
