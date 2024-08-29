#include <stdio.h>
int main(){
    FILE *fptr = fopen("MyInfo.txt", "r"); // r is for readfile
    if(fptr == NULL){
        printf("\nUnable to open file");
        return 1;
    }else{
        printf("\nFile has been Successfully Opened");
        fclose(fptr);
   }
        return 0;
}