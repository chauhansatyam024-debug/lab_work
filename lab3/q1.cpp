//
// Created by satyamchauhan on 20/09/26.
//
#include <iostream>
#include<algorithm>

using namespace std;

void printarr(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "array before sorting: ";
    printarr(a, n);

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        cout << "after pass " << i + 1 << ": ";
        printarr(a, n);
        if (!swapped) break;
    }

    cout << "sorted array: ";
    printarr(a, n);
    return 0;
}