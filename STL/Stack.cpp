#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    

    cout << "Top element:" << s.top() << endl;;
    stack<int> s2;
    s2.swap(s); // element of s is now store in s2 and s is empty
    cout << "size of s:" << s.size() << endl;
    cout << "size of s2:" << s2.size() << endl;

    while(!s2.empty()){
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;

  

   







}