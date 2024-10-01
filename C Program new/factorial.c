#include<stdio.h>
int main()
{
    int fact = 1, i, num;
    printf("Enter a number for finding factorial: ");
    scanf("%d", &num);
    for(i=1; i<=num; ++i)
    {
        printf("%d", i);
        if(i < num)
        {
            printf(" * ");
        }
        fact = fact * i;
    }
        printf("\nThe factorial of %d is %d", num, fact);
}