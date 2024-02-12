#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE];
    int i;

    printf("Enter elements of array -\n");
    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of array are -\n");
    for (i = 0; i < SIZE; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
