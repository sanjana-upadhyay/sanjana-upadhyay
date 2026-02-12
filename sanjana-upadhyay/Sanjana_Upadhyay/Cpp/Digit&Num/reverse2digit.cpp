#include <iostream>
using namespace std;

int main() {

    int number;
    int firstDigit;
    int secondDigit;
    int reverseNumber;

    cout << "Enter a 2-digit number: ";
    cin >> number;

    firstDigit = number / 10;
    secondDigit = number % 10;

    reverseNumber = (secondDigit * 10) + firstDigit;

    cout << "Reversed Number = " << reverseNumber;

    return 0;
}
