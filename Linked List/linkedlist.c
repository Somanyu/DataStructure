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

void insertNodeAtEnd(int value)
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
        printf("Can't allocate memory");
    else
    {
        newNode->data = value;
        newNode->link = NULL;

        temp = head;

        while (temp != NULL && temp->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = newNode;
    }
}

void insertNodeAtMiddle(int value, int position)
{
    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
        printf("Can't allocate memory");

    else
    {
        newNode->data = value;
        newNode->link = NULL;

        temp = head;

        //* Traverse to (position-1) in the list
        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->link;

            if (temp == NULL)
                break;
        }

        if (temp != NULL)
        {
            newNode->link = temp->link;
            temp->link = newNode;
        }
    }
}

void deleteFirstNode()
{
    struct node *deleteFirst;

    if (head == NULL)
        printf("Linked List is empty");

    else
    {
        deleteFirst = head;
        head = head->link;

        printf("\nData Deleted = %d\n", deleteFirst->data);

        free(deleteFirst);
    }
}

void deleteLastNode()
{
    struct node *toDelete, *secondLastNode;

    if (head == NULL)
        printf("Linked List is empty");

    else
    {
        toDelete = head;
        secondLastNode = head;

        while (toDelete->link != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->link;
        }

        if (toDelete == head)
        {
            head = NULL;
        }
        else
        {
            secondLastNode->link = NULL;
        }

        free(toDelete);
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

    //* Insert nodes at end
    insertNodeAtEnd(78);
    insertNodeAtEnd(2);

    //* Insert nodes at middle
    insertNodeAtMiddle(100, 2);

    //* Delete nodes at first
    deleteFirstNode();

    printNode(head);
}
