#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* a = (int*) calloc(5,sizeof(int));
    int i;
    printf("Enter a 5 numbers\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d", a[i]);
    }
    
    a = (int*) realloc(a, 10);
    printf("Enter a 10 numbers\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++)
    {
        printf("%d", a[i]);
    }


    free(a);

}