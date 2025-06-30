#include<iostream>
using namespace std;

void reverse(int arr[],int left,int right){
    if(left >= right){
        return;
    }
    swap(arr[left], arr[right]);
    reverse(arr,++left,--right);
}

void reverse1(int arr[], int i, int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse1(arr,i+1,n);


}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,n-1);
    reverse1(arr,0,n);
    printArray(arr,n);
}