//
// Created by satyamchauhan on 07/10/26.
//
#include <iostream>
using namespace std;

int factorial(int n) {

    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n) << endl;

    return 0;
}