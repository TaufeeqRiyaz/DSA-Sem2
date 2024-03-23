#include <stdio.h>

#define SIZE 100

int binary_search(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            return binary_search(arr, mid + 1, high, key);
        }
        return binary_search(arr, low, mid - 1, key);
    }
    return -1;
}

void print_array(char *msg , int arr[], int n) {
    printf("%s", msg);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE], n, key;
    printf("Enter the number of elements - ");
    scanf("%d", &n);
    printf("Enter the elements - ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    print_array("Array - ", arr, n);
    printf("Enter the key to search - ");
    scanf("%d", &key);
    int index = binary_search(arr, 0, n - 1, key);
    if (index == -1) {
        printf("Key not found\n");
    } else {
        printf("Key found at index %d\n", index);
    }
    return 0;
}