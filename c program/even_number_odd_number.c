#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("This are Even numbers\n");
    for(int i=1; i<num; i++)
    {
        if(i % 2 ==0)
        {
        printf("%d\n", i);
        }
    }
    printf("This are Odd numbers\n");
    for(int j=0; j<num; j++)
    {
        if(j % 2 != 0)
        {
        printf("%d\n", j); 
        }
    }
}


