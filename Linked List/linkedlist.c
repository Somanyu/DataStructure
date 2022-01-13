#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *nodeCreate(int value)
{
    struct node *nodeNew;
    nodeNew = (struct node *)malloc(sizeof(struct node));

    nodeNew->data = value;
    nodeNew->next = NULL;

    return nodeNew;
};

void printList(struct node *n)
{
    while (n != NULL) {
        printf("%d->", n->data);
        n = n->next;
    }
}


void main()
{
    struct node *first;
    struct node *second;
    struct node *third;

    first = nodeCreate(23);
    second = nodeCreate(78);
    third = nodeCreate(11);

    first->next = second;
    second->next = third;

    /*
    * +--------------+          +--------- -------+         +----------------+
    * |  23  | First | ----->   |  78  |  Second  | ----->  |  11  |  Third  |
    * +--------------+          +---------- ------+         +----------------+
    * 
    */
   printList(first);
   
}




