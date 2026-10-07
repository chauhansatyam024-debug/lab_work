//
// Created by satyamchauhan on 07/10/26.
//
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;

    cout << "Enter postfix expression: ";
    cin >> exp;

    stack<int> s;

    for (char c : exp) {

        if (isdigit(c)) {
            s.push(c - '0');
        }
        else {
            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            switch (c) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }

    cout << "Result = " << s.top() << endl;

    return 0;
}