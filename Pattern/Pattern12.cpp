// A B C
// A B C
// A B C

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "no of rows:";
    cin >> n;

    int row = 1;
    
    
    while(row <= n){
        int col = 1;
        // char ch = 'A';

        while(col <= n){
            char ch = 'A' + col - 1;
            cout << ch << " ";  
            // ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

}