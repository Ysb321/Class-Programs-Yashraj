#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, *b, sum;

    a = (int *)malloc(sizeof(int));
    b = (int *)malloc(sizeof(int));

    printf("Enter first Number: ");
    scanf("%d", a);

    printf("Enter Second Number: ");
    scanf("%d", b);

    sum = *a + *b;

    printf("Addition of Numbers: %d", sum);

    free(a);
    free(b);
}