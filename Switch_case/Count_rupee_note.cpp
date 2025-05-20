#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int note100 = 0, note50 = 0, note20 = 0, note1 = 0;
    int choice = 1; 
    while (amount > 0) {
        switch (choice) {
            case 1:
                note100 = amount / 100;
                amount = amount % 100;
                choice++; 
                break;

            case 2:
                note50 = amount / 50;
                amount = amount % 50;
                choice++;
                break;

            case 3:
                note20 = amount / 20;
                amount = amount % 20;
                choice++;
                break;

            case 4:
                note1 = amount;
                amount = 0;
                choice++;
                break;
        }
    }

    cout << "Minimum notes required:" << endl;
    if (note100 > 0) cout << "100 notes: " << note100 << endl;
    if (note50 > 0) cout << "50 notes: " << note50 << endl;
    if (note20 > 0) cout << "20 notes: " << note20 << endl;
    if (note1 > 0) cout << "1 notes: " << note1 << endl;

}