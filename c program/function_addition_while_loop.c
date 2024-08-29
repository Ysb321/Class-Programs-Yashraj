// Program to add two numbers using while loop in function

#include <stdio.h>
int add_n(){
  char choice = 'y';
  int a, b, add;
while(choice == 'y'|| choice == 'Y'){
    printf("Enter a First Number:- ");
    scanf("%d", &a);
    printf("Enter a Second Number:- ");
    scanf("%d", &b);
    add = a + b;
    printf("Addition of %d and %d is %d", a, b, add);
    printf("\nDo you want add two numbers again?(y/Y):- ");
    scanf(" %c", &choice);
}
    return add;
}

int main(){
    add_n();
    return 0;
}