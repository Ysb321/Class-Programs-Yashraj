#include<stdio.h>
int minNum(int *ptr, int size)
{
    int min, i;
    min = *ptr;

    for(i=0; i<size; i++)
    {
        if(ptr[i] < min)
        {
            min = ptr[i];
        }
    }
    return min;
}

int main()
{
    int min;
    int arr[5] = {10, 20, 40 ,30, 50};
    min = minNum(arr, 5); // it passes base address.
    printf("Minimum Number in array is %d", min);
    return 0;
}