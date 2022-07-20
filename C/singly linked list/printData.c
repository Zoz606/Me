#include "linkedList.h"

void printData(node head)
{
    if (head == NULL)
    {
        printf("Linked list is empty ");
    }
    else
    {
        node ptr = NULL;
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}