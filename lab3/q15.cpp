//
// Created by satyamchauhan on 20/09/26.
//

#include<iostream>
#include<algorithm>

void quickSort_1(int arr[] , int low , int high,int & comC) {
    if (low>=high)return;

    int pivot = arr[low];
    int k = low+1;
    int q = high;

    while (k <= q) {
        while (k<=high && arr[k] <= pivot ){comC++; k++;}
        while (q > low && arr[q] >= pivot){ comC++;q--;}

        if (k<q) {
            std::swap(arr[k],arr[q]);
            k++;
            q--;
        }
        else break;
    }

    std::swap(arr[low],arr[q]);
    int  pivotindex = q;
    quickSort_1(arr,low,pivotindex-1,comC);
    quickSort_1(arr,pivotindex+1,high,comC);

}

int main() {
    int sortarr[] ={1,2,3,4,5,6,7};
    int n = sizeof sortarr/sizeof sortarr[0];
    int coma =0,comb=0,comc=0;
    int revsort[] = {7,6,5,4,3,2,1};
    int ran[] = {5,24,26,12,4245,241,45};
    quickSort_1(sortarr,0,n-1,coma);
    std::cout<<coma<<" ";
    quickSort_1(revsort,0,n-1,comb);
    std::cout<<comb<<" ";
    quickSort_1(ran,0,n-1,comc);
    std::cout<<comc;

    return 0;
}
// 21 21 15   nlogn