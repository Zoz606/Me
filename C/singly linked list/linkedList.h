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

void countOfNodes(node head);
void printData(node head);
// node createNode();
// node addNode(node head, UINT32 value);
#endif