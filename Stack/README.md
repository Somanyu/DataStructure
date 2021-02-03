# **Stack Data Structure**  :cd:
*Stack* is an abstract data type(ADT) which performs operations like push, pop and display in a particular order *i.e* LIFO - Last In First Out or FILO - First In Last Out.

## Real life examples of Stack Data Structure:
A good real life example of Stack is books :books: piled up on each other. The bottom most book is alwasy kept first in order while the top most book is kept last in order. So if you want the bottom most book(First In) which was kept first in the box then you have to take all the books one by one untill you reach the bottom. By doing this you can remove the book(Last Out) which was kept first. Same with the book present at the top of the pile. It was the last book kept in(Last In) the pile but it will be the first to be taken out(First Out) of the pile.

## Stack Terms:
**Overflow:** when we try to add or push a element to array which is full then this condition is known as overflow condition<br>
**Underflow:** when we try to remove or pop a element from a empty array then this condition is known as underflow condition

## Algorithm for Stack Data Structure:

1. Initialize a one dimensional array 
```
stack = []
```
2. Define a int variable of top=-1  
This represents the top of the Stack Data Structure
```
int top = -1
```
3. Declare PUSH, POP, PEEK functions

    * PUSH() function:
    ``` 
    if stack is full
        print Overflow Condition
    end if
    else
        top++ AND stack[top] = value
    end else
    ```
    * POP() function:
    ```
    if stack is empty
        print Underflow Condition
    end if
    else
        delete stack[top] AND top--
    else end
    ```
    * PEEK() function:
    ```
    if stack is full
        return stack[top]
    ```
![alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b4/Lifo_stack.png/350px-Lifo_stack.png "Stack Data Structure")

## Application of Stack Data Structure: