class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None

ll = LinkedList()

ll.head = Node(3)
second = Node(6)
third = Node(9)
fourth = Node(12)

ll.head.next = second
second.next = third
third.next = fourth
fourth.next = None

class first_class:
    def __init__(self, data, next):
        self.data = data
        self.name = next
    

class second_class:
    def __init__(self):
        self.head = None
    
obj1 = second_class()
obj1.head = first_class(123)
obj2 = first_class(369)

obj1.head.name = "Qwerty"

        