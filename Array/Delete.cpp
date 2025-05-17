#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int a[n] = {1,2,4,5,6};
    int index = 2;
    
  cout << "Array before deletion:";
  for(int i = 0 ; i < n; i++){
    cout << a[i] << " ";
  }
  cout << endl;
    for(int i = index; i < n-1 ; i++){
        a[i] = a[i+1];
    }

    cout << "Array after deletion:";
    for(int i = 0; i < n-1; i++){
        cout << a[i] << " ";
    }
}