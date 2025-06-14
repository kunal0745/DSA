#include<iostream>
using namespace std;

int myPower(double x, int n){
    int binForm = n;
    if(n < 0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;

    while(binForm > 0){
        if(binForm & 1){
            ans *= x;
        }
        x *= x;
        binForm >>= 1;

    }
    return ans;
}

int main(){
    int n = -5;
    double x = 2;
    cout << myPower(x,n);
    
}