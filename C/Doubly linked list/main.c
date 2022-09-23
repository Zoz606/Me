#include "doublyLinkedList.h"

void main(void)
{
  node head = createNode(head, 34);
  addNodeEnd(&head, 45);
  addNodeEnd(&head, 9);
  
  printData(head);
}