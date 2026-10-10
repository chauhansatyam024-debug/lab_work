//
// Created by satyamchauhan on 07/10/26.
//

#include<iostream>
#include<stack>

int main() {

    std::stack<char> rev{};

    std::string s ="";
    std::getline(std::cin,s);

    for (char c : s) {
        rev.push(c);
    }

    while (!rev.empty()) {
        std::cout<<rev.top();
        rev.pop();
    }

    return 0;
}