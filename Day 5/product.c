#include<stdio.h>
int main()
{
    int  code;
    char product_name;
    int quantity;
    int price;
    int total_price;
    printf("enter the product code :\n");
    scanf("%d",&code);
    printf("enter the product_name :\n");
    scanf("%d",&product_name);
    printf("enter the quantity product :\n");
    scanf("%d",&quantity);
    printf("enter the price product:\n");
    scanf("%d",&price);
    total_price=quantity*price;
    printf("the total price %d",total_price);
}
