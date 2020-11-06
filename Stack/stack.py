class Stack:
    """ Stack Implementation using Python """

    # Initialization
    def __init__(self):
        # stack for operators
        self.stack = []
        
    
    # Method to PUSH the element to stack
    def push(self, value):
        return self.stack.append(value)
    
    # Method to pop the element to stack
    def pop(self):
        if not self.isEmpty():
            return self.stack.pop()
    
    # Method to check is stack is EMPTY
    def isEmpty(self):
        return True if len(self.stack) == 0 else False
    
    # Method to return the top element of stack
    def peek(self):
        return self.stack[-1]

    # Method to print the stack
    def output(self):
        print(self.stack)

# object for stack
object = Stack()

# Pushing the element
object.push(12)
object.push(34)
object.push(23)
object.push(87)
object.push(23)

# Outputing the element 
object.output()

# Poping the element
object.pop()

object.output()
