#ifndef _MAIN_H_
#define _MAIN_H_

/* template for our nodes */
struct node {
    int age;
    struct node *next;
};

void insertAtBeginning(struct node **head, int value);
void insertAtEnd(struct node **head, int value);
void insertPosition(struct node **head, int value, int pos);
void deleteBeginning(struct node **head);
void deleteEnd(struct node **head);
void deletePos(struct node **head, int pos);
#endif