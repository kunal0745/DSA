#include<iostream>
#include<queue>
using namespace std;

int main(){
  queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    

    cout << "first element:" << q.front() << endl;
    cout << "last elemenr:" << q.back() << endl; 
    queue<int> q2;
    q2.swap(q); // element of s is now store in q2 and q is empty
    cout << "size of q:" << q.size() << endl;
    cout << "size of q2:" << q2.size() << endl;

    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;
}