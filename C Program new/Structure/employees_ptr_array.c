#include<stdio.h>
#include<string.h>

typedef struct Employees
{
    char name[50];
    int eid;
    float salary;
}Emp;

int main()
{
    Emp e[5];
    Emp* ptr[5];
    int i;
    printf("Enter Employees Details: \n");
    for(i=0; i<5; i++)
    {
        printf("Enter Name of %d Employee: \n",i+1);
        scanf("%s", e[i].name);
        printf("Enter ID of %d Employee: \n",i+1);
        scanf("%d", &e[i].eid);
        printf("Enter Salary of %d Employee: \n",i+1);
        scanf("%f", &e[i].salary);
    }
    for(i=0; i<5; i++)
    {
        ptr[i] = &e[i];
    }
    for(i=0; i<5; i++)
    {
        printf("Name of %d Employee: %s\n", i+1, ptr[i]->name);
        printf("ID of %d Employee: %d\n", i+1, ptr[i]->eid);
        printf("Salary of %d Employee: %f\n", i+1, ptr[i]->salary);
    }
    return 0;
}