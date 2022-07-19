#include "list.h"

node createNode()
{
    node temp; // declaring a node
    temp = (node)malloc(sizeof(struct linkedList));
    temp->next = NULL;
    return temp;
}