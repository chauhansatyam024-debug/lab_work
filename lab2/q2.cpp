//
// Created by satyamchauhan on 19/09/26.
//
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "elements: ";
    cin >> n;

    int arr[n];
    cout << "array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "key: ";
    cin >> key;

    int pos = binarySearch(arr, n, key);

    if (pos != -1)
        cout << "index " << pos << endl;
    else
        cout << "found" << endl;

    return 0;
}