#include<stdio.h>
#include<string.h>

typedef struct Employees
{
    char name[50];
    int eid;
    float salary;
}Emp;

void scanData(Emp*, int);
void sendAddress(Emp*, Emp**, int);
void printData(Emp**, int);
int main()
{
    Emp e[5];
    Emp* ptr[5];
    scanData(e, 5);
    sendAddress(e, ptr, 5);
    printData(ptr, 5);
    
    return 0;
}

void scanData(Emp* e1, int size)
{   
    int i;
    printf("Enter Employees Details: \n");
    for(i=0; i<size; i++)
    {
        printf("Enter Name of %d Employee: \n",i+1);
        scanf("%s", e1[i].name);
        printf("Enter ID of %d Employee: \n",i+1);
        scanf("%d", &e1[i].eid);
        printf("Enter Salary of %d Employee: \n",i+1);
        scanf("%f", &e1[i].salary);
    }
}

void sendAddress(Emp* e2, Emp** ptr1, int size)
{   
    int i;
    for(i=0; i<size; i++)
    {
        ptr1[i] = &e2[i];
    }
}

void printData(Emp** ptr2, int size)
{   
    int i;
    for(i=0; i<size; i++)
    {
        printf("Name of %d Employee: %s\n", i+1, ptr2[i]->name);
        printf("ID of %d Employee: %d\n", i+1, ptr2[i]->eid);
        printf("Salary of %d Employee: %f\n", i+1, ptr2[i]->salary);
    }
}