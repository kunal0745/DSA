#include<iostream>
#include<vector>
using namespace std;

bool isPossibleSol(vector<int> &arr,int n, int m, int maxAllowedTime){
    int painter = 1;
    int time = 0;

    for(int i = 0; i < n; i++){
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int minTimeToPaint(vector<int> &arr,int m){
    int n = arr.size();
    int sum = 0 , maxValue = INT32_MIN;

    for(int i = 0; i<n; i++){
        sum+= arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    int start = maxValue, end = sum, ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossibleSol(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;

}

int main(){
    vector<int> units = {40,30,10,20};
    int m = 2;
    int min = minTimeToPaint(units,m);
    cout << "min time taken to paint: " << min;


}