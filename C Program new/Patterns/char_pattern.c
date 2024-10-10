#include <stdio.h>

int main() {
    char num;
    int i, j;
    printf("Enter a character (A-Z): ");
    scanf("%c", &num);


    for (i = 'A'; i <= num; i++) {
        for (j = 'A'; j <= i; j++) {
            printf("%c ", i);
        }
        printf("\n");
    }

    return 0;
}
