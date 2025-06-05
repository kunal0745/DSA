// -std=c++11

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v = {1,2,3};
    // cout << v[0] << endl;

    cout << "Size of v:" << v.size() << endl;

    v.push_back(4);
    cout << "Size of v after push back:" << v.size() << endl;

    v.pop_back();
    cout << "Size of v after pop back:" << v.size() << endl;

    cout << "front:" << v.front() << endl;
    cout << "back:" << v.back() << endl;


    // vector <int> vec (3,0); // create a factor of size 3 with the value 0

    for(int i : v){
        cout << i << endl;
    }

}