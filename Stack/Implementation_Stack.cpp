#include <iostream>
#define MAX 5 
using namespace std;

class Stack {
private:
    int stack[MAX]; 
    int top; 

public:
    Stack() { 
        top = -1; 
    } 

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        stack[++top] = value;
        cout << value << " pushed into stack.\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! No element to pop.\n";
            return;
        }
        cout << stack[top--] << " popped from stack.\n";
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Top element: " << stack[top] << endl;
    }

   
    void display() {
        if (top == -1) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
    return 0;
}
