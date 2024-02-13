#include <stdio.h>
#include <string.h>

struct myShop {
    char itemName[50];
    float unitPrice;
    int quantity;
};

int main() {

    struct myShop bakery;

    strcpy(bakery.itemName, "Cake");
    bakery.quantity = 10;
    bakery.unitPrice = 12.50;

    printf("Item Name - %s\n", bakery.itemName);
    printf("Quantity - %d\n", bakery.quantity);
    printf("Unit Price - $%.2f\n", bakery.unitPrice);

    float totalPrice = bakery.unitPrice * bakery.quantity;
    printf("Total Price - $%.2f\n", totalPrice);

    return 0;
}
