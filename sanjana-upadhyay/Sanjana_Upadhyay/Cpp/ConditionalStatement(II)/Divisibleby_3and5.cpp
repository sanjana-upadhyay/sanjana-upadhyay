#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter number: ";
    cin >> number;

    if (number%3==0 && number%5==0) {
        cout << "Divisible by Both";
    }
    else if (number%3==0) {
        cout << "Divisible by 3";
    }
    else if (number%5==0) {
        cout << "Divisible by 5";
    }
    else {
        cout << "Not Divisible by 3 or 5";
    }

    return 0;
}
