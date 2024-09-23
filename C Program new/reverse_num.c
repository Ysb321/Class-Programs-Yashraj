#include <stdio.h>
int main()
{
    int num, a, c, d, rev, sum;
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    a = num % 10;
    num = num /10;
    c = num % 10;
    d = num / 10;

    rev = a*100 + c*10 + d*1;
    printf("Reverse Number is: %d\n", rev);
    sum = a + c + d;
    printf("Sum of Number is: %d\n",sum);
    if(sum %2 == 0)
    { 
        printf("Sum is Even Number.");
    }
    else
    {
        printf("Sum is Odd Number.");
    }
}