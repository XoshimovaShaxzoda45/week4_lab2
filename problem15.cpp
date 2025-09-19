#include <iostream>
using namespace std;

int main() {
    int today, daysElapsed;

    cout << "Enter today's day (0-6, Sunday=0): ";
    cin >> today;
    cout << "Enter the number of days elapsed since today: ";
    cin >> daysElapsed;

    int futureDay = (today + daysElapsed) % 7;
    string todayName;
    switch(today) {
        case 0: todayName = "Sunday"; break;
        case 1: todayName = "Monday"; break;
        case 2: todayName = "Tuesday"; break;
        case 3: todayName = "Wednesday"; break;
        case 4: todayName = "Thursday"; break;
        case 5: todayName = "Friday"; break;
        case 6: todayName = "Saturday"; break;
        default: todayName = "Invalid day";
    }

    string futureDayName;
    switch(futureDay) {
        case 0: futureDayName = "Sunday"; break;
        case 1: futureDayName = "Monday"; break;
        case 2: futureDayName = "Tuesday"; break;
        case 3: futureDayName = "Wednesday"; break;
        case 4: futureDayName = "Thursday"; break;
        case 5: futureDayName = "Friday"; break;
        case 6: futureDayName = "Saturday"; break;
        default: futureDayName = "Invalid day";
    }

    cout << "Today is " << todayName << " and the future day is " << futureDayName;

    return 0;
}