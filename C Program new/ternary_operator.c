#include<stdio.h>
int main()
{
    int price, qt, total;
    printf("Enter the price: ");
    scanf("%d", &price);
    printf("Enter the quantity: ");
    scanf("%d", &qt);
    total = price * qt;
    (qt>500)? printf("Total: %d", total*0.1) : printf("Quantity is less than 500 ");
}