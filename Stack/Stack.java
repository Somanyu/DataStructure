package Stack;
// Stack implementation in Java
class Stack {

    // Stack 
    private int stack[];
    // Top element in stack
    private int top;
    // Capacity of stack
    private int capacity;

    // Creating a Stack
    Stack(int size) {
        stack = new int[size];
        capacity = size;
        top = 1;
    }

    // Pushing elements into stack
    public void push(int value) {
        if(isFull()) {
            System.out.println("Stack is Full(overflow)");

            System.exit(1);
        }

        System.out.println("Pushing "+ value);
        stack[++top] = value;
    }

    // Pops the element
    public int pop() {
        if(isEmpty()) {
            System.out.println("Stack is empty(underflow)");

            System.exit(1);

        }
        return stack[top--];
        
    }

    // Returns size of stack
    public int getSize() {
        return top + 1;
    }

    // Checks if the stack is empty
    public Boolean isEmpty() {
        return top == -1;
        
    }

    // Checks if the stack is full
    public Boolean isFull() {
        return top == capacity -1;
        
    }

    // Output the elements of stack
    public void output() {
        for (int i = 0; i <= top; i++) {
            System.out.println(stack[i] + ",");
        }
    }

    public static void main(String[] args) {
        Stack stack = new Stack(5);

        // Pushing some elements into the stack
        stack.push(1);
        stack.push(2);
        stack.push(45);
        stack.push(90);
        

        System.out.println("Stack: ");
        stack.output();

        // Pops the element from stack
        stack.pop();
        System.out.println("Stack: ");
        stack.output();

    }
    
}
