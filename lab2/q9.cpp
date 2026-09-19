
#include<iostream>
#include<algorithm>
#include<iterator>
// don't miss or forgot base case
// first element
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

// last element , q+1

void quicksort_last(int arr[] , int low , int high) {
    if (low>=high) return;
    int pivot = arr[high];
    int k = low;
    int q = high-1;

    while (k<=q) {
        while (k<=high-1  && arr[k] <= pivot) k++;
        while (q >= low && arr[q] >= pivot )q--;
        if (k<q) {
            std::swap(arr[q],arr[k]);
            k++;
            q--;
        }else break;
    }
    std::swap(arr[q+1],arr[high]);
    int pivotindex = q+1;
    quicksort_last(arr,low,pivotindex-1);
    quicksort_last(arr,pivotindex+1,high);

}


int main() {
    int arr[] ={34,25,2532,52,52,521,52,52,5};
    int n = std::size(arr);

    //quickSort_1(arr,0,n-1);
    quicksort_last(arr,0,n-1);
    for (int i= 0  ; i<n ; i++) {
        std::cout<<arr[i]<<" ";
    }


    return 0;

}