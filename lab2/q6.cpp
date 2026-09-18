//
// Created by satyamchauhan on 19/09/26.
//
#include<iostream>
#include<algorithm>
void print(int arr[] , int n ) {
    for (int i = 0 ;i<n ;i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
void ascendd(int arr[] , int n ) {
    for (int i = 0 ; i<n-1 ; i++) {
        for (int j = 0 ; j<n-1-i ; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j],arr[j+1]);

            }
            print(arr,n);
        }
    }
}
int main() {
    int arr[] = {5,232,52,51513521,52,352,352,5255211,523};
    int n = sizeof arr / sizeof arr[0];
    ascendd(arr,n);
}