#include <stdio.h>

int main() {
    char charArray[] = "Hello";
    int numArray[] = {1, 2, 3, 4, 5};

    printf("Size of Character Array - %ld\n", sizeof(charArray) / sizeof(char));
    printf("Size of Integer Array - %ld\n", sizeof(numArray) / sizeof(int));
    printf("The number of elements in the character array is 5 but the size of the character array is 6 because of the null character at the end of the string.\n");

    return 0;
}