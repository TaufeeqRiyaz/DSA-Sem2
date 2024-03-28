#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int f = -1, r = -1;

void insert_front(int x)
{
    if ((f == 0 && r == SIZE - 1) || (f == r + 1))
    {
        printf("Queue is full");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[f] = x;
    }
    else if (f == 0)
    {
        f = SIZE - 1;
        deque[f] = x;
    }
    else
    {
        f = f - 1;
        deque[f] = x;
    }
}
void insert_rear(int x)
{
    if ((f == 0 && r == SIZE - 1) || (f == r + 1))
    {
        printf("Queue is full");
    }
    else if (f == -1 && r == -1)
    {
        r = 0;
        deque[r] = x;
    }
    else if (r == SIZE - 1)
    {
        r = 0;
        deque[r] = x;
    }
    else
    {
        r++;
        deque[r] = x;
    }
}
void display()
{
    int i = f;
    if (f == -1)
    {
        printf("Queue is empty");
    }
    else if (f <= r)
    {
        while (i <= r)
        {
            printf("%d ", deque[i]);
            i++;
        }
    }
    else
    {
        while (i <= SIZE - 1)
        {
            printf("%d ", deque[i]);
            i++;
        }
        i = 0;
        while (i <= r)
        {
            printf("%d ", deque[i]);
            i++;
        }
    }
    printf("\n");
}
void getfront()
{
    if (f == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Element at front is %d\n", deque[f]);
    }
}
void getrear()
{
    if (r == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Element at rear is %d\n", deque[r]);
    }
}
void delete_front()
{
    int x;
    if (f == -1)
    {
        printf("Queue is empty");
    }
    else if (f == r)
    {
        x = deque[f];
        f = r = -1;
    }
    else
    {
        x = deque[f];
        if (f == SIZE - 1)
        {
            f = 0;
        }
        else
        {
            f = f + 1;
        }
    }
    printf("\nDeleted element is %d\n", x);
}
void delete_rear()
{
    int x;
    if (r == -1)
    {
        printf("Queue is empty");
    }
    else if (f == r)
    {
        x = deque[r];
        f = r = -1;
    }
    else
    {
        x = deque[r];
        if (r == 0)
        {
            r = SIZE - 1;
        }
        else
        {
            r = r - 1;
        }
    }
    printf("\nDeleted element is %d\n", x);
}
int main()
{
    insert_front(20);
    insert_front(10);
    insert_rear(30);
    insert_rear(50);
    insert_rear(80);
    display();
    getfront();
    getrear();
    delete_front();
    delete_rear();
    display();
    return 0;
}