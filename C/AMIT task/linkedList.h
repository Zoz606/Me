#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "typedef_keywords.h"

struct linkedList
{
    UINT32 data;
    struct linkedList *next;
};

typedef struct linkedList *node;

// The functions

node createNode(UINT32 value);
void countOfNodes(node head);
void printData(node head);
void addNode(node *headAddress, UINT32 data, UINT32 position);
node deleteNode(node head, UINT32 position);
node deletAllList(node head);
node reverseList(node head);

#endif