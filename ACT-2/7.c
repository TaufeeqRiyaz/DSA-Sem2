#include <stdio.h>

#define MAX_STUDENTS 10

struct MyStructure {
    char name[50];
    int marks;
};

struct MyDivBy5Stack {
    struct MyStructure data[MAX_STUDENTS];
    int top;
};

void PUSH(struct MyDivBy5Stack *stack, struct MyStructure element) {
    if (element.marks % 5 == 0) {
        stack->data[++stack->top] = element;
    }
}

struct MyStructure PEEK(struct MyDivBy5Stack stack) {
    return stack.data[stack.top];
}

struct MyStructure POP(struct MyDivBy5Stack *stack) {
    return stack->data[stack->top--];
}

int main() {
    struct MyStructure students[MAX_STUDENTS] = {
        {"Student1", 45},
        {"Student2", 50},
        {"Student3", 55},
        {"Student4", 60},
        {"Student5", 65},
        {"Student6", 70},
        {"Student7", 75},
        {"Student8", 80},
        {"Student9", 85},
        {"Student10", 90}
    };

    struct MyDivBy5Stack divBy5Stack = {{0}, -1};

    // Pushing elements to the MyDivBy5Stack
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        PUSH(&divBy5Stack, students[i]);
    }

    // Displaying the top-most element
    printf("Top-most element: %s, Marks: %d\n", PEEK(divBy5Stack).name, PEEK(divBy5Stack).marks);

    // Popping out elements 5 and 25 if they exist
    struct MyStructure poppedElement;
    while (divBy5Stack.top >= 0) {
        poppedElement = POP(&divBy5Stack);
        if (poppedElement.marks == 5 || poppedElement.marks == 25) {
            printf("Popped element: %s, Marks: %d\n", poppedElement.name, poppedElement.marks);
        }
    }

    return 0;
}
