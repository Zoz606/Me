#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char bool;
typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short uint16;
typedef signed short sint16;
typedef unsigned long uint32;
typedef signed long sint32;
typedef unsigned long long uint64;
typedef signed long long sint64;

struct linkedList
{
    int data;
    struct linkedList *next;
};

typedef struct linkedList *node;

node createNode();
#endif