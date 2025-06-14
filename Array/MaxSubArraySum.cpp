#include<iostream>
using namespace std;

int main(){

    int arr[5] = {2,-3,6,5,11};
    int maxSum = INT32_MIN;

    for(int st = 0; st < 5; st++){
        int currSum = 0;
        for(int end = st; end < 5; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Max sub array sum is:" << maxSum;
}