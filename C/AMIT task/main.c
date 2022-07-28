#include "simpleDP.h"

void main(void)
{
    node head;
    UINT8 subjects[3] = {1, 2, 3}, subjects2[3] = {6, 4, 37};
    UINT8 grades[3] = {70, 65, 98}, grades2[3] = {56, 10, 20};
    bool indicator;

    head = SDB_CreateEntry(5, 3, subjects, grades);
    // indicator = SDB_AddEntry(&head, 9, 2, subjects2, grades2);

    // head = SDB_DeleteEntry(head, 9);

    printData(head);
}