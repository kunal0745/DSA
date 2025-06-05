// Brute force method -> o(n2)

// #include<iostream>
// #include<vector>
// using namespace std;

// vector <int> pairSum(vector<int> nums, int target){
//     vector <int> ans;
//     int n = nums.size();
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
// }

// int main(){
//     vector <int> nums = {2,5,7,11};
//     int target = 12;

//     vector<int> ans = pairSum(nums, target);
//     cout << ans[0] << "," << ans[1] << endl;


// }


// 2 pointer approach -> o(n)


#include<iostream>
#include<vector>
using namespace std;

vector <int> pairSum(vector<int> nums, int target){
    vector <int> ans;
    int n = nums.size();
    int start = 0;
    int end = n - 1;

    while(start < end){
       int pairSum = nums[start] + nums[end];

        if(pairSum > target){
            end--;
        }

        else if(pairSum < target){
            start++;
        }

        else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
 
}

int main(){
    vector <int> nums = {2,5,7,11};
    int target = 13;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << "," << ans[1] << endl;


}

