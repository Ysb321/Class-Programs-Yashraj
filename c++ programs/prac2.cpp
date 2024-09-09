#include <iostream>
#include <string.h>
using namespace std;

class Cars 
{
    char carName[10];
    int carNum;
    float carReg;

    public:
    void setData(char *carName, int carNum, int carReg)
    {
        this -> carNum = carNum;
        this -> carReg = carReg;
        strcpy(this -> carName, carName);
    }
    void display()
    {
        cout<< "This is Car Name:"<< carName <<endl;
        cout<< "This is Car Number:"<< carNum <<endl;
        cout<< "This is Car Register Number:"<< carReg <<endl;
    }
    void setName(char *carName)
    {
        strcpy(this -> carName, carName);
    }

    char *getName()
    {
        return carName;
    }
};

int main(){
    char carName[10];
    int carNum;
    float carReg;

    cout<< "Enter a Car Name" << endl;
    cin>> carName;
    cout<< "Enter a Car Number" << endl;
    cin >> carNum;
    cout<< "Enter a Car Register Number" << endl;
    cin >> carReg;

    Cars C;
    C.setData(carName, carNum, carReg);
    C.display();
    C.setName("Audi");
    C.display();
}