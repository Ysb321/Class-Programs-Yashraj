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
        cout<<" Name: " << this -> name << endl;
        cout<<" age: " << age <<endl;
        cout<<" Gender: " << gender << endl << endl;
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

    int getAge()
    {
        return age;
    }

    char *getName()
    {
        return name;
    }

    char getGender()
    {
        return gender;
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
        cout<<" Employee Name: " << this -> name <<endl; 
        cout<<" Employee Number: " << empNum <<endl;
        cout<<" Employee Gender: " << gender <<endl;
        cout<<" Employee salary: " << salary << endl << endl;
    }

    void setEmpNum(int empNum){
        this -> empNum = empNum;
    }
    void setEmpName(char *name){
        strcpy(this -> name, name);
    }
    void setEmpGender(char gender){
        this -> gender = gender;
    }

    void setSalary(int salary)
    {
        this -> salary = salary;
    }

    int getEmpNum()
    {
        return empNum;
    }

    char *getEmpName()
    {
        return name;
    }

    char getEmpGender()
    {
        return gender;
    }

    int getEmpSalary()
    {
        return salary;
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
        cout<<" Student Name: " << this -> name <<endl;
        cout<<" Student Age: " << age <<endl;
        cout<<" Student Grade: " << grade <<endl;
        cout<<" Student Roll Number: " << rollNum <<endl;
        cout<<" Student Gender: " << stuGender << endl << endl;
    }

    void setStuAge(int age){
        this -> age = age;
    }
    void setStuName(char *name){
        strcpy(this -> name, name);
    }
    void setStuRollNum(int rollNum){
        this -> rollNum = rollNum;
    }

    void setStuGrade(char grade)
    {
        this -> grade = grade;
    }
    void setStuGender(char stuGender)
    {
        this -> stuGender = stuGender;
    }

    int getStuAge()
    {
        return age;
    }

    char *getStuName()
    {
        return name;
    }

    int getStuRollNum()
    {
        return rollNum;
    }

    char getStuGrade()
    {
        return grade;
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
        cout<<" Vehicle Type: " << this -> Type <<endl;
        cout<<" Company Name: " << name <<endl;
        cout<<" Manufacture Date: " << mfd <<endl;
        cout<<" Vehicle Price: " << price<<endl<<endl;
    }

    void setVehType(char *Type){
        strcpy(this -> Type, Type);
    }
    void setVehName(char *name){
        strcpy(this -> name, name);
    }
    void setVehMFD(char *mfd){
        strcpy(this -> mfd, mfd);
    }

    void setVehPrice(int price)
    {
        this -> price = price;
    }

    char *getVehType()
    {
        return Type;
    }

    char *getVehName()
    {
        return name;
    }

    char *getVehMFD()
    {
        return mfd;
    }

    int getVehPrice()
    {
        return price;
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
        cout<<" Book Number: " << this -> bookNum <<endl;
        cout<<" Book Name: " << name <<endl;
        cout<<" Author Name: " << author <<endl;
        cout<<" Book Price: " << price<< endl << endl;
    }

    void setBookNum(int bookNum){
        this -> bookNum = bookNum;
    }
    void setBookAuthor(char *author){
        strcpy(this -> author, author);
    }
    void setBookName(char *name){
        strcpy(this -> name, name);
    }

    void setBookPrice(int price)
    {
        this -> price = price;
    }

    int getBookNum()
    {
        return bookNum;
    }

    char *setBookAuthor()
    {
        return author;
    }

    char *setBookName()
    {
        return name;
    }

    int getBookPrice()
    {
        return price;
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
        cout<<" Company Name: " << this -> name <<endl;
        cout<<" Company Department: " << department <<endl;
        cout<<" Company Product: " << product <<endl;
        cout<<" Industry Rank: " << rank << endl << endl;
    }

    void setComDepartment(char *department){
        strcpy(this -> department, department);
    }
    void setComProduct(char *product){
        strcpy(this -> product, product);
    }
    void setComName(char *name){
        strcpy(this -> name, name);
    }

    void setComRank(int rank)
    {
        this -> rank = rank;
    }

    char *getComDeparment()
    {
        return department;
    }

    char *getComName()
    {
        return name;
    }

    int getComRank()
    {
        return rank;
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
        cout<<" Mobile Brand Name: " << this -> name <<endl;
        cout<<" Camera in MP: " << camera <<endl;
        cout<<" Ram In GB: " << ram <<endl;
        cout<<" Processor Name: " << processor << endl << endl;
    }

    void setMobPro(char *processor){
        strcpy(this -> processor, processor);
    }
    void setMobName(char *name){
        strcpy(this -> name, name);
    }
    void setMobRam(int ram){
        this -> ram, ram;
    }

    void setMobCam(int camera)
    {
        this -> camera = camera;
    }

    char *getMobPro()
    {
        return processor;
    }

    char *getMobName()
    {
        return name;
    }

    int getMobRam()
    {
        return ram;
    }

    int getMobCam()
    {
        return camera;
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
        cout<<" Laptop Brand: " << this -> name <<endl;
        cout<<" Laptop Ram: " << lapRam <<endl;
        cout<<" Laptop Processor: " << lapProcessor <<endl;
        cout<<" Laptop Price: " << prize << endl << endl;
    }

    void setLapRam(int lapRam){
        this -> lapRam = lapRam;
    }
    void setLapName(char *name){
        strcpy(this -> name, name);
    }
    void setLapPro(char *lapProcessor){
        strcpy(this -> lapProcessor, lapProcessor);
    }

    void setLapPrice(int prize)
    {
        this -> prize = prize;
    }

    char *getLapName()
    {
        return name;
    }

    char *getLapProcessor()
    {
        return lapProcessor;
    }

    int getLapRam()
    {
        return lapRam;
    }

    int getLapPrice()
    {
        return prize;
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
        cout<<" Shirt Brand Name: " << this -> name <<endl;
        cout<<" Shirt Type: " << shiType <<endl;
        cout<<" Shirt Size: " << size <<endl;
        cout<<" Shirt Price: " << price << endl << endl;
    }

    void setShiType(char *shiType){
        strcpy(this -> shiType, shiType);
    }
    void setShiName(char *name){
        strcpy(this -> name, name);
    }
    void setShiSize(int size){
        this -> size = size;
    }

    void setShiPrice(int price)
    {
        this -> price = price;
    }

    char *getShiType()
    {
        return shiType;
    }

    char *getShiName()
    {
        return name;
    }

    int getShiSize()
    {
        return size;
    }

    int getShiPrice()
    {
        return price;
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
        cout<<" Job Type: " << this -> jobType <<endl;
        cout<<" Job Title: " << name <<endl;
        cout<<" Job Minimum Salary: " << minSalary <<endl;
        cout<<" Job Maximum Salary: " << maxSalary << endl << endl;
    }

    void setJobType(char *jobType){
        strcpy(this -> jobType, jobType);
    }
    void setJobName(char *name){
        strcpy(this -> name, name);
    }
    void setMinSal(int minSalary){
        this -> minSalary = minSalary;
    }

    void setMaxSal(int maxSalary)
    {
        this -> maxSalary = maxSalary;
    }

    char *getJobType()
    {
       return jobType;
    }

    char *getJobName()
    {
        return name;
    }

    int getMinSal()
    {
        return minSalary;
    }

    int getMaxSal()
    {
        return maxSalary;
    }
};


int main(){
    Person P;
    P.setData(20, "Yashraj", 'M');
    P.display();
    P.setAge(24);
    P.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Employee E;
    E.setData(2001, "Yashraj B", 'M', 75000);
    E.display();
    E.setEmpNum(24001);
    E.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Student S;
    S.setData(24, "YSB", 87, 'A', 'M');
    S.display();
    S.setStuAge(27);
    S.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Vehicle V;
    V.setData("Car", "Audi", "22/01/2024", 2500000);
    V.display();
    V.setVehType("Truck");
    V.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Library B;
    B.setData(2331, "Agni Pankh", "ABJ Abdul Kalam", 250);
    B.display();
    B.setBookPrice(500);
    B.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Company C;
    C.setData("IT", 13, "TATA TCS", "Webpages");
    C.display();
    C.setComDepartment("Software");
    C.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Mobile M;
    M.setData(8, 256, "Lava", "Snapdragon 7020");
    M.display();
    M.setMobPro("Mediatech 7730");
    M.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Laptop L;
    L.setData(16, 80000, "acer aspire 7", "AMD Ryzen 7 5000 series");
    L.display();
    L.setLapPro("Intel i7 12th gen");
    L.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Shirts T;
    T.setData("formal", "Gucci", 37, 14000);
    T.display();
    T.setShiName("Reymond");
    T.display();
    cout<<"+++++++++++++++"<<endl<<endl;

    Jobs J;
    J.setData("IT", "Web Developer", 60000, 500000);
    J.display();
    J.setJobName("Software Developer");
    J.display();

}