#include <stdio.h>
    int rest_power(int a, int b){
        if(b == 0){
            return 1;
        }else{
            return a * rest_power(a, b - 1);
        }
    }
int main (){
    int a,b;
    printf("\nEnter First Number (a): ");
    scanf("%d", &a);
    printf("Enter Second Number (b): ");
    scanf("%d", &b);
    printf("\nResult of %d and %d = %d", a, b, rest_power(a, b));
    return 0;
}