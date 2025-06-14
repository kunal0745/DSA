// In a rotated sorted array, the pivot is the smallest element’s index, or the point where rotation happened.
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

int main(){
    int arr[6] = {7, 10, 13, 1, 5, 6};
    int pivot = pivotElement(arr , 5);
    cout << "pivot element is at index:" << pivot << endl;

    cout << "pivot element is:" <<arr[pivot];

}