//
// Created by satyamchauhan on 01/09/26.
//
#include<iostream>
#include<vector>
#include<unordered_map>
void duplicate(int arr[],int n) {
    std::unordered_map<int,int> freq {};
    for (int i = 0 ;i<n ; i++) {
        freq[arr[i]]++;
    }
    for (auto pair : freq) {
        if (pair.second >= 2) {
            std::cout<<pair.first<<" ";
        }
    }
}
int main() {
    int arr[] = {1,2,4,25,24,424,1,3,41,3,41,4,1,41,4,141,41,41,41};
    int n = sizeof arr / sizeof arr[0];
    duplicate(arr,n);

    return 0;
}
