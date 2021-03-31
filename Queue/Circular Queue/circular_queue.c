#include <stdio.h>
#define SIZE 5

int array[SIZE];
int front = -1, rear = -1;

int isFull() {
    if((front == rear+1) || (front==0 && rear == SIZE-1)) return 1;
    return 0;
}

int isEmpty() {
    if(front == -1) return 1;
    return 0;
}

void enqueue(int value) {
    if(isFull())
        printf("Queue is Overflow");
    else {
        if(front == -1) front = 0;
        rear = (rear+1) % SIZE;
        array[rear] = value;
    }
}

int dequeue() {
    int element;
    if(isEmpty()) {
        printf("Queue is Underflow");
        return (-1);
    }
    else {
        element = array[front];
        if(front == rear) {
            front = -1;
            rear = -1;
        }

        else {
            front = (front+1) % SIZE;
        }
        return(element);
    }
}

void display() {
    int i;
    if(isEmpty())
        printf("Queue is empty");
    
    else {
        printf("Front -> %d", front);
        printf("\nItems ->");
        for(i = front; i != rear; i = (i+1)%SIZE) {
            printf("%d ", array[i]);
        }
        printf("\nRear -> %d", rear);
    }
}

int main() {
    enqueue(23);
    enqueue(52);
    enqueue(45);
    enqueue(5);
    enqueue(90);

    display();

    return 0;
}