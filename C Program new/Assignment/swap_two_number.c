// Swaping of Two Numbers without using Thired number.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b; 

    printf("swapped value of First Number is %d\n", a);
    printf("swapped value of Second Number is %d", b);

    return 0;
}