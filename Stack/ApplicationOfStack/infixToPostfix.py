class Postfix:
    ''' Infix to Postfix using Stack in Python '''

    # initialization
    def __init__(self):
        # stack for operators
        self.stack = []
        # postfix expression
        self.output = ""
        # precedence of operators
        self.precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}

    # method to PUSH the element into stack
    def push(self, value):
        return self.stack.append(value)
    
    # method to check if the stack is empty
    def isEmpty(self):
        return True if len(self.stack) == 0 else False
    
    # method to POP the element from stack
    def pop(self):
        return self.stack.pop()
    
    # method to return the TOP element from stack
    def peek(self):
        return self.stack[-1]

    # method to check operand
    def isOperand(self, element):
        return element.isalpha()
    
        """Method to Convert"""
        def convertor(self, expr):
            
            for i in expr:

                # checks if it is operand
                if self.isOperand(i):
                    self.output += i
                
                # checks if it is open bracket '('
                elif i == "(":
                    self.push(i)
                
                # checks if it is close bracket ')'
                elif i == ")":
                    while not self.isEmpty() and self.peek() != "(":
                        self.output += self.pop()
                    self.pop()
                
                # checks if it is an operator
                else:
                    while not self.isEmpty() and self.peek() != "(" and self.precedence[self.peek()] >= self.precedence[i]:
                        self.output += self.pop()
                    self.push(i)

            # pops the left over element
            while self.stack:
                self.output += self.pop()
                
            return self.output  
            
expression = "(a-b/c)*(a/k-l)"
print("INFIX expression :: ", expression)

post = Postfix()
print("POSTFIX expression :: ", post.converter(expression))