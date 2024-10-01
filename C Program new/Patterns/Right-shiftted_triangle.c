//Right-shifted triangle
#include <stdio.h>
int main()
{
    int num, i , j, space;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        for(space=1; space<=num-i; space++)
        {
            printf("  "); //two spaces
        }
        for(j=1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}