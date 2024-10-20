#include<stdio.h>

int main()
{   int* ptr;
    int a;
     a = 20;
     ptr = &a;
    // printf("printf %d", *ptr);
    // printf("%u/n", ptr);
    // scanf("%d", &*ptr);
    // printf("%d", *ptr);
    int**ptr1;
     ptr1 = &ptr;
    // scanf("%d", &**ptr1);
    printf("%d", *ptr);
}
