#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums, int low, int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left++]);
        }
        else{
            temp.push_back(nums[right++]);
        }
    }

    while(left <= mid){
        temp.push_back(nums[left++]);
    }

    while(right <= high){
        temp.push_back(nums[right++]);
    }

    for(int i = low; i <= high; i++){
        nums[i] = temp[i - low];
    }
}

void ms(vector<int> &nums,int low,int high){
    if(low >= high) return;
    int mid = (low+high)/2;

    ms(nums,low,mid);
    ms(nums,mid+1,high);
    merge(nums,low,mid,high);
}



int main(){
    vector<int> nums = {34,23,45,56,67,12};
    ms(nums,0,nums.size()-1);
    for(int i = 0; i<nums.size();i++){
        cout << nums[i] << " ";
    }

}