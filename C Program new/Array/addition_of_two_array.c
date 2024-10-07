#include<stdio.h>
void addition(int *ptr1, int *ptr2)
{   
   int i, add[5];
   for(i=0; i<5; i++)
   {
     add[i] = ptr1[i] + ptr2[i];
   }
   printf("Addition of two arrays: \n");
   for(i=0; i<5; i++)
   {
     printf("%d\n", add[i]);
   }
}

int main()
{
    int arr1[5]= {12, 12, 33, 34, 55};
    int arr2[5]= {11, 2, 23, 34, 45};
    addition(arr1, arr2);
    return 0;
}