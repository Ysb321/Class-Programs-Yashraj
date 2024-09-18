//realloc in c 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int n;
    int *ptr;
    // int ptr[5];

    ptr = (int *) calloc(5, sizeof(int));

    for(i=0; i<5; i++)
    {
        // scanf("%d", &ptr[i]);
        scanf("%d", ptr+i);
    }

    for(i=0; i<5; i++)
    {
        printf("%d ", *(ptr+i));
        // printf("%d ", ptr[i]);
    }

    printf("\nEnter new array n values: ");
    scanf("%d\n", &n);

    ptr = (int *) calloc(ptr, n * sizeof(int));

    for(i=0; i<n; i++)
    {
        // scanf("%d", &ptr[i]);
        scanf("%d", ptr+i);
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
        // printf("%d ", ptr[i]);
    }

    free(ptr);
}


