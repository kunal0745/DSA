#include<iostream>
using namespace std;

void ReverseArray(int arr[] , int st,int en){
    while(st < en){
        swap(arr[st++] , arr[en--]);
    }
}

void PrintArray(int arr[] , int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {10,20,30,40,50,60}; 
    ReverseArray(arr,2,5);
    ReverseArray(arr,1,4);
    PrintArray(arr,6);
    
    
}