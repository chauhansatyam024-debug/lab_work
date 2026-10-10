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
    node * insertion(node *root ,int val) {
        if (root == nullptr) return new node(val);
        if ( val < root->val) root->left = insertion(root->left,val);
        else root->right = insertion(root->right,val);
        return root;
    }
    void preorder(node * root) {
        if (root == nullptr) return;
        std::cout<<root->val<<" ";
        preorder(root->left);

        preorder(root->right);
    }
    node * deletion(node * root) {
        if (root == nullptr){return nullptr;}
        root->left = deletion(root->left);
        root->right = deletion(root->right);
        if (root->left != nullptr && root->right == nullptr) {
            node *child = root->left;
            delete root;
            return child;               // parent will point to the child
        }
        if (root->left == nullptr && root->right != nullptr) {
            node *child = root->right;
            delete root;
            return child;
        }




        return root;

    }

};
int main() {
    tree tt;
    node * root = nullptr;
    int input = 0;
    for (int i = 0 ;i<6;i++) {
        std::cin>>input;
        root = tt.insertion(root,input);
    }
    tt.preorder(root);
    std::cout<<std::endl;
    root = tt.deletion(root);
    tt.preorder(root);

    return 0;
}