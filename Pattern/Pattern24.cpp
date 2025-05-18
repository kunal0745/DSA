// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "no of rows:";
    cin >> n;

    int row = 1;

    while(row <= n ){
        int space = row - 1;
        while(space){
            cout << "  ";
            space = space -1;
        }

        int col = row;
        while(col <= n){
            cout << col << " ";
            col = col + 1;
        }
        cout << endl;
        row  = row + 1;
    }

}