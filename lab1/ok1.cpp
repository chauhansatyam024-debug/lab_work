//
// Created by satyamchauhan on 31/08/26.
//
#include<iostream>

void q1() {
    int arr[] = {1,5,8,4,9,7,6,2,3};
    int maxx = arr[0];
    int minn = arr[0];
    for (int n : arr) {
        if (maxx < n) {
            maxx = n;
        }
        if (minn > n) {
            minn = n;
        }
    }
    std::cout<<maxx<<" "<<minn<<std::endl;
}
int main() {
    q1();


    return 0;
}