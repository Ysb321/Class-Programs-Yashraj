#include <stdio.h>
int main(){
    int rev =0, r, n, sum=0, multi=1;
    printf("Enter A Number:- ");
    scanf("%d", &n);
    for(r=0; n!=0; n=n/10)
    {
        r = n % 10;
        sum = sum + r; //sum
        multi = multi * r; // multi
        rev = (rev*10) +r;
    }
    printf("\nSum = %d", sum);
    printf("\nMultiplication = %d\n", multi);
    printf("\nReverse = %d\n", rev);
    return 0;
}