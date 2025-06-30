#include<iostream>
using namespace std;

int LinearSearch(int arr[] , int Key){
    for(int i = 0; i < 5; i++){
        if(arr[i] == Key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int ele;
    cout << "Enter the element u want to search:";
    cin >> ele;

    cout << LinearSearch(arr,ele);
    
}