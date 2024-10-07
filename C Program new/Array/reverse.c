#include<stdio.h>
void reverse(int *ptr, int size)
{
    int temp,i;
    for(i=0; i<size/2; i++)
    {
     temp = ptr[size-1-i];
     ptr[size-1-i] = ptr[i];
     ptr[i] = temp;
    }
    printf("Reverse of given array is:\n");
    for(i=0; i<size; i++)
    {
        printf("%d\n",ptr[i]);
    }
}

int main()
{
    int arr[5] = {12, 54, 54, 33, 41};
    reverse(arr, 5);
    return 0;
}