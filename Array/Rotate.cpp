#include<iostream>
using namespace std;
void rotateArray(int arr[], int n){
    int temp = arr[n- 1];
    for(int i = n - 2; i >=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
}
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {15,7,9,19,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,n);
    printArray(arr,n);

}