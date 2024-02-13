#include <stdio.h>

#define MAX_SIZE 5

struct myShop {
    char itemName[50];
    float unitPrice;
    int quantity;
};

struct myShop myShopArray[MAX_SIZE];
int top = -1;

void push(struct myShop item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    myShopArray[++top] = item;
    printf("Item Pushed - %s\n", item.itemName);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Item Popped - %s\n", myShopArray[top].itemName);
    top--;
}

int main() {
    struct myShop item1 = {"Cake", 12.50, 10};
    struct myShop item2 = {"Bread", 2.50, 5};

    push(item1);
    push(item2);

    pop();
    pop();

    return 0;
}
