// pyramid 
#include<stdio.h>
int main()
{
    int num, i, j, space;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for(i=1; i<= num; i++)
    {
        for(space = 1; space<=num-i; space++)
        {
            printf("  "); //two spaces
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}