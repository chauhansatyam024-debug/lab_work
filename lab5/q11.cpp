//
// Created by satyamchauhan on 07/10/26.
//
#include <iostream>
#include <stack>
#include <algorithm>
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
    string infix, prefix = "";

    cout << "Enter infix expression: ";
    cin >> infix;

    reverse(infix.begin(), infix.end());

    for (char &c : infix) {
        if (c == '(')
            c = ')';
        else if (c == ')')
            c = '(';
    }

    stack<char> s;

    for (char c : infix) {

        if (isalnum(c)) {
            prefix += c;
        }

        else if (c == '(') {
            s.push(c);
        }

        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                prefix += s.top();
                s.pop();
            }
            s.pop();
        }

        else {
            while (!s.empty() &&
                   precedence(s.top()) > precedence(c)) {
                prefix += s.top();
                s.pop();
                   }

            s.push(c);
        }
    }

    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }

    reverse(prefix.begin(), prefix.end());

    cout << "Prefix: " << prefix << endl;

    return 0;
}