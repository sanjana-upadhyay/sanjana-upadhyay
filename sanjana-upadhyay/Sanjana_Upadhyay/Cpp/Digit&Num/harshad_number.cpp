#include <iostream>
using namespace std;

int main() {

    int number;
    int digit1;
    int digit2;
    int digit3;
    int sum;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;

    sum = digit1 + digit2 + digit3;

    if (number % sum == 0) {
        cout << "Harshad Number";
    }
    else {
        cout << "Not Harshad Number";
    }

    return 0;
}
