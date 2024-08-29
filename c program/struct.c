//Storing name inside char
#include <stdio.h>
int main(){
    char name[10], i;
    printf("Enter any Name:- ");
    scanf("%s", name); // %c is for Single character & %s is for string word, & not required bcoz it points on first address
    printf("\nName is %s", name);
    for(i=0; i<10; i++){
        printf("\n%c", name[i]); // %c storing single character in verticly
        printf("\n%s", name); // %s storing complete word in verticly
    }
}