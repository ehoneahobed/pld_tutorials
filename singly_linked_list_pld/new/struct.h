#ifndef _MAIN_H_
#define _MAIN_H_

/* template for our nodes */
struct node {
    int age;
    struct node *next;
};

void insert_begin(struct node **head, int value);
void insert_end(struct node **head, int value);
void insert_pos(struct node **head, int value, int pos);
#endif