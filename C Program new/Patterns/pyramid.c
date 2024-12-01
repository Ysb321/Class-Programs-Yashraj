// // Pyramid 
// #include<stdio.h>
// int main()
// {
//     int num, i, j, space;
//     printf("Enter a Number: ");
//     scanf("%d", &num);

//     for(i=1; i<=num; i++)
//     {
//         for(space = 1; space<=num-i; space++)
//         {
//             printf("  "); //two spaces
//         }
//         for(j=1; j<=2*i-1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }



#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

     for(int  i =0 ; i<=num; i++)
   {
       for(int space= 0; space<num-i; space++){
           printf(" "); // one space only for pyramid two space for right shifted tringle
       }
       for(int j=0; j<i; j++){
           printf(" *");
       }
       printf("\n");
   }
}