#include <stdio.h>
#include <stdlib.h>

/* template for our nodes */
struct node {
    int age;
    struct node *next;
};

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

    /* create a temporal pointer */
    struct node *temp;

    temp = head;

    /* traversing the linked list and printing each member */
    while (temp->next != NULL){
        printf("%d --->", temp->age);
        temp = temp->next;
    }
    printf("%d ---> \n", temp->age);
    



}