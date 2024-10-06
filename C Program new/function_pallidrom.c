// Pallidrom im Function
#include<stdio.h>

int pallidrom(int num)
{
    int rev=0, digit;
    int original_num = num;
    for(; num!=0; num= num/10)
    {
        digit = num % 10;
        rev = rev*10 + digit;
    }

    printf("The Reverse of %d is %d\n", original_num, rev);
    if(rev == original_num)
    {
        printf("This number is a Pallidrom.");
    }else{
        printf("This number is not a Pallidrom.");
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter a Number (more than two digit): ");
    scanf("%d", &num);
    pallidrom(num);
    return 0;
}