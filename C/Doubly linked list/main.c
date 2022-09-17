#include "doublyLinkedList.h"

void main(void)
{
  node head = NULL;

  head = createNode(head, 34);

  addNodeEnd(&head, 45);
  addNodeEnd(&head, 9);
  insertAfter(2,&head,25);
  printData(head);
}