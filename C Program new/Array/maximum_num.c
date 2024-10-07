#include<stdio.h>
int main()
{
    int arr[5] = {12,43,30,13,31};
    int max, i;
    max = arr[0];
    for(i=0; i<5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum number is %d", max);
}