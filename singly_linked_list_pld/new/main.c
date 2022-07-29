#include <stdio.h>
#include <stdlib.h>
#include "struct.h"


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

    /* inserting new node at begining */
    // insert_begin(&head, 78);
    
    /* inserting new node at end */
    // insert_end(&head, 78);

    /* inserting new node after a given position */
    insert_pos(&head, 78, 1);

    /* create a temporary pointer */
    struct node *temp;

    temp = head;
     /* traversing the linked list and printing each member */
    while (temp != NULL){
        printf("%d ---> ", temp->age);
        temp = temp->next;
    }
    printf("\n");



}