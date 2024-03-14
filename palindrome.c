#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char items[MAX_SIZE];
};

void push(struct Stack *stack, char item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++stack->top] = item;
}

char pop(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}

bool is_empty(struct Stack *stack) {
    return stack->top == -1;
}

bool is_palindrome(char *str) {
    struct Stack stack;
    stack.top = -1;

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        push(&stack, str[i]);
    }

    for (int i = 0; i < length; i++) {
        if (str[i] != pop(&stack)) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[MAX_SIZE];
    printf("Enter a string - ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = '\0';

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}