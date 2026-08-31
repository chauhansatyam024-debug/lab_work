//
// Created by satyamchauhan on 31/08/26.
//
#include<iostream>
void q2() {
    int arr[] ={1,2,3,4,5,4,5,2,9,7,5,5,5};
    int sum = 0;
    for (int n : arr) {
        sum+=n;
    }
    std::cout<<sum<<std::endl;
}

int main() {
    q2();

    return 0;
}