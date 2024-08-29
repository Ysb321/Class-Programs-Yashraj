#include <stdio.h>
int main()
{
    FILE *fptr;
    int words = 0, char_count =0, lines =0;
    char file_name[50];
    char ch;
    printf("\nEnter name of any text file\n");
    scanf("%s", file_name);
    fptr = fopen(file_name, "r");
    if(fptr == NULL){
        printf("\nError while Reading file");
        return 1;
    }while((ch = fgetc(fptr)) != EOF)
    { 
           if(ch != ' ')
           {
           char_count++;
           }
        if(ch == '\n'){
            lines++;
        }
        if(ch == ' ' || ch == '\t' || ch == '\n')
        {
            words++;
        }
    }
    if (char_count > 0)
    {
       words++;
       lines++;
    }
 fclose(fptr);
   printf("\nNumber of characters = %d", char_count);
   printf("\nNumber of words = %d", words);
   printf("\nNumber of lines = %d", lines);
   return 0;
}