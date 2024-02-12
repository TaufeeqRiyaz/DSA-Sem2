#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i;

    printf("Enter the size of the array -");
    scanf("%d", &size);

    printf("Enter elements of array -\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of array are -\n");
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
