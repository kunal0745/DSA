// pointers are special variable that store the address of other variables

#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout << &a << endl; // check the address of 'a' in the memory

    int *ptr = &a; // 'ptr' is a pointer variable which store the address of variable 'a'
    cout << ptr << endl;


    int **ptr1 = &ptr; // pointer of pointer
    cout << ptr1 << endl;

    // '*' -> derefernce operator ( value at address )
    cout << *(&a) << endl; // value at address 'a'
    cout << *(ptr) << endl; // value at address 'ptr'

    // null pointer
    int *x;
    cout << x; // garbage value

    int *y = NULL;
    cout << y; // print 0
}