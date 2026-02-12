#include <iostream>
using namespace std;

int main() {

    float amount;
    float discount;
    float finalAmount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount >= 1000) {
        discount = amount * 0.10;
    }
    else {
        discount = 0;
    }

    finalAmount = amount - discount;

    cout << "Final Amount = " << finalAmount;

    return 0;
}
