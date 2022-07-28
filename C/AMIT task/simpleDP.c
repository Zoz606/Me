#include "simpleDP.h"

// create a new Entry
node SDB_CreateEntry(UINT8 id, UINT8 year, UINT8 *subjectIds, UINT8 *grades)
{
    
    head = (node)malloc(sizeof(node)); // allocate memory for the node
    head->studentId = id;              // add the id of the student
    head->studentYear = year;          // add the year of the student

    // for loop to add the subject IDs and the grade of each subject
    for (UINT8 i = 0; i < 3; i++)
    {
        head->subjectIds[i] = *(subjectIds + i);
        head->grades[i] = *(grades + i);
    }
    head->next = NULL; // makes the pointer to the next node points to null
    return head;
}

// Add a new entry
bool SDB_AddEntry(node *headAddress, UINT8 id, UINT8 year, UINT8 *subjectIds, UINT8 *grades)
{
    bool isTrue; // an indicator to check if the user entered the right paramiters
    node ptr, head, temp;

    head = *headAddress;                                  // make a pointer that points to the address of the head of the linked list
    temp = SDB_CreateEntry(id, year, subjectIds, grades); // Create a new node that has the parameters which was sent by the user

    // traverse the list
    while (head != NULL)
    {
        // cheking if the new sent ID is already exists, if so we end the operation here
        if (temp->studentId == head->studentId)
        {
            isTrue = 0; // means thats it's failed operation
        }
        else
        {
            // if the id is not repeated we check if the degree sent by the user acceptable or not
            for (UINT8 i = 0; i < 3; i++)
            {
                if ((grades[i] < 0) || (grades[i] > 100)) // acceptable degree means that it's nether less than 0 nor more than 100
                {
                    isTrue = 0; // means thats it's failed operation
                    break;      // we break the loop when the operation fails
                }
                else
                {
                    isTrue = 1; // means that the id is not repeated and all degrees are acceptables, which make this operation acceptable
                }
            }
        }
        head = head->next;
    }

    if (isTrue)
    {
        // making the last node of the oreginal list points to the new list instead of NULL
        ptr = *headAddress;
        while (ptr->next != NULL)
        {
            ptr = head->next;
        }
        ptr->next = temp;
    }
    return isTrue;
}

node SDB_DeleteEntry(node head, UINT8 id)
{
    node temp = head;
    node ptr;
    while (temp->studentId != id)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = temp->next;
    free(temp);
    temp = NULL;
}
// Prints the data in the List
void printData(node head)
{
    node ptr;   // create a pointer to a node
    ptr = head; // make the pointer points to the first node of the list
    // Traverse the list
    while (ptr != NULL)
    {
        // prints every data element in the list till the last node
        printf("Student ID: %d\n", ptr->studentId);
        printf("Student year: %d\n", ptr->studentYear);
        for (UINT8 i = 0; i < 3; i++)
        {
            printf("Subject Id: %d\n", ptr->subjectIds[i]);
            printf("Subject grade: %d\n", ptr->grades[i]);
        }
        printf("______________________________\n");
        ptr = ptr->next;
    }
}