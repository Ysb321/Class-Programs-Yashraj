//Program of addition of two number using do while loop 

#include <stdio.h>
int add_n(){
    int a, b, add;
    char choice;
    do{
    printf("Enter a First Number:- ");
    scanf("%d", &a);
    printf("Enter a Second Number:- ");
    scanf("%d", &b);
    add = a + b;
    printf("Addition of %d and %d is %d", a, b, add);
    printf("\nDo you want add two numbers more ?(Y/y):- ");
    scanf(" %s", &choice);
    }while(choice == 'y' || choice == 'Y');
    {
        return 0;
    }
    return add;
}

int main(){
    add_n();
    return 0;
}