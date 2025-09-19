#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int generatedNumber = 10 + (rand() % 90);
    int userPrediction;
    cout << "=== NUMBER PREDICTION GAME ===" << endl;
    cout << "I've generated a random two-digit number (10-99)." << endl;
    cout << "Try to predict the number!" << endl << endl;
    cout << "Enter your prediction (10-99): ";
    cin >> userPrediction;
    if (userPrediction < 10 || userPrediction > 99) {
        cout << "Error: Please enter a valid two-digit number (10-99)" << endl;
        return 1;
    }
    int genDigit1 = generatedNumber / 10;
    int genDigit2 = generatedNumber % 10;
    int userDigit1 = userPrediction / 10;
    int userDigit2 = userPrediction % 10;
    cout << endl << "=== RESULTS ===" << endl;
    cout << "Generated number: " << generatedNumber << endl;
    cout << "Your prediction:  " << userPrediction << endl;
    cout << endl;
    if (userPrediction == generatedNumber) {
        cout << "🎉 Accuracy: 100% - PERFECT MATCH!" << endl;
        cout << "You guessed the exact number!" << endl;
    }
    else {
        bool firstDigitMatch = (userDigit1 == genDigit1 || userDigit1 == genDigit2);
        bool secondDigitMatch = (userDigit2 == genDigit1 || userDigit2 == genDigit2);

        if (firstDigitMatch && secondDigitMatch) {
            cout << "Accuracy: 50% - BOTH DIGITS MATCH (but in wrong positions)" << endl;
            cout << "Both your digits are correct, but not in the right order!" << endl;
        }
        else if (firstDigitMatch || secondDigitMatch) {
            cout << "Accuracy: 50% - ONE DIGIT MATCHES" << endl;
            if (firstDigitMatch) {
                cout << "Your first digit (" << userDigit1 << ") is correct!" << endl;
            }
            if (secondDigitMatch) {
                cout << "Your second digit (" << userDigit2 << ") is correct!" << endl;
            }
        }
        else {
            cout << "Accuracy: 0% - NO DIGITS MATCH" << endl;
            cout << "None of your digits match the generated number." << endl;
        }
        cout << endl << "Digit analysis:" << endl;
        cout << "Your digits: " << userDigit1 << " and " << userDigit2 << endl;
        cout << "Actual digits: " << genDigit1 << " and " << genDigit2 << endl;
    }
    cout << endl << "=== GAME OVER ===" << endl;

    return 0;
}