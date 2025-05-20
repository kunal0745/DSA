#include<iostream>
using namespace std;

bool IsEven(int num){
    if(num & 1){
        return 0; // odd
    }

    return 1 ;  // even

}

int main(){
    int a;
    cout << "Enter any number:";
    cin >> a;

    if(IsEven(a)){
        cout << a << " is even number!";
    }

    else{
        cout << a << " is odd number!";
    }

}