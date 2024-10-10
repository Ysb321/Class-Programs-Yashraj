#include <stdio.h>
int main()
{
    char name1, name2;
    printf("Enter a First Name: \n");
    scanf("%c", &name1);
    
    printf("Enter a Second Name: \n");
    fflush(stdin);
    scanf("%c", &name2);

    printf("First name: %c\n", name1);
    printf("Second name: %c", name2);

    return 0;
}