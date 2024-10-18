#include <stdio.h>
int main(){
    int arr[10] = {11, 21, 13, 14, 51,20,40,50,90,70};
    int (*ptr_to_arr)[10];
    ptr_to_arr = &arr; // assign address of all members from arr to ptr_to_arr
    for(int i=0; i<10; i++){
        printf("\nElement %d : %d : %u", i , ptr_to_arr[i], (*ptr_to_arr + i));
        // printf("\nElement %d : %d", i , (*ptr_to_arr + i));
    }

}

