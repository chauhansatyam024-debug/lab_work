//
// Created by satyamchauhan on 19/09/26.
//
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int &comparisons) {
    comparisons = 0;
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == key) return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key, int &comparisons) {
    comparisons = 0;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        comparisons++;
        if (arr[mid] == key) return mid;
        else if (key > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "elements:";
    cin >> n;

    int arr[n];
    cout << "Enter " << n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "key: ";
    cin >> key;

    int compLinear, compBinary;
    int posLinear = linearSearch(arr, n, key, compLinear);
    int posBinary = binarySearch(arr, n, key, compBinary);
    cout<<compBinary<<" "<<compLinear;

    return 0;
}