// find element in binary rotated sorted array
#include<iostream>
using namespace std;

int pivotElement(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}

int binarySearch(int arr[] , int s , int e , int key){
    int start = s;
    int end = e;
    int mid = start + (end - start)/2;

    while(start <=  end){
        if(arr[mid] == key) return mid;

        else if(arr[mid] > key) end = mid - 1;

        else start = mid + 1;

        mid = start + (end - start)/2;
    }

    return - 1;
}

int findPosition(int arr[] , int size , int k){
    int pivot = pivotElement(arr , size);

    if(k >= arr[pivot] && k <= arr[size - 1] ){
        return binarySearch(arr, pivot, size-1, k);
    }

    else{
       return binarySearch(arr, 0, pivot-1, k);
    }

}

int main(){
    int arr[6] = {10, 13, 15, 4, 6, 8};
    int pos = findPosition(arr, 6, 8);
    cout << "Element is present at index:" << pos;



}