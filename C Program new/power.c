#include<stdio.h>
int main()
{
    int a = 2;
    int b = 4;
    int power = 1, i;
    int original_a = a;
    for(i=1; i<=b; i++)
    {
        power = power * a;
    }
    printf("The Raise to Power:\n");
    printf(" %d ^ %d = %d", original_a, b, power);
}