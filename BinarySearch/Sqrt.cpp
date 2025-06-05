#include<iostream>
using namespace std;

long long int sqrtInteger(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;

    while(s <= e){
        long long int sqr = mid * mid;

        if(sqr == n){
            return mid;
        }

        if(sqr < n){
            ans = mid;
            s = mid + 1;
        }
        
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

double morePrecision(int n, int precision, int sqr){
    double factor = 1;
    double ans = sqr;

    for(int i = 0; i < precision; i++){
        factor = factor/10;

        for(double j = ans; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter any number:";
    cin >> n;

    int sqr = sqrtInteger(n);
    cout << "Square root without precision is:" << sqr << endl;

    double precision = morePrecision(n, 3, sqr);
    cout << "Square root with precision is:" << precision << endl;

}