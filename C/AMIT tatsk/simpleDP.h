#ifndef SIMPLEDB_H
#define SIMPLEDB_H

typedef unsigned char bool;
typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short uint16;
typedef signed short sint16;
typedef unsigned long uint32;
typedef signed long sint32;
typedef unsigned long long uint64;
typedef signed long long sint64;

struct simpleDP
{
    uint32 studentId;
    uint32 studentYear;
    uint32 course1Id;
    uint32 course1Grade;
    uint32 course2Id;
    uint32 course2Grade;
    uint32 course3Id;
    uint32 course3Grade;
};

// The functions used in the project
bool SDB_IsFull(void);
#endif