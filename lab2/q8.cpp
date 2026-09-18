#include<iostream>
#include<algorithm>

void merge(int arr[] ,int left , int right , int mid) {
    int n1 = mid - left +1;
    int n2 = right - mid;

    int leftpart[n1],rightpart[n2];
    for (int i = 0 ; i<n1 ; i++) {
        leftpart[i] = arr[left + i];
    }
    for (int i =  0 ; i<n2; i++) {
        rightpart[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0 , k =left;
    while (i < n1 && j < n2) {
        if (leftpart[i] <= rightpart[j]) {
            arr[k++] = leftpart[i++];
        }
        else {
            arr[k++] = rightpart[j++];

        }
    }
    while (i<n1) arr[k++] = leftpart[i++];
    while (j<n2) arr[k++] = rightpart[j++];
}

void ms(int arr[] , int left , int right) {
    if (left >= right) return ;
    int mid = left + (right- left) /2;

    ms(arr,left,mid);
    ms(arr,mid+1 , right);
    merge(arr,left,right,mid);

}
int main() {
    int arr[] = {432,4,452,52,5211,52,25,252,52,52,5322,525};
    int n = sizeof arr / sizeof arr[0];
    ms(arr,0,n-1);
    for (int i = 0 ; i< n ; i++) {
        std::cout<<arr[i]<<" ";
    }


    return 0;
}