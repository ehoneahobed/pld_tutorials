#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void){

    /*declare a node */
    struct node *nodeA, *nodeB, *nodeC;
    struct node *head;

    /* allocate memory for the node */
    nodeA = (struct node *) malloc(sizeof(struct node));
    nodeB = (struct node *) malloc(sizeof(struct node));
    nodeC = (struct node *) malloc(sizeof(struct node));

    /* assign data values to the nodes */
    nodeA->age = 67;
    nodeB->age = 47;
    nodeC->age = 35;

    /* assign address values to the nodes */
    nodeA->next = nodeB;
    nodeB->next = nodeC;
    nodeC->next = NULL;

    /* create a head */
    head = nodeA;

    /* insert node at the beginning of the list */
    // insertAtBeginning(&head, 97);

    /* insert node at end of the list */
    // insertAtEnd(&head, 12);

    /* insert after a given position (2) */
    // insertPosition(&head, 32, 2);

    /* delete the first node */
    // deleteBeginning(&head);

    /* delete the node at a giiven position */
    deleteEnd(&head);

    /* delete the node at a giiven position */
    // deletePos(&head, 2);

    /* create a temporary pointer */
    struct node *temp;

    temp = head;

    /* traversing the linked list and printing each member */
    while (temp != NULL){
        printf("%d --->", temp->age);
        temp = temp->next;
    }
    printf("\n");



}