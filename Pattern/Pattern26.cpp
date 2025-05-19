// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "no of rows:";
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        
        while(col <= n - row + 1){
            cout << col;
            col = col + 1;
        }

        col = 1;
        while(col <= (row - 1)* 2){
            cout << "*";
            col = col + 1;
        }

        col = n - row + 1;
        while(col >= 1){
            cout << col;
            col = col - 1;
        }
        cout << endl;
        row = row + 1;

    }
}