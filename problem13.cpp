#include <iostream>
using namespace std;

int main() {
    char input;
    cout << "Enter traffic light color (g/y/r): ";
    cin >> input;

    switch(input) {
        case 'g':
            cout << "Go!";
            break;
        case 'y':
            cout << "Get ready!";
            break;
        case 'r':
            cout << "Stop";
            break;
        default:
            cout << "Invalid input";
    }

    return 0;
}