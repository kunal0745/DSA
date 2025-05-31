#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <=  end){
        if(arr[mid] == key) return mid;

        else if(arr[mid] > key) end = mid - 1;

        else start = mid + 1;

        mid = start + (end - start)/2;
    }

    return - 1;
}

int main(){

    int arr[5] = {10,12,45,67,78};
    int element;
    cout << "Enter the element you want to search:"; 
    cin >> element;
    
    int index = binarySearch(arr , 5 , element);
    cout << element << " is present at index :" << index;

}