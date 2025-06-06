// write a program that takes an unsigned integer and returns the number of 1 bits it has(also name as hamming weight)

#include<iostream>
using namespace std;

int main()
{
     uint32_t n;
     cout << "Enter a number:";
     cin >> n;

     int ans = 0;
     while(n!=0){
        if(n & 1){
            ans++;
        }
        n = n>>1;
     }
     cout << "No of 1 bit in a given number:" << ans;
}