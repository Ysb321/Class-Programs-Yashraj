#include <stdio.h>
#include <string.h>
struct employee{
    int empNo;
    char name[30];
    float salary;
}emp;
int main(){
    printf("\nEnter Employee Number:- ");
    scanf("%d", &emp.empNo);
    printf("\nEnter Employee Name:- ");
    scanf("%s", emp.name);
    printf("\nEnter Employee Salary:- ");
    scanf("%f", &emp.salary);
    printf("\nName of Employee is %s", emp.name);
    printf("\nNumber of Employee is %d", emp.empNo);
    printf("\nSalary of Employee is %f", emp.salary);
}