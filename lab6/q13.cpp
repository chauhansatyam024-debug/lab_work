#include<iostream>
#define MAX 5
class que {

public:
    int arr[MAX];
    int top = -1;
    int front = -1;
    void enque(int val) {
        if (top <  MAX-1) {
            arr[++top] = val;
        }
        else if (front != -1) {
            arr[front--] = val;
        }
        else {
            std::cout<<"overflow";
        }
    }


    void deque() {
        if (top == -1) {
            std::cout<<"underflow";

        }
        else {
            std::cout<<arr[front+1]<<" ";
            front++;
        }
    }

    void peek() {

        std::cout<<arr[top]<<" ";
    }

    void display() {
        for (int i = 0 ;i<= top ; i++) {
            std::cout<<arr[i]<<" ";
        }
    }
};

int main() {

    que qe;
    for (int i = 0 ; i<=MAX ;i ++) {
        qe.enque(i);
    }

    return 0;
}