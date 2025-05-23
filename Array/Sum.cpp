#include<iostream>
using namespace std;

int SumArray(int arr[] , int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
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

    int sum = SumArray(arr , n);
    cout << "Sum of the array elements:" << sum;

}