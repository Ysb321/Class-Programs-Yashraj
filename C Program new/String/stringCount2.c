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
}

void wordSplit(char* ptr1, char* ptr2)
{
    char word[50];
    int i,j;

    for(i=0; ptr1[i]!='\0'; i++)
    {
        for(j=0 ; ptr1[i]!=' ' && ptr1[i]!='\0' ; i++)
        {
            word[j] = ptr1[i];
            j++;
        }
        word[j] ='\0';

        if(strcmp(word,ptr2)==0)
        {
            printf("Word '%s' in str1 matches with str2.\n",word);
        } 
    }

    
}