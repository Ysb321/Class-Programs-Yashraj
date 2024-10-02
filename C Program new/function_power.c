//Raise to Power in function.
#include<stdio.h>
int raise_power(int x, int y)
{
    int power = 1, i;
    int original_x = x;
    for(i=1; i<=y; i++)
    {
        power = power * x;
    }
    printf("The Raise to Power: ");
    printf("%d ^ %d = %d", original_x, y, power);
    return power;
};

int main()
{
    int a, b;
    printf("Enter a bottom number: ");
    scanf("%d", &a);
    printf("Enter a top number: ");
    scanf("%d", &b);
    raise_power(a,b);
    return 0;
}