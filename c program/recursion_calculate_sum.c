#include <stdio.h>
int sumdigit(int num)
{
    if(num == 0){
        return 0;
    }
    return (num % 10) + sumdigit(num / 10);
}
int main()
{
    int n, sum = 0;
    printf("\nEnter any Number\n");
    scanf("%d", &n);
    sum = sumdigit(n);
    printf("\nSum of digit %d = %d", n, sum);
    return 0;
}