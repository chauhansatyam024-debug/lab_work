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
        if (top < 4) {
            arr[++top] = val;
        }
        else {
            std::cout<<"overflow";
        }
    }
    void pop() {
        if (top == -1) {
            std::cout<<"underflow";
        }
        else {
            std::cout<<arr[top]<<" ";
            top--;
        }
    }
    void peek() {
        if (top != -1) {
            std::cout<<arr[top]<<" ";
        }
        else {
            std::cout<<" empty "<<" ";
        }
    }
    void display() {
        for (int i = 0; i<=top ; i++) {
            std::cout<<arr[i]<<" ";
        }
    }

};
int main() {
    stck stk;
    stk.push(5);
    stk.push(9);
    stk.push(89);

    stk.display();


    return 0;
}