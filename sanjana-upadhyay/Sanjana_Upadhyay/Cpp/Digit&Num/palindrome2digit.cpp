#include <iostream>
using namespace std;

int main() {

    int number;
    int firstDigit;
    int lastDigit;

    cout << "Enter a 2-digit number: ";
    cin >> number;

    firstDigit = number / 10;
    lastDigit = number % 10;

    if (firstDigit == lastDigit) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}
