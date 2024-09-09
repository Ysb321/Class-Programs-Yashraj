#include <stdio.h>
#include <string.h>

int main(){
int a =10; //Initial value of 'a' is 10.
int *ptr;
ptr = &a;
*ptr = 15; // *ptr pointing towards a then change 10 to 15.
printf("The Value of a is getting change by %d\n", a);


int **ptr1; // *ptr1 is pointer pointing towards another pointer which pointing towards integer of 'a'.
ptr1 = &ptr;
**ptr1 = 20; // where **ptr1 is pointing towards a.
printf("The Value of a is getting change by %d", a);

}