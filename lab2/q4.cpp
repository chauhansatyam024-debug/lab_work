//
// Created by satyamchauhan on 19/09/26.
//
#include<iostream>

// bubble sort from small to big

void print(int arr[],int n ) {
    for (int i = 0 ; i<n ; i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
void ascend(int arr[] , int n ) {
    for (int i = 1 ; i<n ; i++) {
        int curr = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>curr) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
        print(arr,n);
    }
}
int main() {
    int arr[] = {42,23,1,4,5,131,4,44};
    int n = sizeof arr / sizeof arr[0];
    ascend(arr,n);

    return 0;
}