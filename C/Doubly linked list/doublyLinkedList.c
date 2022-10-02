#include "doublyLinkedList.h"
node createNode(node head, UINT32 data)
{
    node temp = malloc(sizeof(node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
node addNodeTop(node head, UINT32 data)
{

    node temp = NULL;

    temp = createNode(temp, data);
    temp = createNode(temp, data);
    temp = createNode(temp, data);
    temp->next = head;
    head->prev = temp;
    head = temp;

    return head;
}
void addNodeEnd(node *headAddress, UINT32 data)
{
    node temp = NULL, ptr;
    temp = createNode(temp, data);

    ptr = *headAddress;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
}
void insertAfter(UINT32 position, node *headAddress, UINT32 data)
{
    node newPtr = NULL;
    node temp = *headAddress;
    node temp2 = NULL;
    newPtr = createNode(newPtr, data);
    while (position != 1)
    {
        temp = temp->next;
        position--;
    }
    temp2 = temp->next;
    temp->next = newPtr;
    temp2->prev = newPtr;
    newPtr->next = temp2;
    newPtr->prev = temp;
}
void insertBefore(UINT32 position, node *headAddress, UINT32 data)
{
    node newPtr = NULL;
    node temp = *headAddress;
    node temp2;
    newPtr = createNode(newPtr, data);

    while (position > 2)
    {
        temp = temp->next;
        position--;
    }
    if (position == 1)
    {
        temp = addNodeTop(temp, data);
    }
    else
    {
        temp2 = temp->next;
        temp->next = newPtr;
        temp2->prev = newPtr;
        newPtr->next = temp2;
        newPtr->prev = temp;
    }
}
node reverseList(node head)
{
  
    node ptr1 = head;
    node ptr2 = ptr1->next;
    ptr1->next = NULL;
    ptr1->prev = ptr2;
    while (ptr2 != NULL)
    {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;
    return head;
}
node delFirstNode(node head)
{

    head = head->next;
    free(head->prev);
    return head;
}
node delLastNode(node head)
{
    node temp = head;
    node temp2;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    return head;
}
void printData(node head)
{
    node ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
