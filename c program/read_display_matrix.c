#include <stdio.h>
int main ()
{
    int i,j,matrix[3][3];
    printf("\n\n 3X3 Matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf(" %d", &matrix[i][j]);
        }
    }
    printf("\n\n Answer 3X3 Matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf(" %d", matrix[i][j]);
        }

        printf("\n");
    }
    return 0;
}