//
// Created by satyamchauhan on 14/09/26.
//
#include"linear1.h"

using satyam = int;

satyam main() {
    lab2 lb;
    int arr[] = {10,20,30,40,50};
    int n = sizeof arr / sizeof arr[0];
    //lb.ls(arr,n);
    int key = 60;
    std::cout<<lb.bs(arr,n,key);
    int arr2[] = {2,52,5,52,5,25,23,523,5,353};
    int n2 = sizeof arr2 / sizeof arr2[0];
    lb.insertion(arr2,n2);

    for (int i = 0 ; i<n2 ; i++) {

    }


    return 0;

}

