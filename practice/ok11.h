//
// Created by satyamchauhan on 05/10/26.
//

#ifndef DSA_LAB_OK11_H
#define DSA_LAB_OK11_H

#endif //DSA_LAB_OK11_H
#include<iostream>
struct tree {
    int data;

    tree * left;
    tree * right;
    tree(int val) : data(val),left(nullptr),right(nullptr){}
};

class tree_struct {
public:
    tree * root = nullptr;

    tree* insertion(tree * root , int x) {
        if (root == nullptr) {
            return new tree(x);
        }
        if (x > root->data) {
            root->right = insertion(root->right,x);
        }
        else {
            root->left = insertion(root->left,x);
        }

        return root;
    }

    void inorder(tree * root) {
        if (root == nullptr){return ;}
        inorder(root->left);
        std::cout<<root->data<<" ";
        inorder(root->right);
    }
    void postorder(tree * root) {
        if (root == nullptr) {return;}
        postorder(root->left);
        postorder(root->right);
        std::cout<<root->data<<" ";
    }
    void preorder(tree * root) {
        if (root == nullptr){return;}
        std::cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
};