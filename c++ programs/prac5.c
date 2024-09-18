#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    *ptr = 20;
    printf("Now the value of a is: %d\n", a);

    int **ptr1;
    ptr1 = &ptr;
    **ptr1 = 25;
    printf("Now the value of a is: %d", a);

}