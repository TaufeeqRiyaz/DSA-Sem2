#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements - ");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int));
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number - ");
        scanf("%d", &ptr[i]);
        printf("The address of ptr[%d] is %u\n", i, &ptr[i]);
        sum += ptr[i];
    }
    printf("The sum of the numbers is - %d", sum);
    free(ptr);
    printf("\nAddress of ptr is %u", ptr);

    return 0;
}