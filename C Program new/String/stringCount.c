#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    char word[20];
    int i, found = 0, j;

    gets(str1);
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[0])
        {
            for (j = 0; str1[i] != '\0' && str1[i] != ' '; i++)
            {
                word[j] = str1[i];
                j++;
            }
            word[j] = '\0';

                if (strcmp(word, str2) == 0)
                {
                    found = 1;
                }
                else
                {
                    found = 0;
                }
            }
    }

    if (found)
    {
        printf("%s is the same as %s\n", word, str2);
    }
    else
    {
        printf("%s not found in the first string.\n", str2);
    }
    return 0;
}