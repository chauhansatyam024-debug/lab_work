//
// Created by satyamchauhan on 04/10/26.
//

#include<iostream>

struct node {
    int data;
    node *next;

    node(int val) : data(val), next(nullptr) {
    }
};

class lst {
public :
    node *head = nullptr;

    void insertion(int x) {
        node *newnode = new node(x);
        if (!head) {
            head = newnode;
            return;
        }

        node *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void print() {
        node *temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void store() {
        int arr[5];
        node * temp = head;
        int i = 0;
        while (temp) {
            node * nxt = temp->next;
            arr[i++] = temp->data;
            delete(temp);
            temp = nxt;
        }
       ascend(arr,5);
    }
    void newl_l(int arr[],int n) {
        node * temp = nullptr;
        head = nullptr;
        for (int i = 0  ; i<n ; i++) {
            node * newnode = new node(arr[i]);
            if (!head) {
                head = temp = newnode;
            }
            else {
                temp -> next = newnode;
                temp = newnode;
            }

        }
    }
    void ascend(int arr[] , int n ) {
        for (int i = 1 ; i<n ; i++) {
            int curr = arr[i];
            int j = i-1;
            while (j>=0 && arr[j]>curr) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = curr;
        }
        newl_l(arr,5);
    }
};

int main() {
    lst lt;
    for (int i = 5; i >=0; i--) {
        lt.insertion(i);
    }
    lt.store();
    lt.print();


    return 0;
}
