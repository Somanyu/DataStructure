#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *previous;
    struct node *next;
} * head, *tail;

struct node *nodeCreate(int value)
{
    struct node *nodeNew;
    nodeNew = (struct node *)malloc(sizeof(struct node));

    nodeNew->data = value;
    nodeNew->previous = NULL;
    nodeNew->next = NULL;

    return nodeNew;
}

void insertNodeAtBeginning(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
        printf("Linked List is empty");

    else
    {
        newNode->data = value;
        newNode->next = head;
        newNode->previous = NULL;

        head->previous = newNode;

        head = newNode;
    }
}

void insertNodeAtEnd(int value)
{
    struct node *newNode;

    if (newNode == NULL)
        printf("Can't allocate memory");
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        // tail = head;

        // while (tail->next != NULL)
        //     tail = tail->next;

        newNode->data = value;
        newNode->next = NULL;
        newNode->previous = tail;

        tail->next = newNode;
        tail = newNode;
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
        newNode->next = NULL;
        newNode->previous = NULL;

        temp = head;

        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;

            if (temp == NULL)
                break;
        }

        if (temp != NULL)
        {
            newNode->next = temp->next;
            newNode->previous = temp;
            temp->next = newNode;
        }
    }
}

void printNode(struct node *n)
{
    int count = 0;
    if (n == NULL)
        printf("Linked List is empty");
    printf("\n");
    while (n != NULL)
    {
        printf("%d <--> ", n->data);
        n = n->next;
        count++;
    }
    printf("\nNumber of nodes = %d", count);
}

void reversePrintNode()
{
    if (head == NULL)
        printf("Linked List is empty");

    // tail = head;
    // while (tail->next != NULL)
    //     tail = tail->next;

    printf("\n");
    printf("\nPrint from last: ");
    while (tail != NULL)
    {
        printf("%d <--> ", tail->data);
        tail = tail->previous;
    }
}

void main()
{
    //* Initialize nodes
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;

    //* Allocate memory & Assign Values
    one = nodeCreate(40);
    two = nodeCreate(30);
    three = nodeCreate(20);
    four = nodeCreate(10);

    //* Connect nodes;
    one->next = two;

    two->previous = one;
    two->next = three;

    three->previous = two;
    three->next = four;

    four->previous = three;

    head = one;

    tail = head;
    while (tail->next != NULL)
    tail = tail->next;
    

    //* Insert node at beginning
    insertNodeAtBeginning(78);
    insertNodeAtBeginning(147);

    //* Insert node at end
    insertNodeAtEnd(64);
    insertNodeAtEnd(784);

    //* Insert node at middle
    insertNodeAtMiddle(49, 3);

    printNode(head);
    reversePrintNode(head);
}