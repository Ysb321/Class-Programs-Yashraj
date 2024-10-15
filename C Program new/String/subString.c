#include<stdio.h>
#include<string.h>
void wordSplit(char*, char*);

int main()
{
    char str1[50];
    char str2[50];

    printf("Enter a First Name: ");
    gets(str1);

    printf("Enter a Second Name: ");
    gets(str2);

    wordSplit(str1, str2);

    return 0;
}

void wordSplit(char* ptr1, char* ptr2)
{
    char word[50];
    int i, j, k, len1, len2, found;

    len1 = strlen(ptr1);
    len2 = strlen(ptr2);

    for (i = 0; i < len1; i++)
    {
        
        for (j = 0; ptr1[i] != ' ' && ptr1[i] != '\0'; i++)
        {
            word[j] = ptr1[i];
            j++;
        }
        word[j] = '\0';

        found = 0;
        for (k = 0; k <= j - len2; k++)
        {
            int l;
            int match = 1;
            for (l = 0; l < len2; l++)
            {
                if (word[k + l] != ptr2[l])
                {
                    match = 0;
                    break;
                }
            }
            if (match)
            {
                found = 1;
                break;
            }
        }

        if (found)
        {
            printf("Substring '%s' found in word '%s'.\n", ptr2, word);
        }

        if (ptr1[i] == '\0')
        {
            break;
        }
    }
}