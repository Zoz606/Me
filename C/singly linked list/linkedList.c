#include "linkedList.h"

node createNode()
{
    node head;                                      // declaring a node
    head = (node)malloc(sizeof(struct linkedList)); // allocate a new node on the heap
    head->next = NULL;
    return head ;
}

node addNode(node head, UINT32 value)
{
    node nextNode, p;
    nextNode = createNode();
    nextNode->data = value;

    if (head == NULL)
    {
        head = nextNode; // when linked list is empty
    }
    else
    {
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = nextNode;
    }
    return head;
}