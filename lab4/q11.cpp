//
// Created by satyamchauhan on 04/10/26.
//
#include<iostream>
using namespace std;
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
    void reve() {
        node * prev = nullptr;
        node * temp = head;
        while (temp) {
            node * nxt = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nxt;
        }
        head = prev;
    }
};

int main() {
    lst lt;
    for (int i = 0; i < 5; i++) {
        lt.insertion(i);
    }
    lt.print();
    cout<<endl;
    lt.reve();
    lt.print();


    return 0;
}
