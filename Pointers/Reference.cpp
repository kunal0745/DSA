#include<iostream>
using namespace std;

void changeA(int *ptr){ // pass by reference using pointer
    *ptr = 20;
}

void changeB(int &b){ // pass by reference using alias
    b = 30;
}

int main(){
    int a;
    changeA(&a);
    cout << "inside main a is: " << a<<  endl;

    int b = 20;
    changeB(b);
    cout << "inside main b is: " << b << endl;

}