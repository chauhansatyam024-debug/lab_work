//
// Created by satyamchauhan on 20/09/26.
//
#include<iostream>
#include<algorithm>
void quickSort_1(int arr[] , int low , int high) {
    if (low>=high)return;

    int pivot = arr[low];
    int k = low+1;
    int q = high;

    while (k <= q) {
        while (arr[k] <= pivot && k<=high ) k++;
        while (arr[q] >= pivot && q > low) q--;

        if (k<q) {
            std::swap(arr[k],arr[q]);
            k++;
            q--;
        }
        else break;
    }

    std::swap(arr[low],arr[q]);
    int  pivotindex = q;
    quickSort_1(arr,low,pivotindex-1);
    quickSort_1(arr,pivotindex+1,high);

}
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

int main() {
    int arr1[] = {241,4,14,12,4,1,41,4,1,4,141,253,25,2,355235,25,325252,52,52,5,25,25};
    int arr2[] = {241,4,14,12,4,1,41,4,1,4,141,253,25,2,355235,25,325252,52,52,5,25,25};
    int n =sizeof arr1 /sizeof arr1[0];

    mergesort(arr1,0,n-1);
    quickSort_1(arr2,0,n-1);


    return 0;




}

