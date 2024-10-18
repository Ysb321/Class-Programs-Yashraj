#include <stdio.h>
int main()
{
    int a,b;
    int c = 20;
     c = 30;
     c=50;
     c=100;
    int *ptr = &b;
    printf("\nEnter any two numbers\n");
    scanf("%d%d", &a,&b);
    printf("\na = %d \nb = %d", a, b);
    printf("\nAddress of a = %u", &a);
    printf("\nAddress of b = %u", &b);
    printf("\nValue of a using * => %d", *(&a));
    printf("\nValue of a using * => %d", *(&b));
    printf("\nValue of c using * => %d", c);
    return 0;
}