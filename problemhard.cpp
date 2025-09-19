//
// Created by xoshi on 9/19/2025.
//

#include "problemhard.h"

#include <cstdlib>
#include <iostream>
#include <ostream>
#include <ranges>
using namespace std;
int main() {
    srand(time(0));
    int generator= 10+rand()%90;
    int userPrediction;
    cout << "==NUMBER PREDICTION GAME" << endl;
    cout << "I have generated a random number" << endl;
    cout << "Enter your generation number (10-99): "<< endl;
    cin >> userPrediction;
 if (userPrediction <10 || userPrediction >99 ) {
     cout << "Wrong Range it should be between 10 and 99" << endl;
     return 1;
 }
    int userDigit1=userPrediction / 10;
    int userDigit2=userPrediction%10;
    int generatorDigit1=generator / 10;
    int generatorDigit2=generator % 10;
    if ((generatorDigit1==userDigit1 && generatorDigit1==userDigit2)&&(generatorDigit2==userDigit1 && generatorDigit2==userDigit2)) {
        cout << endl << "100%" << endl;
    }
}

