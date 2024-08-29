#include <stdio.h>
int main(){
int arr[] = {11, 14, 15, 12, 13, 17, 18, 19, 22, 10};
for(int i=0; i<10; i++){
printf("Base Address of an array arr = %u\n", (arr + i));
printf("Second Address of an array arr = %d\n", *(arr + i));
}
return 0;
}