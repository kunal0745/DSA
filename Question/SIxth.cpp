// find the intersection of two sorted arrays A and B.

#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayIntersection(vector<int>& A, vector<int>& B) {
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
    vector<int> A = {1, 2, 1, 1, 3, 4};
    vector<int> B = {2, 1, 4, 6};

    vector<int> intersection = arrayIntersection(A, B);

    cout << "Intersection: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}