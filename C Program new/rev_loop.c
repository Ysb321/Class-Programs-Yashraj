#include <stdio.h>

int main() {
    int num, rev = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    
    for(int i = num; i != 0; i = i / 10) {
        int digit = i % 10;
        rev = rev*10 + digit;
    }

    printf("Reverse of %d is %d\n", num, rev);
    return 0;
}
