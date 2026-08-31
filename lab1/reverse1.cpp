//
// Created by satyamchauhan on 31/08/26.
//

#include<iostream>
int main() {
    int arr[] = {1,2,3,4,5};
    int n = (sizeof arr/ sizeof arr[0])  - 1;
    int k = n;
    int i = 0;
    for (i ; i<=n/2 ; i++) {
        arr[i] = arr[n] + arr[i];
        arr[n] = arr[i] - arr[n];
        arr[i] = arr[i] - arr[n];
        n--;

    }
    for (int l = 0 ; l <=k ; l++ ) {
        std::cout<<arr[l]<<" ";
    }
}
