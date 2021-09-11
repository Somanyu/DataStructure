package Stack.ApplicationOfStack;

import java.util.*;

public class infixToPostfix {
    
    // method to return operator precedence
    static int precedence(char ch) {
        
        switch (ch) {
            
            case '+':
            case '-':
                return 1;
            
            case '*':
            case '/':
                return 2;
            
            case '^':
                return 3;
        }
        return -1;
    }

    /* Method that Converts */
    static String converter(String exp) {

        // initializing string for output
        String result = new String("");

        // initializing stack for operators
        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < exp.length(); i++) {

            char c = exp.charAt(i);

            // if the element is operand
            if (Character.isLetterOrDigit(c))
                result += c;

            // if the element is open bracket '('
            else if (c == '(')
                stack.push(c);
            
            // if the element is close brakcet ')'
            else if (c == ')') {

                while (!stack.isEmpty() && stack.peek() != '(')
                    result += stack.pop();

                stack.pop();
            }
            
            // if an operator is encountered
            else {
                while (!stack.isEmpty() && precedence(c) <= precedence(stack.peek())) {
                    result += stack.pop();
                }
                stack.push(c);
            }
        }

        // pop the remaining operators in the stack
        while (!stack.isEmpty()) {
            if (stack.peek() == '(')
                return "Not a valid expression";
            result += stack.pop();
        }
        return result;
    }

    public static void main(String[] args) {
        String exp = "a*b(c^d-e)^(f+g*h)-i";
        System.out.println(converter(exp));
    }
    
}