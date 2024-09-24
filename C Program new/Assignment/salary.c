// Calculate Total Salary from Gross Salary 
#include <stdio.h>
int main()
{
    float salary, gross_salary, TA, DA, HRA, total_salary;

    printf("Enter a Monthly Salary of Employee:\n");
    scanf("%f", &salary);

    TA = salary * 0.10;
    DA = salary * 0.15;
    HRA = salary * 0.20;

    gross_salary = (salary+TA + DA + HRA) * 12; // 12 for yearly salary
    printf("Total Gross Salary of Employee per year is %f\n", gross_salary);

    if(gross_salary >= 250000)
    {
        total_salary = gross_salary - (gross_salary * 0.10);
        printf("Total Salary of Employee per year (deduct 10 percent) is %f\n", total_salary);
    }else
    {
        printf("Total Salary of Employee per year is %f\n", gross_salary);
    }
}