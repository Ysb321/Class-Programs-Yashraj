#include <stdio.h>
struct employee
{
    int empNo;
    char eName[20];
    float Salary;
};

int main()
{
    struct employee e, *emp;
    printf("\nEnter Employee Number name & salary\n");
    scanf("%d %s %f", &e.empNo, e.eName, &e.Salary);
    emp = &e;
    printf("\nDetails of employee are \n");
    printf("\nEmployee Number = %d", emp -> empNo); // -> refferal pointer
    printf("\nName = %s", emp -> eName);
    printf("\nSalary = %f", emp -> Salary);
    return 0;
    }