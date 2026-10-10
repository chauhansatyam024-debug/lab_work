//
// Created by satyamchauhan on 11/10/26.
//

#include<iostream>

struct node {
    int val;
    node * left;
    node * right;
    node(int val) : val(val) , left(nullptr) , right(nullptr){}
};

class bt {
    node * root = nullptr;
public:


    node * insertion(node * root,int val) {
        if (root == nullptr){return new node(val);}
        if (root->left == nullptr && root->right == nullptr) {
            root->left = insertion(root->left,val);
        }
        else {
            root->right = insertion(root->right,val);
        }

        return root;
    }

    void inorder(node * root) {
        if (root == nullptr){return ;}
        inorder(root->left);
        std::cout<<root->val<<" ";
        inorder(root->right);
    }

};

int main() {

    bt bt;
    node * root = nullptr;
    for (int i =  0;  i<5 ; i++) {
        root = bt.insertion(root,i);
    }

    bt.inorder(root);

    return 0;
}