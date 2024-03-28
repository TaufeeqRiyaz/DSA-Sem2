
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main(){

    struct node *head, *one, *two;

    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));

    one -> data = 45;
    one -> next = two;
    one -> prev = NULL;

    two -> data = 86;
    two -> next = NULL;
    two -> prev = one;

    head = one;

    while (head != NULL) {
        printf("%d ", head -> data);
        head = head -> next;
    }
    return 0;
}