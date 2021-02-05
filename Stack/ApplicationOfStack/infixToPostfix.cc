#include<bits/stdc++.h>
using namespace std;

// Function to return precedence
int precedence(char c) {

    if(c == '+' || c == '-')
    return 1;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '^')
    return 3;
    else
    return -1;
    
}

// main function to convert
void converter(string s) {

    std::stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    for (int i = 0; i < l; i++){

        // if the scanned element is an operand
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z'))
            ns += s[i];

        // if the scanned element is open bracket "("
        else if (s[i] == '(')
        st.push('(');

        // if the scanned element is close bracket ")"
        else if (s[i] == ')') {
            while (st.top() != 'N' && st.top() != '(') {
                	
                    char c = st.top();
                    st.pop();
                    ns += c;
            }
            if (st.top() == '(') {
                char c = st.top();
                st.pop();
            }
        }

        // if the scanned element is operator
        else {
            while (st.top() != 'N' && precedence(s[i]) <= precedence(st.top())) {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
    }

    // pop all the remaining elements from stack
    while (st.top() != 'N') {
        char c = st.top();
        st.pop();
        ns += c;
    }
    cout << ns << endl;
}

// function calling
int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    converter(exp);
    return 0;
}