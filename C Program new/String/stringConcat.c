#include<stdio.h>
#include<string.h>
char* stringConcat(char*, char*);

int main()
{
    char str1[50];
    char str2[50];
    char* result;

    printf("Enter a First String: ");
    gets(str1);
    printf("Enter a Second String: ");
    gets(str2);

    result = stringConcat(str1, str2);
    printf("Concat of Both string is %s", result);
    return 0;
}

char* stringConcat(char* ptr1, char* ptr2)
{
    int len,i;
    len = strlen(ptr1);
    for(i=0; ptr2[i]!='\0'; i++)
    {
        ptr1[len + i] = ptr2[i];
    }
     return ptr1;
}