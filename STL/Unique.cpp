#include <iostream>
#include <vector>
using namespace std;

int FindUnique(vector<int>& arr) {
    int ans = 0;
    for(int num : arr) {
        ans ^= num;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter vector elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique = FindUnique(arr);
    cout << "Unique element is: " << unique;

    return 0;
}