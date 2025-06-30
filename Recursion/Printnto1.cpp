#include<iostream>
using namespace std;

void print_Name(int n){
    if (n == 0){
        return;
    }
    cout << n << endl;
    print_Name(n-1);
}

int main(){
    int n;
    cin >> n;
    print_Name(n);
}