#include <iostream>
using namespace std;

int main() {

    int totalDays;
    int years;
    int weeks;
    int remainingDays;

    cout << "Enter total number of days: ";
    cin >> totalDays;

    years = totalDays / 365;
    totalDays = totalDays % 365;

    weeks = totalDays / 7;
    remainingDays = totalDays % 7;

    cout << "Years = " << years << endl;
    cout << "Weeks = " << weeks << endl;
    cout << "Days = " << remainingDays;

    return 0;
}
