#include <stdio.h>
#define DEBUG
int main(){
    int a =5, b =3;
    int sum = a+b;
    // this block of code will be complied if DEBUG is defined
    #ifdef DEBUG
        printf("\nThe Debuging mode: The value of a is %d\n", a);
        printf("\nThe Debuging mode : The value of b is %d\n", b);
    #endif
        printf("\nThe sum of %d + %d = %d", a, b, sum);
        return 0;
}