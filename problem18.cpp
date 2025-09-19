#include <iostream>
using namespace std;

int main() {
    char language;
    cout << "Choose language (u - Uzbek, e - English, r - Russian, g - German): ";
    cin >> language;
    switch(language) {
        case 'u':
        case 'U':
            cout << "Salom!";
            break;
        case 'e':
        case 'E':
            cout << "Hello!";
            break;
        case 'r':
        case 'R':
            cout << "Privet!";
            break;
        case 'g':
        case 'G':
            cout << "Hallo!";
            break;
        default:
            cout << "I do not know this language:(";
    }

    return 0;
}