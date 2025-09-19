#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int rank = 1 + (rand() % 13);
    int suit = 1 + (rand() % 4);

    string rankName, suitName;
    switch(rank) {
        case 1: rankName = "Ace"; break;
        case 2: rankName = "2"; break;
        case 3: rankName = "3"; break;
        case 4: rankName = "4"; break;
        case 5: rankName = "5"; break;
        case 6: rankName = "6"; break;
        case 7: rankName = "7"; break;
        case 8: rankName = "8"; break;
        case 9: rankName = "9"; break;
        case 10: rankName = "10"; break;
        case 11: rankName = "Jack"; break;
        case 12: rankName = "Queen"; break;
        case 13: rankName = "King"; break;
    }
    switch(suit) {
        case 1: suitName = "Clubs"; break;
        case 2: suitName = "Diamonds"; break;
        case 3: suitName = "Hearts"; break;
        case 4: suitName = "Spades"; break;
    }

    cout << "You picked: " << rankName << " of " << suitName << endl;

    return 0;
}