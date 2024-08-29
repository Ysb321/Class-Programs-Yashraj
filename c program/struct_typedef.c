#include <stdio.h>
#include <string.h>
 typedef struct employee{
    int empNo;
    char name[15];
    float salary;
 }emp;
 int main(){
    emp e1; //assign another name e1
    e1.empNo = 10;
    strcpy(e1.name, "Yashraj");
    e1.salary = 100.00;
    printf("\nEmployee info");
    printf("\nEmployee Number:- %d", e1.empNo);
    printf("\nEmployee Name:- %s", e1.name);
    printf("\nEmployee Salary:- %.2f", e1.salary);
    return 0;
 }