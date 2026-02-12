#include <iostream>
using namespace std;

int main() {

    int number;
    int lastDigit;

    cout << "Enter a number: ";
    cin >> number;

    lastDigit = number % 10;

    cout << "Last Digit = " << lastDigit;

    return 0;
}
