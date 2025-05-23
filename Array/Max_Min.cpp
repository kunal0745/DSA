#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the size of the array:";
    cin >> n;
    int arr[10];

    cout << "Enter the array Elements:";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = INT32_MIN;
    int mini = INT32_MAX;
    for(int i = 0; i < n; i++){
        // if(arr[i] > max){
        //     maxi = arr[i];
        // }
        maxi = max(maxi , arr[i]);

        mini = min(mini , arr[i]);

        // if(arr[i] < min){
        //     mini = arr[i];
        // }

    }
    cout << "Maximum element in the array is:" << maxi << endl;
    cout << "Minimum element in the array is:" << mini;




}