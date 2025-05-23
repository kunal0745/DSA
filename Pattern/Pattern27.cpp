// 9 8 7
// 6 5 4
// 3 2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int temp = n * n;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << temp;
            temp--;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

}