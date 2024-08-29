#include <stdio.h>
int main()
{
    int matrix[3][3], i, j;
    printf("\nEnter 3x3 Matrix\n");
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            scanf(" %d", &matrix[i][j]);
        }
    }
    printf("\nAcessing Matrix");
    printf("\nEnter First Number in Matrix = %d", matrix[1][1]);
    printf("\nEnter Fifth Number in Matrix = %d", matrix[2][2]);
    return 0;
}