//
// Created by satyamchauhan on 19/09/26.
//
#include<iostream>
#include<iterator>
void linear(int arr[] ,int n ,int key) {
    bool seen = false;
    for (int i = 0 ; i<n ; i++) {
        if (arr[i]== key) {
            std::cout<<i<<" ";
            seen = true;

        }
    }
    if (!seen){std::cout<<"not found";}

}

void binary(int arr[] , int n , int key) {
    int low  = 0;
    int high = n;
    bool seen = false;
    while (low < high) {
        int mid = low + (high - low) /2;
        if (arr[mid] == key) {
            std::cout<<mid;
            seen = true;
            break;
        }
        else if (arr[mid] < key) low = mid +1;
        else high = mid -1 ;
    }
    if (seen == false){std::cout<<"not found";}

}
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

int main() {
    int arr[] = {5,512,52,5,25,215,25,32,5,315,12,52,5,12,5,215,25};
    int n = sizeof arr / sizeof arr[0];

    int num = 0;
    int key = 0;
    std::cout<<"1 for linear and else for binary also add target  : "<<std::endl;
    std::cin>>num;
    std::cin>>key;
    if (num == 1) {
        linear(arr,n,key);
    }
    else{
        quickSort_1(arr,0,n-1);
        for (int i =  0 ; i<n  ;i++) {
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
        binary(arr,n,key);
    }

    return 0;
}