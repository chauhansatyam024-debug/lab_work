//
// Created by satyamchauhan on 21/08/26.
//
using satyam = int;
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
        return root; // root will always remain first value coz insert() in if and else condition is calling insert , i mean recurssion it is happening inside if and else coditon  , so it will not effect root
    }
    void inorder(node * root) {
        if (root == nullptr) return;
        inorder(root->left);
        std::cout<<root->val<<" ";
        inorder(root->right);
    }
    void postorder(node * root) {
        if (root == nullptr) return ;
        postorder(root->left);
        postorder(root->right);
        std::cout<<root->val<<" ";
    }
    void preorder(node * root,int key) {
        if (root == nullptr) return;
        if (root -> val  == key){std::cout<<"finded ";}
        preorder(root->left,key);
        preorder(root->right,key);
    }
};
satyam main() {
    tree tt;
    node * root = nullptr;
    int i = 0;
    int input = 0;
    for (i;i<5;i++) {
        std::cin>>input;
        root = tt.insert(root,input); // root = ~ , coz outer inner doesn't know abt it , unless we excplicit assign it
    }
    int key = 90;
    tt.inorder(root);
    std::cout<<std::endl;
    tt.postorder(root);
    std::cout<<std::endl;
    tt.preorder(root,90);

    return 0;
}