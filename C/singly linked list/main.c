#include "linkedList.h"

int main()
{
    node head;

    head = createNode(45);

    addNodeEnd(head, 98);
    addNodeEnd(head, 3);
    addNodeEnd(head, 8);

    addNodeTop(&head, 60);

    // countOfNodes(head);
    printData(head);
    return 0;
}