//
// Created by satyamchauhan on 20/09/26.
//
#include<iostream>
#include<algorithm>
void insertion(int arr[] , int n ,int &comA) {
    for (int i = 0 ;i<n ; i++) {

        int key = arr[i];
        int j = i-1;
        comA++;
        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = key;
    }
}
void bubble(int arr[] ,int n , int &comB) {
    bool flag = false;
    for (int i = 0 ; i<n-1 ;i++) {
        for (int j=0 ;j<n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j] ,arr[j+1]);
                flag = true;

            }
            comB++;
            if (!flag) break; // without flag or naive version will still work n^2
        }
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n =sizeof arr /sizeof arr[0];
    int comA = 0 ,comB = 0;
    insertion(arr,n,comA);
    std::cout<<comA<<" ";
    bubble(arr,n,comB);
    std::cout<<comB<<" ";


    return 0;
}