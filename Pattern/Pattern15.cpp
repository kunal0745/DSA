// A
// B B
// C C C

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "no of rows:";
    cin >> n;

    int row = 1;
    
    
    while(row <= n){
        int col = 1;
        while(col <= row){
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

}