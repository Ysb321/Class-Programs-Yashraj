#include <stdio.h>
int main (){
    int i=1, n, tot = 0;
    int avg = 0.0;
    printf("Enter value of n \n");
    scanf("%d",&n);
    do{
        tot += i;
        i++;
    } while (i<= n);
        printf("Total: %d \n",tot);
        avg = n /2;
        printf("Avg of %d is %d \n", n, avg);
        return 0;
};