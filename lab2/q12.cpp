//
// Created by satyamchauhan on 19/09/26.
//
#include<iostream>
#include<algorithm>

void insertion(int arr[],int n ) {
    for (int i = 1 ;i<n ; i++) {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void select(int arr[],int n) {
    for (int i= 0 ;i<n-1 ; i++) {
        int mindex = i;
        for (int j = i+1 ; j<n ; j++) {
            if (arr[j] < arr[mindex]) {
                mindex = j;
            }
        }
        if (mindex != i) {
            std::swap(arr[mindex],arr[i]);
        }
    }
}
void bubble(int arr[],int n) {
    for (int i = 0 ; i<n-1; i++) {
        for (int j = 0 ; j<n-1-i ; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main() {
    int arr[] = {4,12,24,14,12,4,1,41,4,1,51};
    int n = sizeof arr /sizeof arr[0];
    int num = 0 ;
    std::cout<<"1 for insetion \n, 2 for selection\n , 3 for bubble : "<<" ";
    std::cin>>num;
    if (num == 1) {
        insertion(arr,n);
        for (int i = 0  ;i<n ; i++) std::cout<<arr[i]<<" ";
    }
    else if (num == 2) {
        select(arr,n);
        for (int i = 0  ;i<n ; i++) std::cout<<arr[i]<<" ";
    }
    else if (num == 3){bubble(arr,n);for (int i = 0  ;i<n ; i++) std::cout<<arr[i]<<" ";}


    return 0;
}