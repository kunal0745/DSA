#include<iostream>
using namespace std;

void ReverseArray(int arr[] , int size){
    int start = 0;
    int end = size - 1;
    int temp;

    while(start <= end){
        // swap(arr[start] , arr[end])
        temp = arr[start];
        arr[start] =  arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void PrintArray(int arr[] , int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {10,20,30,40,50};
    ReverseArray(arr , 5);
    PrintArray(arr , 5);
    
    
}