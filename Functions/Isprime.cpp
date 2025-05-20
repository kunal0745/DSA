#include<iostream>
using namespace std;

bool IsPrime(int num){
    for(int i = 2; i < num ; i++){
        if(num % i == 0){
        return 0;
       }
    } 
    return 1;
}

int main(){
    int n;
    cout << "Enter any number:";
    cin >> n;

    if(IsPrime(n)){
        cout << "is a prime number!";
    }
    else{
        cout << "not a prime number!";
    }
}