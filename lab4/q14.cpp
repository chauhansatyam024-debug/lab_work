//
// Created by satyamchauhan on 04/10/26.
//
//
// Created by satyamchauhan on 03/10/26.
//
#include<iostream>

struct node {
    int data;
    node *next;
    node  * prev;
    node(int val) : data(val), next(nullptr) ,prev(nullptr) {}
};

class lst {
public :
    node *head = nullptr;
    node * tail = nullptr;
    void insertion(int x) {
        node *newnode = new node(x);
        if (!head) {
            head = tail = newnode;
            return;
        }
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
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


    return 0;
}
