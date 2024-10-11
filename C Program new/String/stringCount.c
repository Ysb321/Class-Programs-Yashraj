#include<stdio.h>
int stringCount(char*, char*);

int main()
{
    char str1[50];
    char str2[50];
    int result;

    printf("Enter a First Name: ");
    gets(str1);

    printf("Enter a Second Name: ");
    gets(str2);

    result = stringCount(str1, str2);

    // if(result)
    // {
    //     printf("Both differnt");
    // }else
    // {
    //     printf("Both equal");
    // }

    printf('%d', &result);

}

int stringCount(char *ptr1, char *ptr2)
{
    char i;

    for (i = ' '; ptr1[i] != ' '; i++)
    {
        if (ptr1[i] != ptr2[i])
            {
                return i;
            }
    
    }

     if (ptr1[i] == '\0' && ptr2[i] == '\0')
        {
            return 1;
        }else{
            return 0;
        }
}