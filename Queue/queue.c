#include <stdio.h>
#define MAX 50

void enqueue(int);
void dequeue();
void display();

int queue[MAX];
int front = -1;
int rear = -1;

int main() {
    enqueue(18);
    enqueue(42);
    enqueue(53);
    enqueue(20);
    enqueue(90);
    enqueue(9);
    enqueue(34);

    dequeue();

    display();

    return 0;
}

void enqueue(int value) {
    if(rear == MAX-1)
        printf("\nQueue Overflow\n");
    else {
        if(front == -1)
            front=0;
            rear = rear+1;
            queue[rear] = value;
    }
}

void dequeue() {
    if(front == -1 || front > rear)
        printf("\nQueue Underflow\n");
    else {
        front = front+1;
    }
}

void display() {
    if(front==-1)
        printf("Queue is Empty");
    else {
        for(int i = front; i <= rear; i++) {
            printf(" %d ", queue[i]);
        }
    }
}


