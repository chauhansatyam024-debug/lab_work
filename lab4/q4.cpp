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
    void given(int data,int k) {

        int cnt = 0;
        node * newnode = new node(data);
        if (k==0) {
            newnode->next = head;
            head = newnode;
            return;
        }
        node * temp = head;
        while (cnt  != k-1 && temp->next) {
            temp = temp->next;
            cnt++;
        }
        node * nxt = temp->next;
        newnode ->next = nxt;
        temp->next = newnode;


    }

    void print() {
        node *temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    lst lt;
    for (int i = 0; i < 5; i++) {
        lt.insertion(i);
    }
    lt.print();
    lt.given(45,1);
    lt.print();


    return 0;
}
