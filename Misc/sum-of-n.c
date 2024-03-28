#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements - ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        printf("Enter the number - ");
        scanf("%d", &x);
        sum += x;
    }
    printf("The sum of the numbers is - %d", sum);
    return 0;
}