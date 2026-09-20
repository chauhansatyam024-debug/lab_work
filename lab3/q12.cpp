//
// Created by satyamchauhan on 20/09/26.
//
#include <iostream>
#include<algorithm>
void asce_descen(int arr[],int n,int select) {
    for (int i = 0 ; i<n-1 ;i++) {
        for (int j = 0 ;j<n-1-i;j++) {
            if (select == 1) {
                if (arr[j] > arr[j+1]) {
                    std::swap(arr[j],arr[j+1]);
                }
            }
            else {
                if (arr[j] < arr[j+1]) {
                    std::swap(arr[j],arr[j+1]);
                }
            }

        }
    }
}
int main() {
    int arr[] = {2,421,41,41,41,412,41,5,5,3,26,6,3637,34,34743,525,214225,5353125};
    int n = sizeof arr / sizeof arr[0];
    asce_descen(arr,n,1); // ascedning
    for (int i = 0 ; i < n;i++){std::cout<<arr[i]<<" ";}std::cout<<std::endl;
    asce_descen(arr,n,0); // descending
    for (int i = 0 ; i < n;i++){std::cout<<arr[i]<<" ";}std::cout<<std::endl;

    return 0;
}