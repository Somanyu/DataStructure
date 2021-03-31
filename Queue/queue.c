#include<stdio.h>
#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int item) {
    
    if((front == 0 && rear == MAX-1) || (front == rear+1)) {
        printf("Queue Overflow");
    }

    if(front == -1) {
        front = 0;
        rear = 0;
    }

    else {
        if(rear == MAX-1)
            rear = 0; 
        else
            rear = rear+1;
    }
    queue[rear] = item;

}

void dequeue() {
    if(front == -1) {
        printf("\nQueue Underflow");
    }

    if(front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        if(front == MAX-1)
            front = 0;
        else
            front = front+1;
    }
}

void display() {
    int frontpos = front, rearpos = rear;
    if(front == -1) {
        printf("\nQueue is empty");
    }
    if(frontpos <= rearpos)
        while(frontpos <= rearpos) {
            printf("%d ", queue[frontpos]);
            frontpos++;
        }
}

int main() {
    enqueue(78);
    enqueue(8);
    enqueue(89);
    enqueue(19);
    enqueue(23);
    enqueue(3);

    dequeue();

    display();
}