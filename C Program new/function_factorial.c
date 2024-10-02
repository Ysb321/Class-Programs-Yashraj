//Factorial in Function
#include <stdio.h>
int fact(int num)
{
   int fact = 1;
   for(int i = 1; i<=num; i++)
   {
        fact = fact * i;
   }   
    return fact;
};

int main()
{
    int num, factorial;
    printf("Enter a Number: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("The Factorial of Number %d! is %d", num, factorial);
    return 0;
}