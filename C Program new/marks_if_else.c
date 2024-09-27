#include<stdio.h>
int main()
{
    int phy, che, math, total;
    float percentage;
    printf("Enter a marks of Physics, Chemistry, Math\n");
    scanf("%d%d%d", &phy, &che, &math);

   if(phy<35 && che<35 && math<35)
    {
        printf("Student is Fail in all Subjects.");
    }
    else if(phy<35 && che<35 || che<35 && math<35 || phy<35 && math<35)
    {
        printf("Student is Fail in Two Subjects.");
    }
    else if(che<35)
    {
         printf("Student is Fail in Chemistry.");
    }
    else if(math<35)
    {
         printf("Student is Fail in Mathmatics.");
    }
    else if(phy<35)
    {
        printf("Student is Fail in Physics.");
    }
    else
    {
        printf("Student is Pass.\n");
        total = che + phy + math;
        percentage = (total/300.0)*100;
        printf("Percentage of Student is %f\n", percentage);

        if(percentage>=60)
        {
            printf("GRADE = A");
        }else if(percentage>=50 && percentage<60)
        {
            printf("GRADE = B");
        }else{
            printf("GRADE = C");
        }
    }
}