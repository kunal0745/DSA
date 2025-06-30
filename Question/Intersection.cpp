// find the intersection of two sorted arrays A and B.

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> arrayIntersection(vector<int>& A, vector<int>& B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = 0, j = 0;
    vector<int> result;

    while (i < A.size() && j < B.size()) {
        if (A[i] == B[j]) {
            result.push_back(A[i]);
            i++;
            j++;
        } else if (A[i] < B[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}

int main() {
    vector<int> A =  {7,3,1};
    vector<int> B = {1,3,7};

    vector<int> intersection = arrayIntersection(A, B);

    cout << "Intersection: ";
    for (auto num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}