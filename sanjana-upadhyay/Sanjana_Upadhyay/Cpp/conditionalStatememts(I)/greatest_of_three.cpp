#include <iostream>
using namespace std;

int main() {

    int num1;
    int num2;
    int num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "Greatest = " << num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        cout << "Greatest = " << num2;
    }
    else {
        cout << "Greatest = " << num3;
    }

    return 0;
}
