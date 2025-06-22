// Set stores only unique valuse duplicate is not allowed
// internally use self balancing tree

#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout << "Size:" << s.size() << endl;

    for(int i : s){
        cout << i << " ";
    }
    cout << endl;

}
// multiset - allow duplicates
// unordered_set - data is unorder


