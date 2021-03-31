# **Queue Data Structure**
*Queue* is an abstract data type(ADT) which performs operations similar to ![Stack Data Structure](https://github.com/Somanyu/DataStructure/tree/main/Stack) except it follows FIFO order *i.e* First In First Out. 

## Real life examples of Stack Data Structure:
A perfect real life example for Queue is when you are standing in queue for bus tickets/train tickets. The first person to enter the queue is the first person to leave the queue after receiving the ticket. 

## Queue Terms:
**Overflow:** when we try to add or enqueue a element to queue which is full then this condition is known as overflow condition.<br>
**Underflow:** when we try to remove or dequeue a element to queue which is empty then this condition is known as underflow condition.<br>
**Enqueue:** when we add an element to the queue it's called enqueue.<br>
**Dequeue:** when we remove an element from the queue it's called dequeue.

<br>

<img src="https://www.codesdope.com/staticroot/images/ds/queue1.png" alt="Queue" height="300">

<br>

## Algorithm for Queue Data Structure

1. Initialize a one dimensional array
```
queue = []
```
2. Declare ENQUEUE, DEQUEUE, PEEK functions

    * ENQUEUE() function:
    ```
    if queue is full
        print Overflow Condition
    end if
    else 
        rear = rear+1
        queue[rear] = data
    end else
    ```
    * DEQUEUE() function:
    ```
    if queue is empty
        print Underflow Condition
    end if
    else
        data = queue[front]
        front = front+1
    end else
    ```
    * PEEK() function:
    ```
    if queue is full
        return queue[top]
    ```
        