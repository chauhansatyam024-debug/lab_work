//
// Created by satyamchauhan on 19/09/26.
//
#include<iostream>
#include<algorithm>
void print(int arr[],int n ) {
    for (int i = 0 ; i<n ; i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
void descend(int arr[],int n) {
    for (int i = 0 ; i <n-1 ; i++) {
        for (int j = 0 ;  j<n-i-1; j++) {
            if (arr[j]<arr[j+1]) {
                std::swap(arr[j],arr[j+1]);
            }
            print(arr,n);
        }
    }
}
int main() {
    int arr[] ={1,4141,41,41,41414,1,41,41,41,4141414,4};
    int n = sizeof arr/sizeof arr[0];
    descend(arr,n);
}