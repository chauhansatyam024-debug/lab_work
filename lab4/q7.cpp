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
    void given(int k) {

        int cnt = 0;
        node * temp = head;
        if (k==0) {
            head = temp->next;
            delete(temp);
            return;
        }

        while (cnt  != k-1 && temp->next) {
            temp = temp->next;
            cnt++;
        }
        node * paplu = temp->next;
        temp->next = temp->next->next;
        delete(paplu);


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
    lt.given(0);
    lt.print();


    return 0;
}
