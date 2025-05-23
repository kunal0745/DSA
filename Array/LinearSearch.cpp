#include<iostream>
using namespace std;

bool LinearSearch(int arr[] , int Key){
    for(int i = 0; i < 5; i++){
        if(arr[i] == Key){
            return true;
        }
    }
    return false;

}

int main(){
    int arr[5] = {10,20,30,40,50};
    int a;
    cout << "Enter the element u want to search:";
    cin >> a;

    if(LinearSearch(arr , a)){
        cout << "yes";
    }
    else{
        cout << "no";
    }
}