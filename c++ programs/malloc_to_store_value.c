//malloc to store single value

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    printf("Enter any integer: ");
    scanf("%d", ptr);
    printf("The value is: %d", *ptr);
    free(ptr);
}

