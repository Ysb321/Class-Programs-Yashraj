// Last Digit Number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter three digit Number: ");
    scanf("%d", &num);

    if(num % 10==5)
    {
        printf("Hello");
    }else
    {
        if(num %10 == 4)
        {
            printf("Hi");
        }else
        {
            printf("Bye");
        }
    }
    return 0;
}