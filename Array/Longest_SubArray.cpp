// longest subarray with sum k

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// int getLongestSubArray(vector <int> &nums, int k){
//     int len = 0;
//     for(int i = 0; i<nums.size(); i++){
//         int sum = 0;
//         for(int j = i; j<nums.size(); j++){
//             sum += nums[j];

//             if(sum == k){
//                 len = max(len, j-i+1);
//             }
//         }
//     }
//     return len;
// }

// int getLongestSubArray1(vector <int> &nums, int k){
//     long long sum = 0;
//     int max_len = 0;
//     map <long long, int> preMapSum;
//     for(int i = 0; i < nums.size(); i++){
//         sum += nums[i];
//         if(sum == k){
//             max_len = max(max_len, i+1);
//         }

//         long long rem = sum - k;
//         if(preMapSum.find(rem) != preMapSum.end()){
//             int len = i - preMapSum[rem];
//             max_len = max(len,max_len);
//         }

//         if(preMapSum.find(sum) == preMapSum.end()){
//             preMapSum[sum] = i;
//         } 
//     }
//     return max_len;
// }

int getLongestSubarray2(vector<int>& a, long long k) {
    int n = a.size(); 
    int left = 0, right = 0; 
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;  // 0(2n)
}
int main(){
    vector <int> nums = {2,0,0,3,0,0,0};
    int k = 3;
    int ans = getLongestSubarray2(nums,k);
    cout << "longest subarray length is:" << ans << endl;

}