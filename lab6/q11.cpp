#include<iostream>
#include<limits>
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

    void max_min() {
        int maxx =std::numeric_limits<int>::min();
        int minn = std::numeric_limits<int>::max();

        for (int i  = 0 ;i<=top ; i++) {
            if (arr[i] > maxx) {
                maxx = arr[i];
            }
            if (arr[i] < minn) {
                minn = arr[i];
            }
        }

        std::cout<<maxx<<" "<<minn;

    }
};

int main() {
    que qe;
    for (int i = 0  ;i<MAX ; i++) {
        qe.enque(i);
    }
    qe.max_min();

    return 0;
}