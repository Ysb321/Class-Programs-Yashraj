#include<stdio.h>
#include<string.h>

typedef struct Employee
{
    char name[50];
    int eid;
    float salary;
}Emp;

void structScan(Emp*);
void structPrint(Emp*);

int main()
{
    Emp e;
    structScan(&e);
    structPrint(&e);
    return 0;
}

void structScan(Emp* e)
{
    printf("Enter a Details: ");
    scanf("%s%d%f", e->name, &e->eid, &e->salary);
}

void structPrint(Emp* p)
{
    printf("Name of Employee: %s\n", p->name);
    printf("ID of Employee: %d\n", p->eid);
    printf("Salary of Employee: %f\n", p->salary);
}