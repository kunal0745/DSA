#include<iostream>
using namespace std;

int recBinarySearch(int arr[] , int start , int end, int key){
    if (start > end) {
        return -1; 
    }
    int mid = start + (end - start)/2;

    if(arr[mid] == key) return mid;

    else if(arr[mid] > key) {
        return recBinarySearch(arr,start,mid-1,key);
    }

    else {
        return recBinarySearch(arr,mid+1,end,key);
    }
}

int main(){

    int arr[5] = {10,12,45,67,78};
    int element;
    cout << "Enter the element you want to search:"; 
    cin >> element;
    
    int index = recBinarySearch(arr , 0 , 4, element);
    cout << element << " is present at index :" << index;

}