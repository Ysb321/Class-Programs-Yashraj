//Right-shifted Pyramid

#include<stdio.h>
int main()
{
    int space, i, j, num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        for(space=1; space<=num-i; space++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=num-1; i>=1; i--)
    {
        for(space=1; space<=num-i; space++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}