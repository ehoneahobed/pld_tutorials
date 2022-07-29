#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void insert_pos(struct node **head, int value, int pos){
    /* create a new node */
    struct node * newNode;

    newNode = (struct node *) malloc(sizeof(struct node));
    if (newNode == NULL){
        return;
    }

    newNode->age = value;

    /* traverse list with a temporary node to get the target node */
    struct node *temp;

    temp = *head;
    int i;

    for (i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    /* point next of newNode to what the next of target node was pointing */
        newNode->next = temp->next;

    /* temp next should be pointed to newNode */
        temp->next = newNode;

    
    printf("I successfully added a new node after node %d of this list\n", pos);
}