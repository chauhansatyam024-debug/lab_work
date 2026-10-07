//
// Created by satyamchauhan on 07/10/26.
//

#include<iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;

    return 0;
}

int main() {
    string infix, postfix = "";
    stack<char> s;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (char c : infix) {

        if (isalnum(c))
            postfix += c;

        else if (c == '(')
            s.push(c);

        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }

        else {
            while (!s.empty() &&
                   precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
                   }

            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix: " << postfix << endl;

    return 0;
}