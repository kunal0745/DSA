// time complexity = 0(n2) for worst and o(n) for best case


#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            int temp = arr[j - 1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {34,23,56,11,67};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting array is:" << endl;
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "After insertion sort array is:" << endl;
    printArray(arr, n);
}

