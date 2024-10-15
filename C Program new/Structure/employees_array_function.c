#include<stdio.h>
#include<string.h>

typedef struct Employees
{
    char name[20];
    int eid;
    float salary;
}Emp;

void scanData(Emp*, int);
void printData(Emp*, int);

int main()
{
    Emp e[5];
    scanData(e, 5);
    printData(e, 5);
    return 0;
}

void scanData(Emp* ptr, int size)
{
    int i;
    printf("Enter a Details: \n");
    for(i=0; i<size; i++)
    {
        printf("Enter a Name of %d Employees: ", i+1);
        scanf("%s", ptr[i].name); // here dot use for input value on index of ptr of name
        printf("Enter a ID of %d Employees: ", i+1);
        scanf("%d", &ptr[i].eid);
        printf("Enter a Salary %d of Employees: ", i+1);
        scanf("%f", &ptr[i].salary);
        printf("+++++++++++\n");
    }
}

void printData(Emp* ptr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("Name of %d Employee: %s\n", i+1, ptr[i].name);
        printf("ID of %d Employee: %d\n", i+1, ptr[i].eid);
        printf("Salary of %d Employee: %f\n", i+1, ptr[i].salary);
        printf("--------------\n");
    }
}