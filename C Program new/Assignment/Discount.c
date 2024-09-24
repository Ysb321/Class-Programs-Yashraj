// 10% Discount on items which is more than 1000 
#include <stdio.h>
int main()
{
    int quantity;
    float totalPrice, price, discounted_price;

    printf("Enter a total number of items.\n");
    scanf("%d", &quantity);
    printf("Enter a price per item.\n");
    scanf("%f", &price);

    totalPrice = quantity * price;

    printf("Total Price as per items is %f\n", totalPrice);

    if(quantity>1000)
    {
        discounted_price = totalPrice - (totalPrice * 0.10);

        printf("Final price of %d item is %f\n",quantity, discounted_price);
    }else
    {
        printf("No Discount will be provied on %f\n", totalPrice);
    }
    return 0;
}