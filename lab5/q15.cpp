//
// Created by satyamchauhan on 07/10/26.
//
#include <iostream>
#include <chrono>
using namespace std;

#define MAX 100000

int stackArr[MAX];
int top = -1;

void push(int x) {
    if (top < MAX - 1)
        stackArr[++top] = x;
}

void pop() {
    if (top >= 0)
        top--;
}

void peek() {
    if (top >= 0)
        cout << "Top = " << stackArr[top] << endl;
}

void display() {
    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << " ";
}

int main() {

    // Push
    auto start = chrono::high_resolution_clock::now();

    push(10);

    auto end = chrono::high_resolution_clock::now();

    cout << "Push Time: "
         << chrono::duration_cast<chrono::nanoseconds>
            (end - start).count()
         << " ns\n";


    // Pop
    start = chrono::high_resolution_clock::now();

    pop();

    end = chrono::high_resolution_clock::now();

    cout << "Pop Time: "
         << chrono::duration_cast<chrono::nanoseconds>
            (end - start).count()
         << " ns\n";


    // Peek
    push(20);

    start = chrono::high_resolution_clock::now();

    peek();

    end = chrono::high_resolution_clock::now();

    cout << "Peek Time: "
         << chrono::duration_cast<chrono::nanoseconds>
            (end - start).count()
         << " ns\n";


    return 0;
}