#include <stdio.h>
int main(){
    int a = 12;
    printf("\nvalue of a = %d", a); // printing value at a
    printf("\nvalue of a = %u", &a); // printing address at a
    printf("\nvalue of a = %u\n", *(&a)); // printing value at address of a 
    return 0;
}