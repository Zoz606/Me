#include "linkedList.h"

void countOfNodes(node head)
{
    UINT32 count = 0;
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        node ptr = NULL;
        ptr = head;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        printf("%d", count);
    }
}