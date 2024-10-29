// #include<iostream>
// #include<string.h>
// using namespace std;

// class Student
// {
//     char* name;
//     int* rollNum;

//     public:
//     Student()
//     {
//         name = new char[3];
//         rollNum = new int;
//         strcpy(name, "NO Name");
//         *rollNum = 21; 
//     }
//     Student(char* name, int rollNum)
//     {
//         strcpy(this->name,name);
//         this->rollNum = rollNum; // it will not run rollNum of left side is pointer it gets address only.
//     }
//     void display()
//     {
//         cout<<"Name: "<<name<<"Roll Number: "<<rollNum<<endl;
//     }
// };

// int main()
// {

//     Student S;
//     S.display();
//     Student S1("ABC", 21);
//     S1.display();
//     return 0;
// }