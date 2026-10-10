#include<iostream>
#define MAX 5
class que {

public:
    int arr[MAX];
    int top = -1;
    void enque(int val) {
        if (top <  MAX-1) {
            arr[++top] = val;
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
            std::cout<<arr[0]<<" ";
            for (int i = 0; i<top ; i++ ) {
                arr[i] = arr[i+1];
            }
            top--;
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

    void reverse() {
        for (int i =  0 ; i<=top/2 ; i++) {
            int temp = arr[top-i];
            arr[top-i] = arr[i];
            arr[i] = temp;
        }
    }
};

int main() {

    que qe;
    for (int i = 0 ; i<MAX ;i ++) {
        qe.enque(i);
    }
    qe.reverse();
    qe.display();

    return 0;
}