#include <stdio.h>
int main(){
    FILE *fptr = fopen("output/MyInfo.txt", "r");
    if(fptr == NULL){
        printf("\nUnable to open file");
        return 1;
    }
        printf("\nFile has been Successfully Opened");
        fclose(fptr);
        return 0;
}