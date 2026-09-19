//
// Created by satyamchauhan on 19/09/26.
//

#include<iostream>
#include<algorithm>

void merge(int arr[] ,int low , int mid , int high) {
    int n1 = mid - low +1;
    int n2 = high - mid;

    int leftpart[n1],rightpart[n2];
    for (int i = 0 ; i<n1 ; i++) {
        leftpart[i] = arr[low + i];
    }
    for (int j = 0  ; j<n2 ;j++) {
        rightpart[j] = arr[mid + j+1];
    }
    int i = 0 , j = 0 ,k = low;
    while (i < n1 && j < n2) {
        if (leftpart[i] <= rightpart[j]) {
            arr[k++] = leftpart[i++];
        }
        else {
            arr[k++]  = rightpart[j++];
        }
    }
    while (i<n1){arr[k++] = leftpart[i++];}
    while (i<n2) {arr[k++] = rightpart[i++];}
}
void mergesort(int arr[] ,int low  , int high) {
    if (low>=high) return;
    int mid = low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int  binary(int arr[] ,int n,int key) {
    int low = 0;
    int high = n;
    while (low<=high) {
        int mid = low + (high - low) /2;
        if (arr[mid] == key) {return mid;}
        else if (arr[mid] > key){ high = mid -1;}
        else {
            low = mid +1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {432,4,452,52,5211,52,25,252,52,52,5322,525};
    int n = sizeof arr / sizeof arr[0];
    mergesort(arr,0,n-1);
    std::cout<<binary(arr,n,45);


    return 0;
}