// Factorial of any number

#include <stdio.h>
int fact_n(int n, int i){
    int fact=1;
    for(i=1; i<=n; i++){ 
         fact = fact * i;
         printf("%d",i);
    }
    return fact;
}

int main(){
    int n,i;
    printf("\nEnter A Number:-");
    scanf("%d", &n);
    int factorial = fact_n(n,i);
    printf("\nFactorial of Number %d is %d", n, factorial);
    return 0;
}