#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int arr[5] = {7,4,9,1,8};
    // sort(arr , arr + 5); // sort(arr, arr+n)
    sort(arr, arr+5,greater<int>()); // descending order
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    
    vector <int> vec = {6,3,9,7,2};
    sort(vec.begin() , vec.end());
    reverse(vec.begin() , vec.end());
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;

    int n =15;
   cout<< __builtin_popcount(n) << endl; // count set bits


  

}