#include<stdio.h>
#include <string.h>

int stringlength(char *);

int main()
{
    char str[50];
    int len;
    
    printf("Enter a String:\n");
    gets(str); // if string contains space

   len = stringlength(str);
    printf("Length of string is %d", len);
    return 0;
}

int stringlength(char *ptr)
{
    int i;
    for(i=0; ptr[i]!='\0'; )
    {
        i++;
    }
    return i;
}