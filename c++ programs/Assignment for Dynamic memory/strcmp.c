#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];

    printf("Enter a 1st String: ");
    gets(str1);
    printf("Enter a 2st String: ");
    gets(str2);

    int strlen1 = strlen(str1);
    int strlen2 = strlen(str2);

    if (strlen1 != strlen2)
    {
        printf("length of string is not equal");
        return 0;
    }
    else
    {
        for (int i = 0; str1[i] != '\0'; i++)
        {
         
                if (str1[i] != str2[i])
                {
                    printf("Both strings are not equal");
                    return 0;
                }      
        }

        printf("Both strings are  equal\n");
   }
}
