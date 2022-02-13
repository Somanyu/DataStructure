# **Linked List Data Structure**  :train:
*Linked List* is a linear data stucture that consists of nodes connected with each other. Each node is present randomly in the memory and connected to each other via links (pointers).
Node consists of two parts, one is data part that consists of data and other is link which has the pointer that points to it to the next node.

<br>

![alt text](https://www.journaldev.com/wp-content/uploads/2019/06/Node.jpg.webp "Linked List Node")

<br>

## Real life examples of Linked List Data Structure:
1. In music player we can go to previous song and next song, this functionality is based upon Linked List.
2. Similar to the previous example we have linked list implementation in the browser where we use previous and next button to navigate through the web pages.

<br>

## Type of Linked List: 
1. Singly Linked List
2. Doubly Linked List
3. Circular Linked List

<br>

### 1. Singly Linked List: 
It is a type of linked list where one node consists of two parts. One part consists of data and the other consists of pointer or link  to next node.
<p style="text-align: center">DATA | LINK ---->  DATA | LINK ---->NULL</p>

### 2. Doubly Linked List:
A doubly linked list has three parts in it's node. First part contains pointer or link to previous node, second part has the data and the third part has pointer or link to next node.
<p style="text-align: center">LINK | DATA | LINK ----> LINK | DATA | LINK ---->LINK | DATA | LINK ----> NULL</p>

### 3. Circular Linked List:
When all the nodes ar connected to each other *i.e* First node is linked to last node. The last not does not has NULL instead linked to the first node thus creating a circle.

<br>

## Time Complexity of various operation
| Operation | Time Complexity |
| ----------- | ----------- |
| Insert at Beginning | O(1) |
| Return Front node | O(1) |
| Delete at Beginning | O(1) |
| Insert at End | O(n) |
| Return Last node | O(n) |
| Delete at End | O(n) |
| Find node by key | Text |
| Remove key from list| Text |
| Insert at Middle | Text |
| Delete at Middle | Text |

## **NOTE**: Any operation with the last node of the linked list will be different, if there is a tail pointer that points to the last node of the linked list

| Operation | Time Complexity |
| ------------ | --------------|
| Insert at End | O(1) |
| Delete at End | O(n) |