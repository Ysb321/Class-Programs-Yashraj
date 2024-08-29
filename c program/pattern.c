// Pattern in C 
// #include <stdio.h>
// int main()
// {
//     int i=1, j=1;
//     while(i<=5){
//         printf("\n");
//         j =1;
//         // while(j<=5){
//         while(j<=i){
//             // printf(" %d",j);
//             printf(" *");
//             j++;
//         }
//     i++;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("\n");
        // for(j=1; j<=i; j++){
        for(j=1; j<=i; j++){
            // printf(" %d", j);
            printf(" #");
        }
    }
        return 0;
}