// Write a program in c using structure to accept employee number, name, salary  calculate total salary and display detail info. 

// Total salary=(salary-tax) +hra+TA+bonus.

// Tax=10℅ of salary. 
// hra=17℅ of salary. 
// TA=12℅ of salary. 
// bonus=6℅ if salary<=12000 otherwise 9℅. 


#include <stdio.h>
#include <string.h>
struct employee 
{
    int empNo;
    char name[50];
    float salary;
    float total_salary;
    float Tax, hra, bonus, TA;

}emp;
int main(){
    int i;
    for(i=1; i<=5; i++){
    printf("\nEnter employee Name:- ");
    scanf("%s", emp.name);
    printf("\nEnter employee Number:- ");
    scanf("%d", &emp.empNo);
    printf("\nEnter employee Salary:- ");
    scanf("%f", &emp.salary);

    emp.Tax = .10 * emp.salary;
    emp.hra = .17 * emp.salary;
    emp.TA = .12 * emp.salary;

    if(emp.salary <= 1200.0){
        emp.bonus = .06 * emp.salary;
    }else{
        emp.bonus = .09 * emp.salary;
    }

    emp.total_salary = (emp.salary - emp.Tax) + emp.hra + emp.TA + emp.bonus;
    
    printf("\nName Of employee is %s", emp.name);
    printf("\nNumber Of employee is %d", emp.empNo);
    printf("\nSalary of employee is %f", emp.salary);
    printf("\nTAX: %f", emp.Tax);
    printf("\nHRA: %f", emp.hra);
    printf("\nTA: %f", emp.TA);
    printf("\nBonus: %f", emp.bonus);
    printf("\nTotal Salary Of employee is %f\n", emp.total_salary);

    }

}