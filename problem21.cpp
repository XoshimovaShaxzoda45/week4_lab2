#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch(month) {
        case 1:
            cout << "In January there is:\n- New Year's Day, 1 January";
            break;
        case 2:
            cout << "In February there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change.";
            break;
        case 3:
            cout << "In March there is:\n- International Women's Day, 8 March\n- Navruz, 21 March";
            break;
        case 4:
            cout << "In April there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change.";
            break;
        case 5:
            cout << "In May there is:\n- Memorial Day, 9 May";
            break;
        case 6:
            cout << "In June there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change.";
            break;
        case 7:
            cout << "In July there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change.";
            break;
        case 8:
            cout << "In August there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change.";
            break;
        case 9:
            cout << "In September there is:\n- Independence Day, 1 September";
            break;
        case 10:
            cout << "In October there is:\n- Teacher's Day, 1 October";
            break;
        case 11:
            cout << "In November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change.";
            break;
        case 12:
            cout << "In December there is:\n- Constitution Day, 8 December";
            break;
        default:
            cout << "Invalid month number";
    }

    return 0;
}