//
// Created by satyamchauhan on 07/10/26.
//

#include<iostream>

class stck {
public :
    int top = -1;
    int arr[4];

    // we can add function to input self define array max elements

    void push(int val) {
        if (top < 4-1) {
            arr[++top] = val;
        }
        else {
            std::cout<<"overflow";
        }
    }
};
int main() {

    stck stk;
    for (int i = 0 ; i<5 ; i++) {
        stk.push(i);
    }

    return 0;
}