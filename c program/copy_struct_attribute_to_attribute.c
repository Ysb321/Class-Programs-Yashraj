#include <stdio.h>
#include <string.h>

typedef struct employee{
    int empNo;
    char name[40];
    char gender[10];
    float salary;
}Emp;

int main(){
    Emp Ram ={100, "Ram", "male", 4500}, Shyam;
    Shyam.empNo = Ram.empNo;
    strcpy(Shyam.name, Ram.name);
    strcpy(Shyam.gender, Ram.gender);
    Shyam.salary = Ram.salary;
    printf("\nFirst Employee");
    printf("\nEmpNo = %d", Ram.empNo);
    printf("\nname = %s", Ram.name);
    printf("\nGender = %s", Ram.gender);
    printf("\nSalary = %f", Ram.salary);
    printf("\n\nCOPIED INFO");
    printf("\nEmpNo = %d", Shyam.empNo);
    printf("\nName = %s", Shyam.name);
    printf("\nGender = %s", Shyam.gender);
    printf("\nSalary = %f", Shyam.salary);
    return 0;
}

