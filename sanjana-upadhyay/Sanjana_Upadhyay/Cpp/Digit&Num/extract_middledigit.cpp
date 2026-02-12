#include <iostream>
using namespace std;

int main() {

    int number;
    int middleDigit;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    middleDigit = (number / 10) % 10;

    cout << "Middle Digit = " << middleDigit;

    return 0;
}
