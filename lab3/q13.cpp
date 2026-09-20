//
// Created by satyamchauhan on 20/09/26.
//

#include<iostream>
#include<algorithm>
void insertion(int arr[] , int n ,int &comA) {
    for (int i = 0 ;i<n ; i++) {

        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
            comA++;
        }
        arr[j+1] = key;
    }
}
void bubble(int arr[] ,int n , int &comB) {
    for (int i = 0 ; i<n-1 ;i++) {
        for (int j=0 ;j<n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j] ,arr[j+1]);
                comB++;
            }
        }
    }
}
void quickSort_1(int arr[] , int low , int high,int & comC) {
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
            comC++;
            q--;
        }
        else break;
    }

    std::swap(arr[low],arr[q]);
    comC++;
    int  pivotindex = q;
    quickSort_1(arr,low,pivotindex-1,comC);
    quickSort_1(arr,pivotindex+1,high,comC);

}
int main() {
    int arr[] ={2,5,215,1,32,51,32,5,35,31,53,5,3252,52,5,25,2,525};
    int n = sizeof arr/ sizeof arr[0];
    int arr3[] ={2,5,215,1,32,51,32,5,35,31,53,5,32,52,52,5,25,2,525};
    int comC =0;
    quickSort_1(arr3,0,n-1,comC);
    std::cout<<comC;
    std::cout<<std::endl;
    int comA = 0;
    insertion(arr,n,comA);
    std::cout<<"insetion: "<<comA<<std::endl;
    int arr2[] ={2,5,215,1,32,51,32,5,35,31,53,5,3252,52,5,25,2,525};
    int comB = 0;
    bubble(arr2,n,comB);
    std::cout<<"bubble :"<<comB<<std::endl;

    return 0;

}