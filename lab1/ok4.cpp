//
// Created by satyamchauhan on 31/08/26.
//
#include<iostream>
using satyam = int;
void q4(int x ) {
    int arr[] = {3,5,8,3,2,1,4,3,6,3,3,5,2,1,7,2};
    int cnt = 0;
    for (int n : arr) {
        if (x == n) cnt++;
    }
    std::cout<<cnt;
}

satyam main() {
    q4(7);


    return 0;

}