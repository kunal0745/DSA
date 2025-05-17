#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int a[n+1] = {1,2,4,5,6};
    int index = 2;
    int value = 3;
    
    for(int i = n; i > index ; i--){
        a[i] = a[i-1];
    }

    a[index] = value;

    for(int i = 0; i < n+1; i++){
        cout << a[i] << " ";
    }
}

