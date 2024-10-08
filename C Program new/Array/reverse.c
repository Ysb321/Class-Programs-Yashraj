// #include<stdio.h>
// void reverse(int *ptr, int size)
// {
//     int temp,i;
//     for(i=0; i<size/2; i++)
//     {
//      temp = ptr[size-1-i];
//      ptr[size-1-i] = ptr[i];
//      ptr[i] = temp;
//     }
//     printf("Reverse of given array is:\n");
//     for(i=0; i<size; i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
// }

// int main()
// {
//     int arr[5] = {12, 54, 54, 33, 41};
//     reverse(arr, 5);
//     return 0;
// }

#include<stdio.h>

int* reverse(int *, int);
int main()
{
    int arr[5] = {12, 54, 54, 33, 41};
    int i;
    int * pointer;
    pointer = reverse(arr, 5);
    printf("Reverse of given array is:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n", pointer[i]);
    }
    return 0;
}

int* reverse(int *ptr, int size)
{
    int temp,i;
    for(i=0; i<size/2; i++)
    {
     temp = ptr[i];
     ptr[i] = ptr[size-1-i];
     ptr[size-1-i] = temp;
    }
    return ptr;
}
