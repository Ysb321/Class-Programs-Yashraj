#include <iostream>
#include <string.h>
using namespace std;

class Person{
    // class is by default private 
    int age;
    char name[20];
    char gender;

    public:

    void setData(int a, char *n, char g) // we can write char n[20]
    {
        age =a;
        gender = g;
        strcpy(name, n);
    }
    void display()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};
 
 int main(){
    Person P;
    // P.age = 20;
    P.setData(20, "ABC", 'M');
    P.display();
    return 0;
 }