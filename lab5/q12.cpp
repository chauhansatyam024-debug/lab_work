//
// Created by satyamchauhan on 07/10/26.
//
#include <iostream>
using namespace std;

#define MAX 10

class TwoStacks {
    int arr[MAX];
    int top1, top2;

public:
    TwoStacks() {
        top1 = -1;
        top2 = MAX;
    }

    void push1(int x) {
        if (top1 + 1 == top2)
            cout << "Overflow\n";
        else
            arr[++top1] = x;
    }

    void push2(int x) {
        if (top1 + 1 == top2)
            cout << "Overflow\n";
        else
            arr[--top2] = x;
    }

    void pop1() {
        if (top1 == -1)
            cout << "Stack 1 Underflow\n";
        else
            cout << "Popped from Stack 1: "
                 << arr[top1--] << endl;
    }

    void pop2() {
        if (top2 == MAX)
            cout << "Stack 2 Underflow\n";
        else
            cout << "Popped from Stack 2: "
                 << arr[top2++] << endl;
    }
};

int main() {
    TwoStacks s;

    s.push1(10);
    s.push1(20);

    s.push2(100);
    s.push2(200);

    s.pop1();
    s.pop2();

    return 0;
}