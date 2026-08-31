//
// Created by satyamchauhan on 31/08/26.
//
#include <iostream>
int  q3(int x) {
    int arr[] = {1,5,6,7,9,2,4,8};
    for (int i =0;i<sizeof(arr) /  sizeof(arr[0]) ; i++) {
        if (x == arr[i]) {
            return i;

        }

    }
    return -1;
}

int main() {
    q3();

    return 0;
}