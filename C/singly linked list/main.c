#include "linkedList.h"

int main()
{
    node head;

    head = (node)malloc(sizeof(node));
    head->data = 45;
    head->next = NULL;

    node newNode;
    newNode = malloc(sizeof(node));
    newNode->data = 98;
    newNode->next = NULL;
    head->next = newNode;

    newNode = malloc(sizeof(node));
    newNode->data = 3;
    newNode->next = NULL;
    head->next->next = newNode;

    // countOfNodes(head);
    printData(head);
    return 0;
}