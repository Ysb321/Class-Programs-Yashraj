#include<stdio.h>
int main()
{
    int num,add = 0, i;
    printf("Enter a number upto add: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        printf("%d\n", i);
        add = add + i;
    }
     printf("Overall Addition is %d", add);
}