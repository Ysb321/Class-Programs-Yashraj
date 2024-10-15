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
    Emp e[5];
    int i;
    printf("Enter 5 Employees Details: \n");
    for(i=0; i<5; i++)
    {
        printf("Enter a Name of %d Employee: ", i+1);
        scanf("%s", e[i].name);
        printf("Enter a ID of %d Employee: ", i+1);
        scanf("%d", &e[i].eid);
        printf("Enter a Salary of %d Employee: ", i+1);
        scanf("%f", &e[i].salary);
        printf("--------------\n");
    }
    for(i=0; i<5; i++)
    {
        printf("Name of %d Employee: %s\n", i+1, e[i].name);
        printf("ID of %d Employee: %d\n", i+1, e[i].eid);
        printf("Salary of %d Employee: %f\n", i+1, e[i].salary);
        printf("--------------\n");
    }
    return 0;

}
