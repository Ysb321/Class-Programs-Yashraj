// Changing Alphabet from Uppercase to Lowercase or vice a versa.
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a one character.\n");
    scanf("%c", &character);


        if (character >= 'A' && character <= 'Z')
        {
            character = character + 32;
            printf("Changed to Lowercase is %c", character);
        }
        else
        {

            if (character >= 'a' && character <= 'z')
            {
                character = character - 32;
                printf("Changed to Uppercase is %c", character);
            }
            else
            {
                printf("This is special character.\n");
            }
        }
        return 0;
    }