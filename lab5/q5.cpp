//
// Created by satyamchauhan on 07/10/26.
//

//
// Created by satyamchauhan on 07/10/26.
//

#include<iostream>

class stck {
public :
    int top = -1;
    int arr[4];

    // we can add function to input self define array max elements

    void push(int val) {
        if (top < 4) {
            arr[++top] = val;
        }
        else {
            std::cout<<"overflow";
        }
    }
    void pop() {
        if (top == -1) {
            std::cout<<"underflow";
        }
        else {
            std::cout<<arr[top]<<" ";
            top--;
        }
    }
    void peek() {
        if (top != -1) {
            std::cout<<arr[top]<<" ";
        }
        else {
            std::cout<<" empty "<<" ";
        }
    }
    void display() {
        for (int i = 0; i<=top ; i++) {
            std::cout<<arr[i]<<" ";
        }
    }

};
int main() {
    stck stk;
    int inp = 0;


    std::cout<<"1 for push \n , 2 for pop \n , 3 for peek\n";
    std::cin>>inp;

    switch (inp) {
        case 1 : {
            int chk = 0;
            std::cout<<" input the value to push";
            std::cin>>chk;
            stk.push(chk);
            break;
        }

        case 2 : {stk.pop(); break;}

        case 3 : {stk.peek(); break;}

        default : {std::cout<<"done "; break;}


    }


    return 0;
}