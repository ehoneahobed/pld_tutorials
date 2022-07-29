#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void deletePos(struct node **head, int pos)
{
    /* point head to the node after the first node */
    if (*head == NULL) /* means empty list so newnode becomes only member */
    {
        printf("This is an empty list");
    }
    else 
    {
        struct node *temp, *prevNode; /* use this to keep track of the node to be deleted */
        temp = *head; 

        /* traverse the list till temp points to the target node */
        int i;
        
        for (i = 1; i < pos; i++)
        {
            prevNode = temp;
            temp = temp->next;
        }

        prevNode->next = temp->next; /* reassign last but one node to point to NULL */
        free(temp);
    }
    printf("I successfully deleted the node at position %d \n", pos);
}