#include <stdio.h>
int main(){
    int num, i, cnt;

    for(num =1; num<=50; num++)
    {
        cnt = 0;
    for(i =1; i<=num; i++){
        if(num % i == 0){
            cnt++;
        }
    }
        if(cnt==2){
            printf("\n%d", num);
    }
}
    printf("\n");
    return 0;
}