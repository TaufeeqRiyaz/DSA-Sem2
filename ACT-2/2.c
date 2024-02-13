#include <stdio.h>
#include <string.h>

struct myShop {
    char itemName[50];
    float unitPrice;
    int quantity;
};

int main() {
    struct myShop myShopArray[5];

    myShopArray[0].quantity = 10;
    myShopArray[0].unitPrice = 12.50;
    strcpy(myShopArray[0].itemName, "Cake");

    printf("Item Name - %s\n", myShopArray[0].itemName);
    printf("Quantity - %d\n", myShopArray[0].quantity);
    printf("Unit Price - $%.2f\n", myShopArray[0].unitPrice);

    return 0;
}
