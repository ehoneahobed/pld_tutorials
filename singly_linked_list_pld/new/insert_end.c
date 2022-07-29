#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void insert_end(struct node **head, int value){
    /* create a new node */
    struct node * newNode;

    newNode = (struct node *) malloc(sizeof(struct node));
    if (newNode == NULL){
        return;
    }

    newNode->age = value;

    /* traverse list with a temporary node to get the last node */
    struct node *temp;

    temp = *head;

    while (temp->next != NULL){
        temp = temp->next;
    }

    /* point next of newNode to NULL */
        newNode->next = NULL;

    /* temp next should be pointed to newNode */
        temp->next = newNode;

    
    printf("I successfully added a new node to the end of this list\n");
}