//
// Created by satyamchauhan on 07/10/26.
//


#include<iostream>
#include<stack>

int main() {

    std::stack<char> chk{};

    std::string s ="";
    std::getline(std::cin,s);

    for (char c : s) {
        if (c == '(') {
            chk.push(c);
        }
        else {
            if (chk.empty()) {
                break;
            }
            int top = chk.top();
            if (top == '(' && c == ')') {
                chk.pop();
            }
        }
    }
    if (chk.empty()) {
        std::cout<<"right";
    }
    else {
        std::cout<<"wrong";
    }
    return 0;
}