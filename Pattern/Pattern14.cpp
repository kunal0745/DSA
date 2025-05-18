// A B C
// B C D
// C D E

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "no of rows:";
    cin >> n;

    int row = 1;
    
    
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + row + col - 2;  // row + col - 1 (derive from this formula)
            cout <<  ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

}