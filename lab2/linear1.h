//
// Created by satyamchauhan on 14/09/26.
//

#ifndef DSA_LAB_LINEAR1_H
#define DSA_LAB_LINEAR1_H

#endif //DSA_LAB_LINEAR1_H
#include<iostream>
class lab2 {
public:
    void ls(int arr[] , int n) {
        for (int i = 0 ;i<n ; i++) {
            std::cout<<i<<std::endl;
            std::cout<<arr[i]<<std::endl;
        }
    }
    int bs(int arr[] , int n,int key) {
        int high = n;
        int low = 0;
        while (low<high) {
            int mid  = low + (high - low)/2;
            if (arr[mid] == key) {
                return mid;
            }
            else if (arr[mid] > key) high = mid - 1;
            else low = mid +1;
        }
        return -1;
    }
    void insertion(int arr[],int n) {
        for (int i = 0 ; i<n ; i++) {
            int temp = arr[i];
            int j = i-1;
            while (j>=0 && arr[j] > temp) {
                arr[j+1] = arr[j];
                j--;

            }
            arr[j+1] = temp;

        }

    }
    void bubblesort(int arr[],int n) {
        for (int  i = 0 ; i<n-1 ;i++) {
            for (int j  = 0; j<n-i-1 ; j++) {
                if (arr[j] > arr[j+1]) {
                    arr[j] = arr[j+1] + arr[j];
                    arr[j+1] = arr[j] - arr[j+1];
                    arr[j] = arr[j] - arr[j+1];
                }
            }
        }
    }
};