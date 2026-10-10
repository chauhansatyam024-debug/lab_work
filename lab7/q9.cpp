//
// Created by satyamchauhan on 21/08/26.
//
#include<iostream>
struct node {
    int val;
    node * left;
    node * right;
    node(int x) : val(x) , left(nullptr) , right(nullptr){}
};

class tree {
    node * root = nullptr;
public:
    node * insert(node *root ,int val) {
        if (root == nullptr) return new node(val);
        if ( val < root->val) root->left = insert(root->left,val);
        else root->right = insert(root->right,val);
        return root;
    }
    void inorder(node * root) {
        if (root == nullptr) return;
        inorder(root->left);
        std::cout<<root->val<<" ";
        inorder(root->right);
    }
    node * deletion(node * root) {
        if (root == nullptr){return nullptr;}
        root->left = deletion(root->left);
        root->right = deletion(root->right);
        if (root->left == nullptr && root->right == nullptr){delete(root); return nullptr;}



        return root;

    }

};
int main() {
    tree tt;
    node * root = nullptr;

    for (int i = 0 ;i<5;i++) {

        root = tt.insert(root,i);
    }
    tt.inorder(root);
    root = tt.deletion(root);
    tt.inorder(root);

    return 0;
}