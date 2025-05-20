#include<iostream>
using namespace std;

int main(){

    int a , b;
    char operation;
    int ans = 0;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter Second number: ";
    cin >> b;

    cout << "Enter the operation you want to perform: ";
    cin >> operation;

    switch (operation)
    {

    case '+': ans = a + b;
        break;

    case '-': ans = a - b;
        break;

    case '*': ans = a * b;
        break;

    case '/': ans = a / b;
        break;

    
    default: cout << "invalid operator ";
        break;
    }

    cout << "The result is:" << ans;

}