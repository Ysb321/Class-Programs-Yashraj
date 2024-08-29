#include <stdio.h>
#include <stdlib.h>

int main() { // Change void main() to int main() for standard compliance
    char c;
    int choice;

    do {
        printf("\n1. Withdrawal\n2. Balance Enquiry\n3. Deposit\n4. Options\n5. Transfer\n6. Change PIN\n7. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Welcome to Withdraw Money\n");
                break;
            case 2:
                printf("Welcome to Your Balance History\n");
                break;
            case 3:
                printf("Welcome to Deposit Your Amount\n");
                break;
            case 4:
                printf("Welcome to Options Section\n");
                break;
            case 5:
                printf("Welcome to Transfer Money\n");
                break;
            case 6:
                printf("Welcome to Change Your PIN\n");
                break;
            case 7:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Please enter a valid choice\n");
        }

        // Clear the input buffer before reading 'c'
        // while ((getchar()) != '\n'); 

        printf("Do you want to enter more? (y/n): ");
        scanf("%c", &c);
    } while (c == 'y' || c == 'Y'); // Allow both lowercase and uppercase 'y'

    return 0; // Return statement for main
}
