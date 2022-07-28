//******************************************//
//********** SimpleDB MODULE ***************//
//****** created by: Salma Mohamed *********//
//******************************************//


#include "Salma_SImpleDB.h"

Bool SDB_IsFull(void)
{
    int ret;
    int full=max_entries;
    if( full== entries )
        ret=1;
    else
        ret=0;
    return ret;
}

uint8 SDB_GetSize(void)
{
    return entries;
}

Bool SDB_ReadEntry(uint8 id,uint8*year,uint8*subject,uint8*grades )
{
   struct student* temp=root;

    while(temp!= NULL )
    {
    if(id==temp->ID)
    {
        *year = temp->year;
        subject[0] = temp-> course_1ID;
        subject[1] = temp-> course_2ID;
        subject[2] = temp-> course_3ID;
        grades[0]=temp->course_1grade;
        grades[1]=temp->course_2grade;
        grades[2]=temp->course_3grade;
        break;
    }
    else {
        temp=temp->next;    
        }
    }
}

void SDB_getIdList(uint8* count, uint8* list)
{
    struct student* temp=root;
    *count = entries;

    for(int i=0;i<entries;i++)
    {
        list[i] = temp->ID;   
        temp=temp->next;
    }
}

Bool SDB_exist(uint8 id)
{
    int ret=0;
    struct student* temp=root;
    while(temp!=NULL)
    {
        if(id==temp->ID)
            ret=1;
        temp =temp->next;
    }
    return ret;
}

Bool SDB_Add(uint8 id, uint8 year, uint8* subjects, uint8* grades)
{
    if(grades[0] >100 || grades[0] <0)
        return 0;

    struct student* newnode = malloc(sizeof(struct student));
   newnode->ID = id;
   newnode->year = year;
   
   newnode->course_1ID=subjects[0] ;
   newnode->course_2ID=subjects[1] ;
   newnode->course_3ID=subjects[2] ;
 
   newnode->course_1grade=grades[0] ;
   newnode->course_2grade=grades[1] ;
   newnode->course_3grade=grades[2] ;

    if(root==NULL)
    {
       root=newnode;
       newnode->next=NULL;
    }
    else
    {
        struct student *temp = root;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
    entries++;
    return 1;
}
 
 void SDB_DeleteEntry(uint8 id)
 {
    struct student *current = root;
    struct student *previous;
    for(int i = 0; i < entries; i++)
    {
        if(current->ID == id)
        {
            break;
        }
        else
        {
            previous = current;
            current = current->next;
        }
    }

    if(current == root)
    {
        root = current->next;
        free(current);
    }
    else{
        previous->next = current->next;
        free(current);
    }

    entries--;
 }