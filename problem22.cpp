#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int randomNumber = 1 + (rand() % 100);
    char userGuess;

    cout << "I've generated a random number. Is it even or odd? (e/o): ";
    cin >> userGuess;
    bool isEven = (randomNumber % 2 == 0);
    bool userGuessedEven = (userGuess == 'e' || userGuess == 'E');
    bool userGuessedOdd = (userGuess == 'o' || userGuess == 'O');

    cout << "The number was: " << randomNumber << endl;

    if ((isEven && userGuessedEven) || (!isEven && userGuessedOdd)) {
        cout << "Correct! ";
        if (isEven) {
            cout << randomNumber << " is even.";
        } else {
            cout << randomNumber << " is odd.";
        }
    } else {
        cout << "Incorrect! ";
        if (isEven) {
            cout << randomNumber << " is even, not odd.";
        } else {
            cout << randomNumber << " is odd, not even.";
        }
    }

    return 0;
}