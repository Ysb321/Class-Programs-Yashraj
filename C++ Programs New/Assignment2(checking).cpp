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
    int setData(char* name, int age, char* address) {
        int flag = 0;
        if (isValidName(name)) {
            int len = strlen(name);
            this -> name = new char[len+1];
            strcpy(this->name,name);
        } else {
            cout << "Invalid name. Only letters and spaces are allowed."<<endl;
            flag=1;
        }

        if (isValidAge(age)) {
            this->age = age;
        } else {
            cout << "Invalid age. Age should be between 1 and 100."<<endl;
            flag=2;
        }

        if (isValidAddress(address)) {
            int len = strlen(address);
            this -> address = new char[len+1];
            strcpy(this->address,address);
        } else {
            cout << "Invalid address. Symbols are not allowed."<<endl;
            flag=3;
        }
        return flag;
    }

    void setName(char* name)
    {
        if(isValidName(name))
        {
            int len = strlen(name);
            this -> name = new char[len+1];
            strcpy(this->name, name); 
        }else{
            cout<<"This is not a valid name."<<endl;
        }
    }

    void setAddress(char* address)
    {
        if(isValidAddress(address))
        {
            int len = strlen(address);
            this -> address = new char[len+1];
            strcpy(this->address, address); 
        }else{
            cout<<"This is not a valid address."<<endl;
        }
    }

    void setAge(int age)
    {
        if(isValidAge(age))
        {
            this -> age = age; 
        }else{
            cout<<"This is not a valid age."<<endl;
        }
    }
    

    char* getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    char* getAdress()
    {
        return address;
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

    switch(P.setData(name, age, address))
    {
        case 1:
          cout<<"Enter a New Name"<<endl;
          gets(name);
          P.setName(name);
          break;
        case 2:
          cout<<"Enter a New Age"<<endl;
          cin>>age;
          P.setAge(age);
          break;
        case 3:
          cout<<"Enter a New Address"<<endl;
          fflush(stdin);
          gets(address);
          P.setAddress(address);
          break;
        default:
          P.setData(name, age, address);
          break;
    }
    
    P.display();
    return 0;
}
