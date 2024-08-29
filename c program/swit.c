#include <stdio.h>

int main() {
    char operation;
    int a, b;
    char value;
    do{
    printf("\n Addition : +");
    printf("\n Subtraction : -");
    printf("\n Multiplication : *");
    printf("\n Division : /");

    printf("\nEnter your choice (+,-,*,/): ");
    scanf(" %c", &operation);  // Note the space before %c to consume any whitespace
    printf("Enter your first number:-");
    scanf("%d",&a);
    printf("Enter your second number:- ");
    scanf("%d",&b);
    switch(operation) {
        case '+':
            printf("\nAddition: %d + %d = %d\n", a, b, (a + b));
            break;
        case '-':
            printf("\nSubtraction: %d - %d = %d\n", a, b, (a - b));
            break;
        case '*':
            printf("\nMultiplication: %d * %d = %d\n", a, b, (a * b));
            break;
        case '/':
            printf("\nDivision=>%d / %d = %d\n",a, b, (a/b));
            break;
        default:
            printf("Error! Wrong choice or operator. Try again....\n");
    }
    printf("Do You want to perform another calculation (y/n)\n");
    scanf(" %c", &value);
    }while(value == 'Y' || value == 'y');
    return 0;
}
