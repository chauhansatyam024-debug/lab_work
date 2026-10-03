//
// Created by satyamchauhan on 21/09/26.
//
#include<iostream>
struct node {
    int val;
    node * next;
    node(int val) : val(val) ,next(nullptr){}
};

class ll {
public :
    node * head = nullptr;
    void inset(int val) {
        node * newnode = new node(val);
        if (!head) {head = newnode; return;}
        node * temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newnode;
}
    void searching(int val) {

}
    void deletion(int val) {

}
    void print() {

        node * temp = head;
        if (!temp){return;}
        while (temp) {
            std::cout<<temp->val<<" ";
            temp = temp->next;
        }
}
    ~ll() {
        node * temp = head;
        while (temp->next) {
            node * nxt = temp->next;
            delete(temp);
            temp = nxt;
        }


}

};
int main() {
    ll l;
    for (int i = 0 ;i<5; i++) {
        int x = 0;
        std::cin>>x;
        l.inset(x);
    }
    l.print();
    return 0;

}