#include <stdio.h>
#include <string.h>
#define NEW_EMP {"", 0, 0.0f} //soring value in this format
struct employee
{
    char name[15];
    int empNo;
    float salary;
};
int main()
{
    struct employee emp1 = NEW_EMP;
    printf("\nEnter Employee Name\n");
    gets(emp1.name);
    printf("\nEnter Employee Number\n");
    scanf("%d", &emp1.empNo);
    printf("\nEnter Employee Salary\n");
    scanf("%f", &emp1.salary);
    //Employee Details
    printf("\nEmployee Name = %s", emp1.name);
    printf("\nEmployee Number = %d", emp1.empNo);
    printf("\nEmployee Salary = %.2f", emp1.salary);
    return 0;
}
