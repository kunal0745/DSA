// Brute force method  -> 0(n2)

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> nums){
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i + 1; j < n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count > n/2){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    vector <int> nums = {5,1,2,2,2};
    int ans = majorityElement(nums);
    cout << "Majority element is:" << ans;

}

// Better approach using sorting  -> 0(nlogn)

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> nums){
    int n = nums.size();

    sort(nums.begin() , nums.end());

    int count = 1;
    int ans = nums[0];
    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i - 1]){
            count++;
        }
        else{
            count = 1;
            ans = nums[i];
        }
        if(count > n/2){
            return ans;
        }
    }
    return - 1;
   
}

int main(){
    vector <int> nums = {5,1,2,2,2};
    int ans = majorityElement(nums);
    cout << "Majority element is:" << ans;

}


// moore's voting algo  --> 0(n)


#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> nums){
    int n = nums.size();
    int count = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(count == 0){
            ans = nums[i];
        }

        if(ans == nums[i]){
            count++;
        }

        else{
            count--;
        }
    }
    return ans;

}

int main(){
    vector <int> nums = {2,2,1,1,1,2,2};
    int ans = majorityElement(nums);
    cout << "Majority element is:" << ans;

}

