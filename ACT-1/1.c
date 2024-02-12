#include <stdio.h>

int main() {
    char charArray[] = "Hello";
    int numArray[] = {1, 2, 3, 4, 5};

    printf("Size of Character Array - %ld\n", sizeof(charArray) / sizeof(char));
    printf("Size of Integer Array - %ld\n", sizeof(numArray) / sizeof(int));

    return 0;
}