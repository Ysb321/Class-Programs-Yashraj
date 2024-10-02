// Table in Function
#include <stdio.h>
int num_table(int num)
{
    int table;
    for(int i=1; i<=10; i++)
    {
        table = num * i;
        printf("%d X %d = %d\n", num, i, table);
    }
     return table;
}

int main()
{
    int num;
    printf("Enter a Number for Table: ");
    scanf("%d", &num);
    num_table(num);
    return 0;
}