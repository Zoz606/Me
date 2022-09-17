#include "linkedList.h"

// create a new list
node createNode(UINT32 data)
{
    node head;                                      // declaring a node
    head = (node)malloc(sizeof(struct linkedList)); // allocate a new node on the heap
    head->data = data;
    head->next = NULL;
    return head;
}

// Prints the data in the List
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

// Counts the number of nodes in the list and print it
void countOfNodes(node head)
{
    UINT32 count = 0;
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        node ptr = NULL;
        ptr = head;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        printf("%d", count);
    }
}

// Add a new node to the list
void addNode(node *headAddress, UINT32 data, UINT32 position)
{
    node temp, ptrEnd, ptr, newNode, existingNode;
    switch (position)
    {
    // Add a node at the end of the list
    case 'e':
    case 'E':
        temp = createNode(data);

        if (*headAddress == NULL)
        {
            *headAddress = temp; // when linked list is empty
        }
        else
        {
            ptrEnd = *headAddress;
            while (ptrEnd->next != NULL)
            {
                ptrEnd = ptrEnd->next;
            }
            ptrEnd->next = temp;
        }
        break;

    // Add a node on the begining of the list
    case 't':
    case 'T':
        newNode = createNode(data);
        newNode->next = *headAddress;
        *headAddress = newNode;
        break;
    // Add a node between two nodes in the list
    default:
        newNode = createNode(data);
        ptr = *headAddress;

        while (position != 2)
        {
            ptr = ptr->next;
            position--;
        }
        newNode->next = ptr->next;
        ptr->next = newNode;
        break;
    }
}

// Delete a node from the list
node deleteNode(node head, UINT32 position)
{
    node temp, ptr;
    temp = head;
    switch (position)
    {
    case 't':
    case 'T':
        head = head->next;
        free(temp);
        temp = NULL;
        break;

    case 'e':
    case 'E':
        while (temp != NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = NULL;
        free(temp);
        temp = NULL;
        break;

    default:
        while (position != 2)
        {
            ptr = temp;
            temp = temp->next;
            position--;
        }
        ptr->next = temp->next;
        free(temp);
        temp = NULL;
        break;
    }
    return head;
}

// Delete the all list
node deletAllList(node head)
{
    node temp = head;
    while (temp != NULL)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
    if (head == NULL)
    {
        printf("Linked list deleted successfully\n");
    }

    return head;
}

// Revese the order of the list
node reverseList(node head)
{
    node prev = NULL, next = NULL;
    while (head != NULL)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}