#include <stdio.h>
#include <stdlib.h> // for exit(0)
int main(){
    char c; // for holding y and n or any another character
    int value; // it holds numbers
    do{
    printf("Enter a number between 1 to 4\n");
    printf("\n 1.Withdraw \n 2.Balance Equiery \n 3.Deposit \n 4.Exit \n\n");
    printf("Enter choise here:- ");
    scanf("%d", &value);
        switch(value){
            case 1:
              printf("Withdraw Money!\n");
              break;
            case 2:
              printf("You have minimum balance!\n");
              break;
            case 3:
              printf("You can Deposit!\n");
              break;
            case 4:
              printf("Exiting...\n");
              exit(0);
              break;
            default:
              printf("Please Enter between 1 to 4\n");
              break;
        }
    printf("Do you want More Options!(y or n)\n");
    scanf(" %c",&c); //  space before % to ignoring whitespaces 
    }while (c == 'y' || c == 'Y'); // it runs loop untill it gets n 
     return 0;
}