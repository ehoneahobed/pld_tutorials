#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void deleteBeginning(struct node **head)
{
    /* point head to the node after the first node */
    if (*head == NULL) /* means empty list so newnode becomes only member */
    {
        printf("This is an empty list");
    }
    else 
    {
        struct node *temp; /* use this to keep track of the node to be deleted */
        temp = *head; 
        *head = temp->next; /* reassign head to point to the next node after the first */
        free(temp);
    }
    printf("I successfully deleted the first node \n");
}