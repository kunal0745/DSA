// check the given number is a power of 2 or not

#include<iostream>
#include<math.h>
using namespace std;

bool IsPowerOfTwo(int num){
    int ans = 1;

    for(int i = 0; i <= 30; i++){
        // int ans = pow(2, i);

        if(num == ans) return true;

        if(ans < INT32_MAX/2){
            ans*= 2;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    if(IsPowerOfTwo(n)){
        cout << "number is a power of 2";
    }
    else{
        cout << "number is not a power of 2";
    }

}