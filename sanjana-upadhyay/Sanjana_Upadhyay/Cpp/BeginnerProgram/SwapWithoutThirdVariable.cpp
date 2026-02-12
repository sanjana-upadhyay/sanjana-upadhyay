#include <iostream>
using namespace std;

int main() {

    int num1;
    int num2;

    cout<< "Enter  number1:";
    cin>> num1;

    cout<< "Enter  numbe 2:";
    cin>> num2;

    cout<< "Before Swapping: " << num1 << " " << num2 << endl;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After Swapping: " << num1 << " " << num2;

    return 0;
}
