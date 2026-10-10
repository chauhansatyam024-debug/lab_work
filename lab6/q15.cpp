//
// Created by satyamchauhan on 11/10/26.
//
#include <iostream>
using namespace std;

#define SIZE 5


int lq[SIZE], lf = 0, lr = -1;

void linearEnqueue(int x) {
    if (lr == SIZE - 1) { cout << "Linear: Overflow (" << x << ")\n"; return; }
    lq[++lr] = x;
    cout << "Linear: Inserted " << x << "\n";
}

void linearDequeue() {
    if (lf > lr) { cout << "Linear: Underflow\n"; return; }
    cout << "Linear: Deleted " << lq[lf++] << "\n";
}


int cq[SIZE], cf = 0, cr = -1, cnt = 0;

void circularEnqueue(int x) {
    if (cnt == SIZE) { cout << "Circular: Overflow (" << x << ")\n"; return; }
    cr = (cr + 1) % SIZE;
    cq[cr] = x;
    cnt++;
    cout << "Circular: Inserted " << x << "\n";
}

void circularDequeue() {
    if (cnt == 0) { cout << "Circular: Underflow\n"; return; }
    cout << "Circular: Deleted " << cq[cf] << "\n";
    cf = (cf + 1) % SIZE;
    cnt--;
}

int main() {
    cout << "--- Fill both queues ---\n";
    for (int i = 1; i <= 5; i++) {
        linearEnqueue(i * 10);
        circularEnqueue(i * 10);
    }

    cout << "\n--- Delete 3 elements ---\n";
    for (int i = 0; i < 3; i++) {
        linearDequeue();
        circularDequeue();
    }

    cout << "\n--- Insert 60 and 70 (3 slots are free) ---\n";
    linearEnqueue(60);
    circularEnqueue(60);
    linearEnqueue(70);
    circularEnqueue(70);

    cout << "\nResult:\n";
    cout << "Linear   -> wasted slots = " << lf << " (cannot be reused)\n";
    cout << "Circular -> wasted slots = 0 (all slots reused)\n";
    return 0;
}