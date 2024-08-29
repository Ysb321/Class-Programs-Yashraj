#include <stdio.h>
int fact(n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * fact(n - 1);
    }
}

int main(){
    int n;
    printf("Enter a Number:- \n");
    scanf("%d", &n);
    printf("\nEnter any Number of %d = %d", n, fact(n));
    return 0;
}