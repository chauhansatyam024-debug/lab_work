//
// Created by satyamchauhan on 20/09/26.
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
void merge(int arr[],int left ,int right,int mid) {
    int n1 = mid - left +1;
    int n2 = right - mid;

    int lefty[n1],righty[n2];

    for (int i = 0; i<n1 ; i++) {
        lefty[i]= arr[left+i];
    }
    for (int i = 0; i<n2 ;i++) {
        righty[i]  = arr[mid + 1 +i];
    }
    int i = 0 , j =0 , k=left;
    while (i<n1 && j < n2) {
        if (lefty[i] <= righty[j]) {
            arr[k++] = lefty[i++];
        }
        else {
            arr[k++] = righty[j++];
        }
    }
    while (i<n1){arr[k++] = lefty[i++];}
    while (j<n2) {arr[k++] = righty[j++];}

}

void mergesort(int arr[],int left,int right) {

    if (left>=right) return ;
    int mid = left + (right - left) /2;
    mergesort(arr,left,mid-1);
    mergesort(arr,mid+1,right);
    merge(arr,left,right,mid);


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