#include <stdio.h>
struct employee 
{
    int empNo;
    char eName[20];
    float Salary, TAX, Total_Salary;
};

int main(){
    struct employee e, *ptr;
    printf("Enter a Employee Number, Employee Name, Salary Name\n");
    scanf("%d %s %f", &e.empNo, e.eName, &e.Salary);
    e.TAX = e.Salary * .50;
    e.Total_Salary = e.Salary - e.TAX;
    ptr = &e;
    printf("Employee Number is %d\n", ptr -> empNo);
    printf("Employee Name is %s\n", ptr -> eName);
    printf("Emplyee Salary is %f\n", ptr -> Salary);
    printf("Emplyee Toatal Salary is %f\n", ptr -> Total_Salary);

}