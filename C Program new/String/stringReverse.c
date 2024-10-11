#include<stdio.h>
char* stringReverse(char*);
int main()
{
    char* str1[50];
    char* result;

    printf("Enter a String: ");
    gets(str1);

    result = stringReverse(str1);
    printf("String Reverse is %s", result);
}

char* stringReverse(char* ptr1)
{
    int i;
    char temp;
    int len =0;
    for(; ptr1[len]!='\0';)
    {
        len++;
    }

   for(i=0; i<=len/2; i++)
    {
        temp = ptr1[i];
        ptr1[i]= ptr1[len-1-i];
        ptr1[len-1-i]= temp;
    }

    return ptr1;
}

