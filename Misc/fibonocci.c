// call stack and recursive tree fibonacci series

#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Enter a number - ");
    scanf( "%d", &n );
    printf("%d\n", fib(n));
    return 0;
}