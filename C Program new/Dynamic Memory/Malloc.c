#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* a = (int*) malloc(sizeof(int));
    int* b = (int*) malloc(sizeof(int));
    *a = 20;
    *b = 40;
    *a = *a - *b;
    *b = *b + *a;
    *a = *b - *a;

    printf("Swap NUmber of a: %d\n", *a);
    printf("Swap NUmber of b: %d", *b);

    free(a);
    free(b);
}