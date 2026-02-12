#include <iostream>
using namespace std;

int main() {

    int number;
    int firstDigit;
    int middleDigit;
    int lastDigit;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    firstDigit = number / 100;
    middleDigit = (number / 10) % 10;
    lastDigit = number % 10;

    if (firstDigit == lastDigit) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}
