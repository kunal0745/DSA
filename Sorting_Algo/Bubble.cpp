// space complexity = o(1)
// time complexity = 0(n2) for worst and o(n) for best case

// stable sorting
// ✅ Stable Sorting Algorithm
// A sorting algorithm is stable if it preserves the relative order of equal elements.

// in place sorting - It sorts the array by modifying the original array itself, rather than making a copy.


#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 1; i < n; i++){

        bool flag = 0;
        for(int j = 0; j < n - i; j++){

            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
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

    int arr[] = {56,34,23,78,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting array is:" << endl;
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "After bubble sort array is:" << endl;
    printArray(arr, n);
}