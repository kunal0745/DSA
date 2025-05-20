#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter any number:";
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n){
        int digit = n % 10;
        if(digit == 1){
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << "Decima number is:" << ans;
    
}