#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q;
    q.push(5); // time complexity of push and pop is 0(logn)
    q.push(4);
    q.push(10);
    q.push(6);

    while(!q.empty()){
        cout << q.top() << " ";// pop complexity is 0(1)
        q.pop(); 
    }

    

}