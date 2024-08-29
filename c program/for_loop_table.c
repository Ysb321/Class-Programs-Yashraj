// Program of table from 1 to 10 using nested for loop.

#include <stdio.h>
int main (){
    int n, i;
    for(n=1; n<=15; n++){
        printf("\n");
        for(i=1; i<=15; i++){
            printf(" %d", n*i);
        }
    }
    return 0;
}