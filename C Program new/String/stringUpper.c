#include<stdio.h>
#include<string.h>

char* stringUpper(char*);
int main()
{
    char str[50];
    char* upper;
    printf("Enter a string: ");
    gets(str);

    upper = stringUpper(str);
    printf("String in Upper Case is %s", upper);
    return 0;
}

char* stringUpper(char* ptr)
{
    int i;
    for(i=0; ptr[i] != '\0'; i++)
    {
        if(ptr[i]>='a' || ptr[i]<='z')
        {
            ptr[i] = ptr[i] - 32;
        }
    }
    return ptr;
}