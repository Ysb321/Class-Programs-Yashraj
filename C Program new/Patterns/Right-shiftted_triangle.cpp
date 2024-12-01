// //Right-shifted triangle
// #include <stdio.h>
// int main()
// {
//     int num, i , j, space;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for(i=1; i<=num; i++)
//     {
//         for(space=1; space<=num-i; space++)
//         {
//             printf("  "); //two spaces
//         }
//         for(j=1; j<=i; j++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int  num;
   cout<<"Enter a number"<<endl;
   cin>>num;
   
   for(int  i =0 ; i<=num; i++)
   {
       for(int space= 0; space<num-i; space++){
           cout<<" ";
       }
       for(int j=0; j<i; j++){
           cout<<" *";
       }
       cout<<endl;
   }
   
   for(int  i =num-1 ; i>=0; i--)
   {
       for(int space= 0; space<num-i; space++){
           cout<<" ";
       }
       for(int j=0; j<i; j++){
           cout<<" *";
       }
       cout<<endl;
   }
    
    return 0;
}