#include <iostream>
using namespace std;
int main()
{
    // Перше завдання
    int country;
    cout << "Enter a number country" << endl;
    cout << "[1] - Ukraine" << endl;
    cout << "[2] - USA" << endl;
    cout << "[3] - Germany" << endl;
    cout << "[4] - Poland" << endl;
    cout << "[5] - Chezc" << endl;
    cin >> country;
    // Перший варіант
    if (country == 1) {
        cout << "Kyiv" << endl;
    }
    else if (country == 2) {
        cout << "Washington" << endl;
    }
    else if (country == 3) {
        cout << "Berlin" << endl;
    }
    else if (country == 4) {
        cout << "Warsaw" << endl;
    }
    else if (country == 5) {
        cout << "Prague" << endl;
    }
    else {
        cout << "Wrong number" << endl;
    }
    // Другий варіант
    switch (country)
    {
    case 1:
        cout << "Kyiv" << endl;
        break;
    case 2:
        cout << "Washington" << endl;
        break;
    case 3:
        cout << "Berlin" << endl;
        break;
    case 4:
        cout << "Warsaw" << endl;
        break;
    case 5:
        cout << "Prague" << endl;
        break;

    default:
        cout << "Wrong number" << endl;
        break;
    }
    // Друге завдання
    int day;
    cout << "Enter a number day" << endl;
    cout << "[1] - Monday" << endl;
    cout << "[2] - Tuesday" << endl;
    cout << "[3] - Wednesday" << endl;
    cout << "[4] - Thursday" << endl;
    cout << "[5] - Friday" << endl;
    cout << "[6] - Saturday" << endl;
    cout << "[7] - Sunday" << endl;
    cin >> day;
    // Перший варіант
    switch (day) {
    case 6:
    case 7:
        cout << "A Weekend day" << endl;
        break;
    default:
        cout << "Not a weekend day" << endl;
        break;
    }
    // Другий варіант
    if (day == 6 or day == 7) {
        cout << "A Weekend day" << endl;
    }
    else{
        cout << "Not a weekend day" << endl;
    }
    // Третє завдання
    int west;
    cout << "Enter a number day" << endl;
    cout << "[1] - North" << endl;
    cout << "[2] - South" << endl;
    cout << "[3] - East" << endl;
    cout << "[4] - West" << endl;
    cin >> west;
    // Перший варіант
    switch (west)
    {
    case 1:
        cout << "South" << endl;
    case 2:
        cout << "North" << endl;
    case 3:
        cout << "West" << endl;
    case 4:
        cout << "East" << endl;
    default:
        cout << "Wrong num" << endl;
        break;
    }
    // Другий варіант
    if (west == 1) {
        cout << "South" << endl;
    }
    else if (west == 2) {
        cout << "South" << endl;
    }
    else if (west == 3) {
        cout << "South" << endl;
    }
    else if (west == 4) {
        cout << "South" << endl;
    }
    else {
        cout << "Wrong num" << endl;
    }
}
