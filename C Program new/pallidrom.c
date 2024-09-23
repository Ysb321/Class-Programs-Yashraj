#include<stdio.h>
int main()
{
    int num, a, b, c, d, result;
    printf("Enter a three digit Number: ");
    scanf("%d", &num);

    a = num % 10; //  last number
    b = num /10; // first two number
    c = b % 10; 
    d = b / 10;

    result = a*100 + c*10 + d*1;

    if(num == result)
    {
        printf("Both Numbers are Equal.");
    }
    else
    {
        printf("Both Numbers are Different.");
    }
    return 0;
}