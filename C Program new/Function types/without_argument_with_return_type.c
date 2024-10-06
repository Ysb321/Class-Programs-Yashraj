#include<stdio.h>

int sub(void); //no argument void means nothing there

int main()
{
    int minus;
    minus = sub();
    printf("Substraction is %d.", minus);
    return 0;
}

int sub()
{
    int sub, a, b;
    printf("Enter a First number and Second number: \n");
    scanf("%d%d", &a, &b);
    sub = a - b;
    return sub;
}