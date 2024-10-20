#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num==1 || num==0)
    {
        printf("This is not a prime number.");
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            printf("This is not a prime number.");
        }
        else
        {
            printf("This is a prime number.");
        }
    }
}