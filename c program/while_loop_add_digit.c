#include <stdio.h>
int  main(){
    int sum =0, n, r;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    while(n != 0){
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("Sum of a digit of a Number:- %d", sum);
    return 0;
}