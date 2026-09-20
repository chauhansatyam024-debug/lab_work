//
// Created by satyamchauhan on 20/09/26.
//
#include<iostream>
#include<algorithm>
void quicksort_last(int arr[] , int low , int high) {
    if (low >= high) return ;

    int pivot = arr[high];
    int k = low;
    int q = high;

    while (k<=q) {
        while (k<=high && arr[k] <= pivot)k++;
        while (q>=low && arr[q]>=pivot)q--;
        if (k<q) {
            std::swap(arr[k],arr[q]);
            k++;
            q--;
        }
        else break;
    }
    std::swap(arr[q+1] ,arr[high]);
    for (int n = low ;n<=high; n++) {
        std::cout<<arr[n]<<" ";
    }
    std::cout<<std::endl;
    int pindex = q+1;
    quicksort_last(arr,low,pindex-1);
    quicksort_last(arr,pindex+1,high);
}
int main() {
    int arr[] ={4,124,124,23,25,14,89,75,14,1234,1};
    int n = sizeof arr / sizeof arr[0];

    quicksort_last(arr,0,n-1);
    for (int i = 0 ;i<n ; i++) std::cout<<arr[i]<<" ";
}