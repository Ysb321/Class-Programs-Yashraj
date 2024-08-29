#include<stdio.h>
#include<string.h>
struct employee
{
    int empNo;
    char eName[15];
    float sal;
}emp1;
int main(){
    emp1.empNo = 10;
    strcpy(emp1.eName,"yashraj");
    emp1.sal = 412.22;
    printf("**Employee1**");
    printf("\nempNo:- %d", emp1.empNo);
    printf("\neName:- %s", emp1.eName);
    printf("\nesal:- %.2f", emp1.sal);
}