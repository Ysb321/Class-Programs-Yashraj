#include<stdio.h>
int main()
{
  FILE *fptr = fopen("MyInfo.txt", "r");
  if(fptr == NULL){
     printf("\nUnable to open a File.");
     return 1;
   }else{
        printf("\nFile Opened Successfully.");
	fclose(fptr);
	return 0;
   }
}