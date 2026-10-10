#include<iostream>
struct node {
    int val;
    node * next;
    node(int val): val(val) ,next(nullptr){}

};
class quell {
public:
    node *head = nullptr;
    node * tail = nullptr;

    void enque(int val) {
        node * newnode = new node(val);
        if (!head) {
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void deque() {

        if (!head) {
            node * temp = head;
            head = head->next;
            delete(temp);
        }
        else {
            std::cout<<"underflow"<<" ";
        }
    }
    void display() {

        node * temp = head;
        while (temp) {
            std::cout<<temp->val<<" ";
            temp = temp->next;
        }
    }

};

int main() {
    quell ll;
    for (int i  = 0 ; i<8 ; i++) {
        ll.enque(i);
    }

    ll.display();

    return 0;
}