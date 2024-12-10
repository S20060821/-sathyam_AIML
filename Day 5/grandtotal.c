#include <stdio.h>

int main() {
    int n, quantity, price, total, grandTotal = 0;
    char productCode[20], description[100];

    printf("Enter the number of products: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nEnter details for product %d:\n", i);

        printf("Enter the product code: ");
        scanf("%s", productCode);

        printf("Enter the product description: ");
        scanf(" %[^\n]", description);

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        printf("Enter the price: ");
        scanf("%d", &price);

        total = quantity * price;
        grandTotal += total;

        printf("\nProduct Code: %s\n", productCode);
        printf("Description: %s\n", description);
        printf("Quantity: %d\n", quantity);
        printf("Price: %d/-\n", price);
        printf("Total Price = %d x %d = %d/-\n", quantity, price, total);
    }
    printf("\nGrand Total = %d/-\n", grandTotal);

    return 0;
}
