// Write a program in c using structure to accept emp[i]loyee number, name, salary  calculate total salary and display detail info. 

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

}emp[5];
int main(){
    int i;
    for(i=1; i<=5; i++){
    printf("\nEnter employee Name:- ");
    scanf("%s", emp[i].name);
    printf("\nEnter employee Number:- ");
    scanf("%d", &emp[i].empNo);
    printf("\nEnter employee Salary:- ");
    scanf("%f", &emp[i].salary);

    emp[i].Tax = .10 * emp[i].salary;
    emp[i].hra = .17 * emp[i].salary;
    emp[i].TA = .12 * emp[i].salary;

    if(emp[i].salary <= 1200.0){
        emp[i].bonus = .06 * emp[i].salary;
    }else{
        emp[i].bonus = .09 * emp[i].salary;
    }

    emp[i].total_salary = (emp[i].salary - emp[i].Tax) + emp[i].hra + emp[i].TA + emp[i].bonus;
    
    }
    for (int i = 0; i<5; i++)
    {
    
    printf("\nName Of employee is %s", emp[i].name);
    printf("\nNumber Of employee is %d", emp[i].empNo);
    printf("\nSalary of employee is %f", emp[i].salary);
    printf("\nTAX: %f", emp[i].Tax);
    printf("\nHRA: %f", emp[i].hra);
    printf("\nTA: %f", emp[i].TA);
    printf("\nBonus: %f", emp[i].bonus);
    printf("\nTotal Salary Of employee is %f\n", emp[i].total_salary);

    }

}