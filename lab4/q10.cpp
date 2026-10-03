//
// Created by satyamchauhan on 04/10/26.
//

#include<iostream>
#include<algorithm>
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
    void max_min() {
        node * temp = head;
        int maxx = 0;
        int minn = 1000;
        while (temp) {
            maxx = std::max(temp->data,maxx);
            minn = std::min(temp->data,minn);
            temp = temp->next;
        }
        std::cout<<maxx<<" "<<minn<<" ";

    }
};

int main() {
    lst lt;
    for (int i = 0; i < 5; i++) {
        lt.insertion(i);
    }
    lt.print();
    lt.max_min();

    return 0;
}
