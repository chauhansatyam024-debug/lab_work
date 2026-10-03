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
    bool srch(int sexy) {
        node *temp = head;
        while (temp) {
           if (temp->data == sexy)return true;
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    lst lt;
    for (int i = 0; i < 5; i++) {
        lt.insertion(i);
    }
    lt.print();
    std::cout<<std::endl;
    std::cout<<lt.srch(4);


    return 0;
}
