#include <iostream>
using namespace std;

int main() {

    int num1;
    int num2;
    int temp;

    cout << "Enter number1: ";
    cin >> num1;

    cout << "Enter  number2: ";
    cin >> num2;

    cout << "Before Swapping: " << num1 << ", " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After Swapping: " << num1 << ", " << num2;

    return 0;
}
