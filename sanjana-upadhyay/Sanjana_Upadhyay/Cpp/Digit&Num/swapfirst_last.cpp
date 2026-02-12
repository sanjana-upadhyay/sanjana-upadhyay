#include <iostream>
using namespace std;

int main() {

    int number;
    int firstDigit;
    int middleDigit;
    int lastDigit;
    int newNumber;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    firstDigit = number / 100;
    middleDigit = (number / 10) % 10;
    lastDigit = number % 10;

    newNumber = (lastDigit * 100) + (middleDigit * 10) + firstDigit;

    cout << "Number after swapping = " << newNumber;

    return 0;
}
