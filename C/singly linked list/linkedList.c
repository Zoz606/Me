#include "linkedList.h"

// create a new list
node createNode()
{
    node head;                                      // declaring a node
    head = (node)malloc(sizeof(struct linkedList)); // allocate a new node on the heap
    head->next = NULL;
    return head;
}

// Add a new node to the list
node addNode(node head, UINT32 value)
{
    node nextNode, ptr;
    nextNode = createNode();
    nextNode->data = value;

    if (head == NULL)
    {
        head = nextNode; // when linked list is empty
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = nextNode;
    }
    return head;
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