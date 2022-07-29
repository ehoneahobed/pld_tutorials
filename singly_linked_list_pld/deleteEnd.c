#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void deleteEnd(struct node **head)
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

        /* traverse the list till temp points to the last node */
        while (temp->next != NULL){
            prevNode = temp;
            temp = temp->next;
        }

        prevNode->next = NULL; /* reassign last but one node to point to NULL */
        free(temp);
    }
    printf("I successfully deleted the last node \n");
}