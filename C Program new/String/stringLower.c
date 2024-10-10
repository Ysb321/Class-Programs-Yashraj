#include<stdio.h>
#include<string.h>
char* stringLower(char*);

int main()
{
    char str[50];
    char* lower;

    printf("Enter a String: ");
    gets(str);

    lower = stringLower(str);

    printf("String in Lower case is %s", lower);
    return 0;
}

char* stringLower(char* ptr)
{
    int i;
    for(i = 0; ptr[i] != '\0'; i++)
    {
        if(ptr[i]>='A' && ptr[i]<='Z')
        {
            ptr[i] = ptr[i] + 32;
        }
    }
    return ptr;
}