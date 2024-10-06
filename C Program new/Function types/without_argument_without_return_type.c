#include<stdio.h>

void multi(void); // no return type no argument.

int main()
{
    multi();
    return 0;
}

void multi()
{
    float multiplication, x, y; // all the argument must be mention inside function.
    printf("Enter a First number and Second number: \n");
    scanf("%f%f", &x, &y);
    multiplication = x * y;
    printf("Multiplication of %f and %f is %f", x, y, multiplication);
}