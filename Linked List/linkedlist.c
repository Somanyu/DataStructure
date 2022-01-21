#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} * head;

struct node *nodeCreate(int value)
{
    struct node *nodeNew;
    nodeNew = (struct node *)malloc(sizeof(struct node));

    nodeNew->data = value;
    nodeNew->link = NULL;

    return nodeNew;
};

void insertNodeAtBeginning(int value)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
        printf("Can't allocate memory");
    else
    {
        newNode->data = value;
        newNode->link = head;

        head = newNode;
    }
}

void printNode(struct node *n)
{
    int count = 0;
    if (n == NULL)
        printf("Linked list is empty");
    while (n != NULL)
    {
        printf("%d->", n->data);
        n = n->link;
        count++;
    }
    printf("\nNumber of nodes = %d", count);
}

void main()
{
    //* Initialize nodes
    struct node *one;
    struct node *two;
    struct node *three;

    //* Allocate memory & Assign Values
    one = nodeCreate(45);
    two = nodeCreate(98);
    three = nodeCreate(3);

    //* Connect nodes;
    one->link = two;
    two->link = three;
    three->link = NULL;

    head = one;

    //* Insert nodes at beginning
    insertNodeAtBeginning(49);
    insertNodeAtBeginning(198);


    printNode(head);
}
