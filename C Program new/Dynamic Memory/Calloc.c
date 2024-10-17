#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* a = (int*) calloc(5,sizeof(int));
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Print calloc:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }

    free(a);
}