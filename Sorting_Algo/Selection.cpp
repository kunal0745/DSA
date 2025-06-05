// space complexity = o(1)
// time complexity = 0(n2) for both best and worst case

// use case -> when array size is small
// unstable sorting

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
       int minIndex = i;

       for(int j = i + 1; j < n; j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
       }

       swap(arr[i], arr[minIndex]);

    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {45,32,67,89,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting array is:" << endl;
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "after selection sort array is:" << endl;
    printArray(arr, n);
}