#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void insert_begin(struct node **head, int value){
    /* create a new node */
    struct node * newNode;

    newNode = (struct node *) malloc(sizeof(struct node));
    if (newNode == NULL){
        return;
    }

    newNode->age = value;

    if (*head == NULL) /* check if list is empty */
    {
        newNode->next = NULL;
    }
    else
    {
        /* point the next of the newNode to what head was pointing */
        newNode->next = *head;

    }

    /* redirect head to point to new node */
    *head = newNode;
    
    printf("I successfully added a new node to the beginning of this list\n");
}