#include <iostream>
#include <string.h>
using namespace std;

class Person {
private:
    char* name;
    int age;
    char* address;

    int isValidName(char* name) {
        for (int i = 0; name[i] != '\0'; i++) {
            if (!((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') || name[i] == ' ')) {
                return 0;
            }
        }
        return 1;
    }

    int isValidAge(int age) {
     if (!(age > 0 && age <= 100)) {
        return 0;
     } 
        return 1; 
    }

    int isValidAddress(char* address) {
        for (int i = 0; address[i] != '\0'; i++) {
            if (!((address[i] >= 'A' && address[i] <= 'Z') || 
                  (address[i] >= 'a' && address[i] <= 'z') || 
                  (address[i] >= '0' && address[i] <= '9') || 
                  address[i] == ' ')) {
                return 0;
            }
        }
        return 1;
    }

public:
    Person()
    {
        name = "No Name";
        age = 0;
        address = "NO Address";
    } 
    void setData(char* name, int age, char* address) {
        if (isValidName(name)) {
            int len = strlen(name);
            this -> name = new char[len+1];
            strcpy(this->name,name);
        } else {
            cout << "Invalid name. Only letters and spaces are allowed."<<endl;
        }

        if (isValidAge(age)) {
            this->age = age;
        } else {
            cout << "Invalid age. Age should be between 1 and 100."<<endl;
        }

        if (isValidAddress(address)) {
            int len = strlen(address);
            this -> address = new char[len+1];
            strcpy(this->address,address);
        } else {
            cout << "Invalid address. Symbols are not allowed."<<endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {

    char name[20];
    int age;
    char address[20];
    cout<<"Enter a Name of Person: "<<endl;
    gets(name);
    cout<<"Enter a Age of Person: "<<endl;
    cin>>age;
    cout<<"Enter a Address of Person: "<<endl;
    fflush(stdin);
    gets(address);

    Person P;
    P.setData(name, age, address);
    P.display();
    return 0;
}
