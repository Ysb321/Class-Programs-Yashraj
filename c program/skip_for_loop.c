#include <stdio.h>
int main()
{
    int i;
    printf("\ndiplay series 1,2,3...10 is using for loop\n");
    for(i=2; i<=20; i+=2){
        if(i==12 || i==18){
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}