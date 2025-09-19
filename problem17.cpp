#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    switch(number > 0 ? 1 : (number < 0 ? -1 : 0)) {
        case 1:
            cout << "Positive";
            break;
        case -1:
            cout << "Negative";
            break;
        case 0:
            cout << "It is zero";
            break;
    }

    return 0;
}