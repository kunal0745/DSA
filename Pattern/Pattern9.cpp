// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "no of rows :";
    cin >> n;

    int row = 1;
    
    
    while(row <= n){
        int count = row;
        int col = 1;
        while(col <= row){
            cout << count << " ";  
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

}