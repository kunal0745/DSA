#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector <int> nums){
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] <= nums[i+1]){

        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    vector <int> nums = {1,1,2,4,4,6,7};
    bool check = checkSorted(nums);
    cout << check << endl;
}