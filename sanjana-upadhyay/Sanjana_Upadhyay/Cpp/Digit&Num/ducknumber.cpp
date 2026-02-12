#include <iostream>
using namespace std;

int main() {

    int number;
    int digit1;
    int digit2;
    int digit3;
    int digit4;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;

    if (digit1 != 0 && (digit2 == 0 || digit3 == 0 || digit4 == 0)) {
        cout << "Duck Number";
    }
    else {
        cout << "Not Duck Number";
    }

    return 0;
}
