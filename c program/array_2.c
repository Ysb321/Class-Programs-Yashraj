#include <stdio.h>
int main()
{
    int marks[5];
    printf("\nEnter any Five numbers \n");
    for(int i=0; i<5; i++){
    scanf("%d",&marks[i]);
    }
    printf("\nArray values \n");
    for(int i=0; i<5; i++){
    printf("\n%d",&marks[i]);
    }
}