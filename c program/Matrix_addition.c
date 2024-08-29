#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    printf("\n Enter First Matrix \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    }
    printf("\n Enter Second Matrix \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf(" %d", &b[i][j]);
        }
    }
    // Addition 2x2 Matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // Display Addition of Matrix
    printf("\n Addition of Matrix \n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf(" %d", c[i][j]);
        }
    }
    return 0;
}