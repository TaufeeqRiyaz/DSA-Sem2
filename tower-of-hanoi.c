#include <stdio.h>

void towerOfHanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", A, C);
        return;
    }
    towerOfHanoi(n - 1, A, C, B);
    printf("Move disk %d from rod %c to rod %c\n", n, A, C);
    towerOfHanoi(n - 1, B, A, C);
}

int main()
{
    int n;
    printf("Enter the number of disks - ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    printf("The number of moves are %d", (1 << n) - 1);
    return 0;
}