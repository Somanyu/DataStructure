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

        while (temp->link != NULL)
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
            printf("\nData Deleted = %d\n", toDelete->data);
        }

        free(toDelete);
    }
}

void deleteMiddleNode(int position)
{
    struct node *toDelete, *prevNode;

    if (head == NULL)
        printf("Linked List is empty");

    else
    {
        toDelete = head;
        prevNode = head;

        for (int i = 2; i <= position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->link;

            if (toDelete == NULL)
                break;
        }

        if (toDelete != NULL)
        {
            if (toDelete == head)
                head = head->link;

            prevNode->link = toDelete->link;
            toDelete->link = NULL;
            printf("\nData Deleted = %d\n", toDelete->data);

            free(toDelete);
        }
    }
}

void deleteAll()
{
    struct node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->link;

        free(temp);
    }
}

void reverseList()
{
    struct node *nextNode, *prevNode;

    while (head != NULL)
    {
        nextNode = head->link;
        head->link = prevNode;
        prevNode = head;
        head = nextNode;
    }

    head = prevNode;
    
}

void printNode(struct node *n)
{
    int count = 0;
    if (n == NULL)
        printf("Linked list is empty");
    printf("\n");
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
    one = nodeCreate(40);
    two = nodeCreate(50);
    three = nodeCreate(60);

    //* Connect nodes;
    one->link = two;
    two->link = three;
    three->link = NULL;

    head = one;

    //* Insert nodes at beginning
    insertNodeAtBeginning(30);
    insertNodeAtBeginning(20);
    insertNodeAtBeginning(10);

    //* Insert nodes at end
    insertNodeAtEnd(70);
    insertNodeAtEnd(80);

    //* Insert nodes at middle
    insertNodeAtMiddle(100, 2);

    //* Delete nodes at first
    deleteFirstNode();

    //* Delete nodes at last
    deleteLastNode();

    //* Delete nodes at middle
    deleteMiddleNode(2);

    printNode(head);

    //* Reverse list
    reverseList();
    printf("\n\nReversed Linked List = ");
    printNode(head);
}
