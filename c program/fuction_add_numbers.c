// function to add two numbers

#include <stdio.h>
int add_n(){
  int a, b, add;
  printf("Enter a First Number:- ");
  scanf("%d", &a); 
  printf("Enter a Second Nmber:- ");
  scanf("%d", &b);
  add = a + b;
  int addition = printf("Addition of %d and %d is %d", a, b, add);
  return addition;
}

int main(){
    add_n();
}
