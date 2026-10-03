//
// Created by satyamchauhan on 04/10/26.
//

#include<iostream>
struct node {
    int data;
    node * next;
    node(int val) : data(val) , next(nullptr){}
};

class lst {
public :
    node * head = nullptr;
    void insertion(int x) {
        node * newnode = new node(x);
        if (!head) {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }

    void print() {
        node * temp = head;
        while (temp) {
            std::cout<<temp->data<<" ";
            temp = temp -> next;
        }
    }
};

int main() {

    lst lt;
    for (int i = 0  ;i<5; i++) {
        lt.insertion(i);
    }
    lt.print();


    return 0;
}