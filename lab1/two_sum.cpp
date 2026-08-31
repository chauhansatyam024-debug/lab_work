//
// Created by satyamchauhan on 31/08/26.
//
#include<iostream>
#include<vector>
int main() {
    int arr[] = {1,2,3,4,5};
    int target = 7;
    std::vector<std::vector<int>> result ={};
    int n = sizeof arr / sizeof arr[0];
    for (int i = 0; i<n ; i++) {
        for (int j = i+1; j<n ; j++) {
            if (arr[i] + arr[j] == target) {
                result.push_back({i,j});
            }
        }
    }
    for (int i = 0; i<result.size();i++) {
        for (int j = 0 ; j<2 ; j++) {
            std::cout<<result[i][j]<<" ";
        }
        std::cout<<std::endl;

    }
}