#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int ch;
    struct node *start, *p, *q;
    start = (int *) malloc(sizeof(struct node));
    scanf("%d", &start->data);
    start->next = NULL;
    p = start;

    do
    {
        q = (int *) malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = NULL;
        q->next = p;
        q = p;
        printf("Do you want to continue (Type 0 or 1)?\n");
        scanf("%d", &ch);
    } while (ch != 0);
    
}


