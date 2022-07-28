//******************************************//
//********** SimpleDB MODULE ***************//
//****** created by: Salma Mohamed *********//
//******************************************//

#include  "stdio.h"
#include  "stdlib.h"
#define max_entries 10u
#define empty 0u

typedef unsigned  int uint8; 
typedef unsigned  char Bool;  


uint8 entries=0; 

struct student{
uint8 ID;
uint8 year;
uint8 course_1ID;
uint8 course_1grade;
uint8 course_2ID;
uint8 course_2grade;
uint8 course_3ID;
uint8 course_3grade;
struct student* next;
};
struct student* root = NULL;

Bool SDB_IsFull(void);
uint8 SDB_GetSize(void);
Bool SDB_ReadEntry(uint8 id,uint8*year,uint8*subject,uint8*grades );
void SDB_getIdList(uint8* count, uint8* list);
Bool SDB_exist(uint8 id);
Bool SDB_AddStudent(uint8 id, uint8 year,uint8* subjects ,uint8* grades );
void SDB_DeleteEntry(uint8 id);
