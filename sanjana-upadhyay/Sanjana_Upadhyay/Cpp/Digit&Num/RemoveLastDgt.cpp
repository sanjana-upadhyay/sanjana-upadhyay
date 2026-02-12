#include <iostream>
using namespace std;

int main() {

    int number;
    int newNumber;

    cout << "Enter a number: ";
    cin >> number;

    newNumber = number / 10;

    cout << "Number after removing last digit = " << newNumber;

    return 0;
}
