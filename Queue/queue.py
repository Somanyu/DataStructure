class Queue:
    """ Queue Implementation using Python """

    # Initialization
    def __init__(self):
        self.queue = []

    # Method to Enqueue the element to queue
    def enqueue(self, value):
        return self.queue.insert(0, value)
    
    # Method to dequeue the element to queue
    def dequeue(self):
        if not self.isEmpty():
            return self.queue.pop()
        
    # Method to check if queue is EMPTY
    def isEmpty(self):
        return True if len(self.queue) == 0 else False

    # Method to return the top element of stack
    def peek(self):
        return self.queue[-1]
    
    # Method to print the stack
    def output(self):
        print(self.queue)

# object for queue
object = Queue()

# Enqueue the element
object.enqueue(23)
object.enqueue(56)
object.enqueue(61)
object.enqueue(10)
object.enqueue(7)

# Dequeue the element
object.dequeue()

# Queue output
object.output()