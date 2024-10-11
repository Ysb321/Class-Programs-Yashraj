#include<stdio.h>

char* stringCopy(char*, char*);

int main()
{
    char str1[50];
    char str2[50];
    char* copy;

    printf("Enter a String: ");
    gets(str1);

   copy = stringCopy(str2, str1);
   printf("Copy of String is %s", copy);
   return 0;
}

char* stringCopy(char* ptr2, char*ptr1)
{
    int i;
    for(i=0; ptr1[i]!='\0'; i++)
    {
        ptr2[i] = ptr1[i];
    }

    return ptr2;
}