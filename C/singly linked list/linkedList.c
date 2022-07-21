#include "linkedList.h"

// create a new list
node createNode(UINT32 value)
{
    node head;                                      // declaring a node
    head = (node)malloc(sizeof(struct linkedList)); // allocate a new node on the heap
    head->data = value;
    head->next = NULL;
    return head;
}

// Add a new node to the end of the list
void addNodeEnd(node head, UINT32 value)
{
    node temp, ptr;
    temp = createNode(value);

    if (head == NULL)
    {
        head = temp; // when linked list is empty
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

// Add a node to the beginning of the list
void addNodeTop(node *headAddress, UINT32 data)
{
    node ptr, new;
    new = createNode(data);
    ptr = new;
    ptr->next = *headAddress;
    *headAddress = ptr;
}

// Prints the data in the List
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

// Counts the number of nodes in the list and print it
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