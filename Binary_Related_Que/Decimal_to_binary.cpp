// convert decimal number into binary number

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int ans = 0;
    int place = 1;

    while (n) {
        int bit = n & 1;
        ans = bit * place + ans;
        place *= 10;
        n = n >> 1;
    }

    cout << "Binary number is: " << ans << endl;
    return 0;
}
