#include <stdio.h>
    int rest_power(int x, int y){
        if(y == 0){
            return 1;
        }else{
            return x * rest_power(x, y - 1);
        }
    }
int main (){
    int a,b;
    printf("\nEnter First Number (a): ");
    scanf("%d", &a);
    printf("Enter Second Number (b): ");
    scanf("%d", &b);
    printf("\nResult of %d rest to power %d = %d", a, b, rest_power(a, b));
    return 0;
}