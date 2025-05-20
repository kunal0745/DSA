// Subtract the product and sum of the digit of an integer

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int product = 1;
    int sum = 0;

    while(n > 0){
        int rem = n % 10;
        product = product * rem;
        sum = sum + rem;
        n = n/10;
    }

    int ans = product - sum;
    cout << "Answer is:" << ans;
}