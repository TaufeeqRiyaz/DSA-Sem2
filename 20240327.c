head =0;
i, tail, NULL = 0;

void deletebegin()
{
    head = head->next;
    i--;
}

void deleteend()
{
    tail = tail -> prev;
    tail -> next = NULL;
    i--;   
}