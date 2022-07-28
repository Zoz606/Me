#ifndef SIMPLEDB_H
#define SIMPLEDB_H

#include <stdio.h>
#include <stdlib.h>
#include "typedef_keywords.h"

#define MAX 10

struct simpleDP
{
    UINT8 studentId;
    UINT8 studentYear;
    UINT8 subjectIds[3];
    UINT8 grades[3];
    struct simpleDP *next;
};

typedef struct simpleDP *node;


// The functions used in the project
node SDB_CreateEntry(UINT8 id, UINT8 year, UINT8 *subjectIds, UINT8 *grades);
bool SDB_AddEntry(node *headAddress, UINT8 id, UINT8 year, UINT8 *subjectIds, UINT8 *grades);
node SDB_DeleteEntry(node head, UINT8 id);
void printData(node head);

bool SDB_IsFull(void);
UINT8 SDB_GetUsedSize(void);

#endif