//
// Created by satyamchauhan on 07/10/26.
//
#include<iostream>

class stck {
public :

    int top = -1;
    int arr[4];


    void pop() {
        if (top == -1) {
            std::cout<<"underflow";
        }
        else {
            std::cout<<arr[top]<<" ";
            top--;
        }
    }


};

int main() {
    stck stk ;

    stk.pop();

    return 0;
}