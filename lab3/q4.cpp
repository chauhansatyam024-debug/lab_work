//
// Created by satyamchauhan on 20/09/26.
//
#include<iostream>
#include<algorithm>
void select(int arr[] , int n) {
    for (int i = 0 ;i<n-1 ; i++) {
        int mindex = i;
        for (int j = i+1 ; j<n ;j++) {

            if (arr[j] < arr[mindex]) {
                mindex = j;
            }

        }
        if (mindex != i) {
            std::swap(arr[i],arr[mindex]);
            std::cout<<arr[mindex]<<" ";
        }
    }
    std::cout<<std::endl;
    for (int i = 0 ; i<n ; i++) {
        std::cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {353,5,53,5,51252,52,5,25,512,52,5,25};
    int n = sizeof arr/sizeof arr[0];
    select(arr,n);
}
