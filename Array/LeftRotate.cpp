// left rotate by 1
#include<iostream>
using namespace std;
void rotateArray(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
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