#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* table = (int*) malloc(5* sizeof(int));
    int i, num=5;
    printf("Table upto 10 numbers\n");
    for(i=0; i<5; i++)
    {
        table[i] = num * (i+1);
    }
    for(i=0; i<5; i++)
    {
        printf("%d * %d = %d\n", num, i+1, table[i]);
    }
    
    table = (int*) realloc(table, 10);
    printf("Realloc start from here\n");
    for(i=6; i<=10; i++)
    {
        table[i] = num * i;
    }
    for(i=6; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i, table[i]);
    }


    free(table);

}