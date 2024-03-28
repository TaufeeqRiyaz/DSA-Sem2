#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *next;    
};


struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;
struct node *first = NULL;
int i = 0;


void addnode(int k){


    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = k;
    ptr->next = NULL;
    if(head == NULL){
        head = ptr;
        tail = ptr;
        ptr = NULL;
    }
    else{
        temp = ptr;
        first -> next = ptr;
        first = temp;
    }


}


void traverse(){
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void inserttatapos(int k, int pos)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp1 = head;
    struct node *temp2 = head;
    ptr->data = k;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
        tail = ptr;
        ptr = NULL;
    }
    else
    {
        for (int i = 0; i < pos; i++)
        {
            temp1 = temp2;
            temp2 = temp2->next;
        }
        temp1->next = ptr;
        ptr->next = temp2;
    }
}

int main()
{
    addnode(2);
    addnode(4);
    addnode(9);
    addnode(1);
    addnode(21);
    addnode(22);
    printf("linked list is\n");
    traverse();
    printf("\n");
    insertbeging(1);
    printf("linked list after inserting at beginning\n");
    traverse();
    printf("\n");
    insertatend(0);
    printf("linked list after inserting at end\n");
    traverse();
    printf("\n");
    insertatpos(3, 3);

}