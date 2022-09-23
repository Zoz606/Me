#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "typedef_keywords.h"

struct list
{
    struct list *prev;
    UINT32 data;
    struct list *next;
};

typedef struct list *node;

node createNode(node head, UINT32 data);
node addNodeTop(node head, UINT32 data);
void addNodeEnd(node *headAddress, UINT32 data);
void insertAfter(UINT32 position, node *headAddress, UINT32 data);
void insertBefore(UINT32 position, node *headAddress, UINT32 data);
node delFirstNode(node head);
node delLastNode(node head);

    void printData(node head);

#endif