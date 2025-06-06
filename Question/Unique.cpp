// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

#include<iostream>
using namespace std;

int FindUnique(int arr[] , int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
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

    int unique = FindUnique(arr , n);
    cout << "Unique element is: " << unique;
}