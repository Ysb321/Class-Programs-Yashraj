#include<stdio.h>

int* addition_array(int*, int*, int*, int);

int main()
{
    int arr1[5] = {12, 22, 43, 2,44};
    int arr2[5] = {33, 3, 32, 44, 2};
    int arr3[5];
    int * result;
    int i;

    result = addition_array(arr1, arr2, arr3, 5);
    printf("Addition of two Array:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}

int* addition_array(int* ptr1, int* ptr2, int* ptr3, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        ptr3[i] = ptr1[i] + ptr2[i];
    }
       return ptr3;
}