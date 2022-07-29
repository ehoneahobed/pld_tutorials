#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void insertPosition(struct node **head, int value, int pos)
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
    newNode->next = NULL;

    /* point this newNode to what head was originally pointing to */
    if (*head == NULL) /* means empty list so newnode becomes only member */
    {
        newNode->next = NULL;
        *head = newNode;
    }
    else 
    {
        /* traverse the list and get the desired position with the aid of temp node pointer*/
        struct node * temp;
        temp = *head;
        int i;
        for (i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        /* point the new node next to what the target would have been pointing to */
        newNode->next = temp->next;
        /* point target node to the new node */
        temp->next = newNode;
    }
    printf("I successfully inserted a node after position %d \n", pos);
}