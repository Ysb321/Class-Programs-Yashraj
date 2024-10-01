// Loop in pallidrome.
#include <stdio.h>

int main() {
    int num, rev = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    
    for(int i = num; i != 0; i = i / 10) {
        int digit = i % 10;
        rev = rev*10 + digit;
    }

    if(rev==num)
    {
        printf("This number is pallidrome.");
    }else{
        printf("Tis number is not pallidrome.");
    }
    printf("\nReverse of %d is %d\n", num, rev);
    return 0;
}
