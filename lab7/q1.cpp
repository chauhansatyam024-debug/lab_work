//
// Created by satyamchauhan on 11/10/26.
//
struct node {
    int val;
    node * left;
    node * right;
    node(int val) : val(val) , left(nullptr) , right(nullptr){}
};

class bt {
public:
    node * root = nullptr;

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
};

int main() {

    bt bt;
    node * root = nullptr;
    for (int i =  0;  i<5 ; i++) {
        root = bt.insertion(root,i);
    }

    return 0;
}