#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;

    while(s < e){
        if(arr[mid] < arr[mid + 1]){
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
    int arr[6] = {1, 3, 9, 10, 5, 4};
    int peak = peakElement(arr , 6);
    cout << "peak element is at index:" << peak << endl;

    cout << "peak element is:" <<arr[peak];

}