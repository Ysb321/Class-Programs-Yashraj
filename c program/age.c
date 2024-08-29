#include <stdio.h>

int main(){
    int age;
    printf("Enter a age:\n");
    scanf("%d",&age);
    if(age<40 && age>=18){
        printf("You are eligible for licance!!");
    } else if(age>=40)
        printf("You too aged for licance!!");
    else{
        printf("You are not eligible for licance!!");
    }
    return 0;
}