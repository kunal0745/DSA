#include<iostream>
using namespace std;

long long Factorial(int num){
    long long fact = 1;
    for(int i = 1; i <= num ; i++){
        fact = fact * i;
    }
    return fact;

}

long long nCr(int n , int r){
    long long numerator = Factorial(n);
    long long denominator = Factorial(r) * Factorial(n-r);
    return numerator/denominator;

}

int main(){
    int n,r;
    cin >> n >> r;

    cout << "Answer is:" << nCr(n,r);

}