#include <stdio.h>
#include <string.h>

int stringCompare(char *, char *);

int main()
{
    char str1[50];
    char str2[50];

    printf("Enter a First Name: ");
    gets(str1);

    printf("Enter a Second Name: ");
    gets(str2);

    if (stringCompare(str1, str2) == 1)
    {
        printf("Both string are equal.");
    }
    else
    {
        printf("Both string are different.");
    }
}

int stringCompare(char *ptr1, char *ptr2)
{
    int i;

    for (i = 0; ptr1[i] != '\0' && ptr2[i] != '\0'; i++)
    {
        if (ptr1[i] != ptr2[i])
            {
                return 0;
            }
    
    }

     if (ptr1[i] == '\0' && ptr2[i] == '\0')
        {
            return 1;
        }else{
            return 0;
        }
}