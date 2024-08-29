#include <stdio.h>
int main(){
    char operation;
    int a,b;
    printf("\nAddition : +");
    printf("\nSubstraction : -");
    printf("\nMultiplicaton : *");
    printf("\ndivision : /");

    printf("\nEnter your choice (+,-,*,/):- ");
    scanf("%c", &operation);
    printf("Enter your Number:\n");
    scanf("%d%d",&a,&b);
 
    switch(operation){
      case '+':
             printf("Addition of %d and %d is %d", a, b, (a+b));
             break;
      case '-':
             printf("Substraction of %d and %d is %d", a, b, (a-b));
             break;
      case '*':
             printf("Multiplication of %d and %d is %d", a, b, (a*b));
             break;
      case '/':
             printf("Division of %d anf %d is %d", a, b, (a/b));
             break;
      default:
             printf("Enter choice first");
             break;
    }
    return 0;
}