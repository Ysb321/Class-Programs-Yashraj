#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                printf("This is not a prime number.");
                return 0;
            }else{
                printf("This is a prime number.");
                return 0;
            }
        }
}