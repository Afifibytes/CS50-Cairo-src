#include <stdio.h>
#include <stdlib.h>


typedef struct linkedList
{
    int value;
    struct linkedList * next;
}linkedList;


int insertNode(int value);
int deleteNode(int value);
int checkValue(int value);
void printList();
void freeList();

linkedList *head; 

int main(void)
{
    // TODO
}


/**
 *  inserts a node to the list
 */
int insertNode(int value)
{

    // allocate memory for new node
    linkedList * temp = malloc(sizeof(linkedList));
    
    if( temp == NULL)
    {
        return 0;
    }
    
    // insert at the beginning of the list
    temp->value = value;
    temp->next = head;
    head = temp;
    
    return value;
}

/**
 * deletes a node from a list
 */
int deleteNode( int value)
{
    // temp value to walk through the list
    linkedList * temp = head;
    
    if(temp->value == value)
    {
        head = head->next;
        free(temp);
    }
        
        
    while(temp->next != NULL)
    {
        // check if the comming node's value is what we looking for then drop it
        if(temp->next->value == value)
        {
            // free the deleted node
            free(temp->next);
            temp->next = temp->next->next;
            return 1;
        }
        temp = temp->next;
    }
    return value;
}


/**
 * checks if a value exists in a list 
 */
int checkValue(int value)
{
    linkedList * temp = head;
    while(temp != NULL)
    {
        if(temp->value == value)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}


/**
 * prints a list 
 */
void printList()
{
    linkedList * temp = head;
    while( temp != NULL)
    {
        printf("%i ", temp->value);
        temp = temp->next;
    }
}

void freeList()
{
    while(head != NULL)
    {
        free(head);
        head = head->next;
    }
}