#include <iostream>
using namespace std;

int main() {

    int number;
    int lastDigit;

    cout << "Enter a number: ";
    cin >> number;

    lastDigit = number % 10;

    if (lastDigit % 2 == 0) {
        cout << "Last digit is Even";
    }
    else {
        cout << "Last digit is Odd";
    }

    return 0;
}
