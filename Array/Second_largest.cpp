#include<iostream>
#include<vector>
using namespace std;


int secondLargest(vector <int> &nums){
    int n = nums.size();
    int largest = nums[0];
    for(int i = 1; i < n; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << "largest is:" << largest << endl;

    int secondLargest = INT32_MIN;
    for(int i = 0; i < n; i++){
        if(nums[i] > secondLargest && nums[i] != largest){
            secondLargest = nums[i];
        }
    }
    return secondLargest; 
    // 0(2n)
}

int secondLargest1(vector <int> &nums){
    int largest = nums[0];
    int slargest = INT32_MIN;
    int n = nums.size();


    for(int i = 1; i < n; i++){
        if(nums[i] > largest){
            slargest = largest;
            largest = nums[i];
        }

        else if(nums[i] < largest && nums[i] > slargest){
            slargest = nums[i];
        }
    }
    return (slargest == INT32_MIN) ? -1 : slargest;

    // optimal then previous 0(n)
}

int main(){
    vector <int> nums = {1,1,1,1};
    // cout << "Second largest is:" << secondLargest(nums) << endl;
    cout << "Second largest is:" << secondLargest1(nums) << endl;


}