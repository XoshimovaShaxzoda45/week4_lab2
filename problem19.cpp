#include <iostream>
using namespace std;

int main() {
    double weight;
    cout << "Enter the weight of the package (kg): ";
    cin >> weight;

    if (weight <= 0) {
        cout << "Invalid input.";
    } else if (weight > 20) {
        cout << "The package cannot be shipped.";
    } else {
        if (weight <= 1) {
            cout << "3500";
        } else if (weight <= 3) {
            cout << "5500";
        } else if (weight <= 10) {
            cout << "8500";
        } else {
            cout << "10500";
        }
    }

    return 0;
}