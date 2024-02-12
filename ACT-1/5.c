#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
    printf("Pushed %d\n", value);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped %d\n", stack[top--]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are -\n");
    for (int i = 0; i <= top; ++i) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    int num_push, num_pop;

    printf("Enter the number of elements to push onto the stack - ");
    scanf("%d", &num_push);

    for (int i = 0; i < num_push; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        push(value);
        display();
    }

    printf("Enter the number of elements to pop from the stack - ");
    scanf("%d", &num_pop);

    for (int i = 0; i < num_pop; ++i) {
        pop();
        display();
    }

    return 0;
}
