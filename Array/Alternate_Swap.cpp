#include<iostream>
using namespace std;

void Swap_Alternate(int arr[] , int size){
    for(int i = 0; i < size; i += 2){
        if(i + 1 < size){
            swap(arr[i] , arr[i+1]);
        }
    }
}

void PrintArray(int arr[] , int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int arr[100];

    cout << "Array elements are:";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Swap_Alternate(arr , n);
    PrintArray(arr , n);
}