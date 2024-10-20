#include <stdio.h>
int main()
{
    int num, i, j, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 1 || num == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        for (i = 2; i <= num; i++)
        {
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }

            if (flag == 0)
            {
                printf("%d\n", i);
            }
        }
    }
}
