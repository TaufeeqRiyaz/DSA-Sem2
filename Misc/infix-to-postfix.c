#include <stdio.h>
#include <stdlib.h>

#define MAX 20

char stk[20];
int top = -1;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX - 1;
}

char peek() {
    return stk[top];
}

char pop() {
    if (isEmpty())
        return -1;

    char ch = stk[top];
    top--;
    return (ch);
}

void push(char oper) {
    if (isFull())
        printf("Stack Full!!!!");

    else {
        top++;
        stk[top] = oper;
    }
}

int checkIfOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;

        case '*':
        case '/':
            return 2;

        case '^':
            return 3;
    }
    return -1;
}

int covertInfixToPostfix(char *expression, char *postfix) {
    int i, j;

    for (i = 0, j = -1; expression[i]; ++i) {
        if (checkIfOperand(expression[i]))
            postfix[++j] = expression[i];

        else if (expression[i] == '(')
            push(expression[i]);

        else if (expression[i] == ')') {
            while (!isEmpty() && peek() != '(')
                postfix[++j] = pop();
            if (!isEmpty() && peek() != '(')
                return -1;
            else
                pop();
        } else {
            while (!isEmpty() && precedence(expression[i]) <= precedence(peek()))
                postfix[++j] = pop();
            push(expression[i]);
        }
    }

    while (!isEmpty())
        postfix[++j] = pop();

    postfix[++j] = '\0';
    return 0;
}

int main() {
    char expression[] = "((x+(y*z))-w)";
    char postfix[MAX];
    if (covertInfixToPostfix(expression, postfix) == -1) {
        printf("Invalid expression\n");
        return 1;
    }
    printf("Postfix expression - %s\n", postfix);
    return 0;
}
