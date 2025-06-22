// -std=c++11

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v = {1,2,3,4,5};
    // cout << v[0] << endl;

    cout << "Size of v:" << v.size() << endl;

    // v.push_back(4);
    // cout << "Size of v after push back:" << v.size() << endl;

    // v.pop_back();
    // cout << "Size of v after pop back:" << v.size() << endl;

    // cout << "front:" << v.front() << endl;
    // cout << "back:" << v.back() << endl;

    // v.erase(v.begin()); // Erase the first element
    // v.erase(v.begin()+2); // Erase third element

    // v.insert(v.begin() + 1,6); // insert 6 at index 1

  

    vector<int>::iterator it; // auto
    for(it = v.begin(); it!= v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    v.clear(); // clear the size but not capacity
    cout << "Size:" << v.size() << endl;;
    cout << "Capacity:" << v.capacity() << endl;
    // for(int i : v){
    //     cout << i << " ";
    // }



    // vector <int> vec (3,0); // create a factor of size 3 with the value 0

// list is internally doubly linked list
// deque is internally implemeted as a dynammic array

// in deque random access is possible but list cannot


}