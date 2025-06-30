#include<iostream>
using namespace std;

void print_Name(int i,int n){
    if (i > n){
        return;
    }
    cout << i << endl;
    print_Name(i+1,n);
}

int main(){
    int n;
    cin >> n;
    int i =1;
    print_Name(i,n);
}