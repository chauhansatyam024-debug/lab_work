//
// Created by satyamchauhan on 19/09/26. 00:33
//


#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[n] = {12,41,41,41,414,14,141,41,4,4,4,56,};

    int key;
    cout << "key: ";
    cin >> key;

    int pos = linearSearch(arr, n, key);

    if (pos != -1)
        cout << "found" << pos<< endl;
    else
        cout << "not found" << endl;
    return 0;
}