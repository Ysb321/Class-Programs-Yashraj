#include<stdio.h>
int main()
{
    int x = 2;
    int y = 4;
    int power = 1, i;
    int original_x = x;
    for(i=1; i<=y; i++)
    {
        power = power * x;
    }
    printf("The Raise to Power:\n");
    printf(" %d ^ %d = %d", original_x, y, power);
}