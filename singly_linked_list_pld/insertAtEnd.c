#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void insertAtEnd(struct node **head, int value)
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
        *head = newNode;
    }
    else 
    {
        /* traverse the list and get the last node with the aid of temp node pointer*/
        struct node * temp;
        temp = *head;
        while (temp->next != NULL){
            temp = temp->next;
        }

        /* point the last node to the new node created */
        temp->next = newNode;
    }
    printf("I successfully inserted a node at the end \n");
}