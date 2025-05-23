// find the duplicate number in an array

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& arr) {
    int n = arr.size();
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n; ++i) {
        xor1 ^= arr[i];
    }

    for (int i = 1; i < n; ++i) {
        xor2 ^= i;
    }

    return xor1 ^ xor2;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 4};

    int duplicate = findDuplicate(arr);
    cout << "Duplicate number is: " << duplicate << endl;

    return 0;
}