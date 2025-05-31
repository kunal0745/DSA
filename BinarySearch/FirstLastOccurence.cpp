#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(arr[mid] > key){
            end = mid - 1;
        }  

        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if(arr[mid] > key){
            end = mid - 1;
        }  

        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){

    int arr[6] = {1, 2, 3, 3, 3, 4};
    int first = firstOccurence(arr, 6, 3);
    cout << "first occurence is:" << first << endl;

    int last = lastOccurence(arr, 6, 3);
    cout << "last occurence is:" << last << endl;
    
    int totalOccurence = (last - first) + 1;
    cout << "Total number of occurence 3 is:" << totalOccurence;

}