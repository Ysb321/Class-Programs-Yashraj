#include<stdio.h>
int main()
{
    int p,q,r,s;
    printf("Enter any numbers \n");
    scanf("%d%d%d%d",&q,&p,&r,&s);
    if(p>q&&p>r&&p>s){
        printf("\n %d is Maximum number",p);
    } else if(q>p&&q>r&&q>s){
        printf("\n %d is Maximum number",q);
    }else if(r>p&&r>q&&r>s){
        printf("\n %d is Maximum number",r);
    }else if(s>p&&s>q&&s>r){
        printf("\n %d is Maximum number",s);
    }else{
        printf("\n %d No max Number");
    }
    return 0;
}