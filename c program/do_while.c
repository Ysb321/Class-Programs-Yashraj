// #include <stdio.h>
// int main()
// {
//     int i=1, tot =0;
//     printf("\n Series \n");
//     do{
//         printf("\n %d",i);
//         tot = tot +i;
//         i++;
//     }while(i<=10);
//     printf("\n Total = %d",tot);
//     return 0;
// }

#include <stdio.h>
int main(){
    int i, tot= 0;
    for(i=1; i<=10; i++){
        if(i <= 5){
            printf("\n blank");
            continue;
        }
        tot += i;
        printf("\n %d", i);
        printf(" Program Having terms");
    }
    printf("\nTotal = %d", tot);
    return 0;
}