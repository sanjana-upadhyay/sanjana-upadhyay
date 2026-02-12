#include <iostream>
using namespace std;

int main() {

    int number;
    int digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    int temp = number;

    digit = temp % 10;
    sum = sum + digit;
    temp = temp / 10;

    digit = temp % 10;
    sum = sum + digit;
    temp = temp / 10;

    digit = temp % 10;
    sum = sum + digit;

    if (sum % 3 == 0) {
        cout << "Number is divisible by 3";
    }
    else {
        cout << "Number is not divisible by 3";
    }

    return 0;
}
