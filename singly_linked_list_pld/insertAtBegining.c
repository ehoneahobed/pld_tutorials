#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void insertAtBeginning(struct node **head, int value)
{
    /* declare a struct node */
    struct node *newNode;

    /* allocate space for the node */
    newNode = (struct node *) malloc(sizeof(struct node));

    if (newNode == NULL){
        return;
    }

    /* pass the value to the node */
    newNode->age = value;

    /* point this newNode to what head was originally pointing to */
    if (*head == NULL) /* means empty list so newnode becomes only member */
    {
        newNode->next = NULL;
        *head = newNode;
    }
    else 
    {
        newNode->next = *head;
        *head = newNode;
    }
    printf("I successfully inserted a node at the beginning \n");
}