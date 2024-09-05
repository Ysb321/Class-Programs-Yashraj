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
        strcpy( this -> name, name);
       this->  gender = gender;
    }
    void display()
    {
        cout<<" Name: " << this -> name;
        cout<<" age: " << age;
        cout<<" Gender: " << gender << endl << endl;
    }
};

class Employee{
    int empNum;
    char name[20];
    char gender;
    float salary;

    public:

    void setData(int empNum, char *name, char gender, float salary)
    {
       this -> empNum = empNum; 
        strcpy( this -> name, name);
       this->  gender = gender;
       this -> salary = salary;
    }
    void display()
    {
        cout<<" Employee Name: " << this -> name; 
        cout<<" Employee Number: " << empNum;
        cout<<" Employee Gender: " << gender;
        cout<<" Employee salary: " << salary << endl << endl;
    }
};

class Student{
    int age;
    char name[20];
    int rollNum;
    char grade;
    char stuGender;

    public:

    void setData(int age, char *name, int rollNum, char grade, char stuGender)
    {
       this -> age = age; 
        strcpy( this -> name, name);
        this -> grade = grade;
       this->  stuGender = stuGender;
    }
    void display()
    {
        cout<<" Student Name: " << this -> name;
        cout<<" Student Age: " << age;
        cout<<" Student Grade: " << grade;
        cout<<" Student Roll Number: " << rollNum;
        cout<<" Student Gender: " << stuGender << endl << endl;
    }
};

class Vehicle{
    char Type[10];
    int price;
    char name[20];
    char mfd[20];

    public:

    void setData(char *Type, char *name, char *mfd, int price)
    {
       strcpy(this -> Type, Type); 
        strcpy( this -> name, name);
        strcpy( this -> mfd, mfd);
       this->  price = price;
    }
    void display()
    {
        cout<<" Vehicle Type: " << this -> Type;
        cout<<" Company Name: " << name;
        cout<<" Manufacture Date: " << mfd;
        cout<<" Vehicle Price: " << price<<endl<<endl;
    }
};

class Library{
    int bookNum;
    int price;
    char name[20];
    char author[20];

    public:

    void setData(int bookNum, char *name, char *author, int price)
    {
       this -> bookNum = bookNum; 
        strcpy( this -> name, name);
        strcpy( this -> author, author);
       this->  price = price;
    }
    void display()
    {
        cout<<" Book Number: " << this -> bookNum;
        cout<<" Book Name: " << name;
        cout<<" Author Name: " << author;
        cout<<" Book Price: " << price<< endl << endl;
    }
};

class Company{
    char department[10];
    int rank;
    char name[20];
    char product[20];

    public:

    void setData(char *department, int rank, char *name, char *product)
    {
       strcpy(this -> department, department); 
        strcpy( this -> name, name);
       strcpy(this-> product, product);
       this -> rank = rank;
    }
    void display()
    {
        cout<<" Company Name: " << this -> name;
        cout<<" Company Department: " << department;
        cout<<" Company Product: " << product;
        cout<<" Industry Rank: " << rank << endl << endl;
    }
};

class Mobile{
    int ram;
    int camera;
    char name[20];
    char processor[20];

    public:

    void setData(int ram, int camera, char *name, char *processor)
    {
       this -> ram = ram; 
        strcpy( this -> name, name);
       strcpy(this-> processor, processor);
       this -> camera = camera;
    }
    void display()
    {
        cout<<" Mobile Brand Name: " << this -> name;
        cout<<" Camera in MP: " << camera;
        cout<<" Ram In GB: " << ram;
        cout<<" Processor Name: " << processor << endl << endl;
    }
};

class Laptop{
    int lapRam;
    int prize;
    char name[20];
    char lapProcessor[20];

    public:

    void setData(int lapRam, int prize, char *name, char *lapProcessor)
    {
       this -> lapRam = lapRam; 
       strcpy( this -> name, name);
       strcpy(this-> lapProcessor, lapProcessor);
       this -> prize = prize;
    }
    void display()
    {
        cout<<" Laptop Brand: " << this -> name;
        cout<<" Laptop Ram: " << lapRam;
        cout<<" Laptop Processor: " << lapProcessor;
        cout<<" Laptop Price: " << prize << endl << endl;
    }
};

class Shirts{
    char shiType[20];
    int price;
    char name[20];
    int size;

    public:

    void setData(char *shiType, char *name, int size, int price)
    {
       strcpy( this -> shiType, shiType); 
       strcpy( this -> name, name);
       this-> size = size;
       this -> price = price;
    }
    void display()
    {
        cout<<" Shirt Brand Name: " << this -> name;
        cout<<" Shirt Type: " << shiType;
        cout<<" Shirt Size: " << size;
        cout<<" Shirt Price: " << price << endl << endl;
    }
};

class Jobs{
    char jobType[20];
    int minSalary;
    char name[20];
    int maxSalary;

    public:

    void setData(char *jobType, char *name, int minSalary, int maxSalary)
    {
       this ->  maxSalary= maxSalary; 
       strcpy( this -> name, name);
       strcpy(this-> jobType, jobType);
       this -> minSalary = minSalary;
    }
    void display()
    {
        cout<<" Job Type: " << this -> jobType;
        cout<<" Job Title: " << name;
        cout<<" Job Minimum Salary: " << minSalary;
        cout<<" Job Maximum Salary: " << maxSalary << endl << endl;
    }
};


int main(){
    Person P;
    P.setData(20, "Yashraj", 'M');
    Employee E;
    E.setData(2001, "Yashraj B", 'M', 75000);
    Student S;
    S.setData(24, "YSB", 87, 'A', 'M');
    Vehicle V;
    V.setData("Car", "Audi", "22/01/2024", 2500000);
    Library Lib;
    Lib.setData(2331, "Agni Pankh", "ABJ Abdul Kalam", 250);
    Company C;
    C.setData("IT", 13, "TATA TCS", "Webpages");
    Mobile M;
    M.setData(8, 256, "Lava", "Snapdragon 7020");
    Laptop L;
    L.setData(16, 80000, "acer aspire 7", "AMD Ryzen 7 5000 series");
    Shirts Shi;
    Shi.setData("formal", "Gucci", 37, 14000);
    Jobs J;
    J.setData("IT", "Web Developer", 60000, 500000);

    P.display();
    E.display();
    S.display();
    V.display();
    Lib.display();
    C.display();
    M.display();
    L.display();
    Shi.display();
    J.display();
}