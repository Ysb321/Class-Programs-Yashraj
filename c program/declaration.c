#include <stdio.h>
int Add(int x, int y)
{
    return (x + y);
}
int Sub(int x, int y)
{
    return (x - y);
}
int Divide(int x, int y)
{
    return (x / y);
}
int Multi(int x, int y)
{
    return (x * y);
}
int main()
{
    int x,y;
    printf("\n Enter any two numbers \n");
    scanf("%d%d", &x, &y);
    int result = Add(x,y); // Calling function
    int result2 = Sub(x,y);
    float result3 = Divide(x,y);
    int result4 = Multi(x,y);
    printf("\n The Result %d + %d = %d", x, y, result);
    printf("\n The Result %d - %d = %d", x, y, result2);
    printf("\n The Result %d / %d = %.2f", x, y, result3);
    printf("\n The Result %d * %d = %d", x, y, result4);
    return 0;
}