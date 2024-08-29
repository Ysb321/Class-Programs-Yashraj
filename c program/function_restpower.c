// Rest to power program

#include <stdio.h>
    int rest_power(int a, int b){
      int result = 1;
        for(int i=1; i<=b; i++){
            result *= a;
        }
         return result;
    }
int main (){
    int a,b;
    printf("\nEnter First Number (a): ");
    scanf("%d", &a);
    printf("Enter Second Number (b): ");
    scanf("%d", &b);
    int re = rest_power(a, b);
    printf("\nResult of %d and %d = %d", a, b, re);
    return 0;
}

