#include "linkedList.h"

int main()
{
    node head;

    head = createNode(45);

    addNode(&head, 98, 'e');
    addNode(&head, 3, 'e');
    addNode(&head, 20, 'e');

    // head = deleteNode(head, 2);
    // addNodeBefore(&head, 60, 3);
    // addNode(&head, 7, 2);
    // addNodeTop(&head, 60);
    // countOfNodes(head);
    // head = deletAllList(head);
    head = reverseList(head);
    printData(head);
    return 0;
}