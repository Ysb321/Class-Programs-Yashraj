// Program to declare Array & check its address.
#include <stdio.h>
int main()
{
    int marks[5];
    printf("\nAddress of Array elements \n");
    for(int i=0;i<5;i++){
        printf("\nAddress at %d index %u", i, &marks[i]);
    }
    return 0;
}