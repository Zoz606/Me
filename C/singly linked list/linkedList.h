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
void addNodeEnd(node head, UINT32 value);
void addNodeTop(node *head, UINT32 data);
void countOfNodes(node head);
void printData(node head);

#endif