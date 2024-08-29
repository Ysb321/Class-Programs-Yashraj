#include <stdio.h>
int main(){
    int i;
    char name[10][15]; // 15 characters
    printf("\nEnter any 10 names\n");
    for(i=0; i<10; i++){
        scanf("%s", name[i]);
    }
    printf("\nEntered names are\n");
    for(i=0; i<10; i++){
        printf("\n%s", name[i]);
    }
        return 0;
}