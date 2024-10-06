#include<stdio.h>

void divide(float, float);

int main()
{
    float  a, b;
    printf("Enter a First number and Second number: \n");
    scanf("%f%f", &a, &b);
    divide(a,b);
    return 0;
}

void divide(float x, float y) // void will not return in main function.
{
    float division;
    division = x / y;
    printf("Division is %f", division); // output should be declare here not main.
}