#include<iostream>
#include<vector>
using namespace std;


int main(){
    pair<int,int> p = {1,2};

    cout << p.first << endl;
    cout << p.second << endl;

    // pair of pair
    pair <int, pair<char,int>> p1 = {1, {'a',3}};

    cout << p1.first << endl;
    cout << p1.second.first << endl;
    cout << p1.second.second << endl;

    // Vector in pair
    vector<pair<int,int>> vec = {{1,2},{3,4}};
    vec.push_back({5,6});
    vec.emplace_back(7,8);

    for(pair<int,int> p : vec){
        cout << p.first << " " << p.second << endl;
    }
    



    




}