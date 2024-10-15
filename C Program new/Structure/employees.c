#include<stdio.h>
#include<string.h>
typedef struct Employee
{
    char name[20];
    int eid;
    float salary;
}Emp;

int main()
{
    Emp e;
    printf("Enter a Name of Employee: ");
    gets(e.name);
    printf("Enter a Employee Id: ");
    scanf("%d", &e.eid);
    printf("Enter a Employee Salary: ");
    scanf("%f", &e.salary);
    printf("Name of Employee: %s\n", e.name);
    printf("Employee ID: %d\n", e.eid);
    printf("Employee Salary: %f\n", e.salary);
    return 0;
}