#include <iostream>
using namespace std;

int main() {

    float costPrice;
    float sellingPrice;
    float amount;

    cout << "Enter cost price: ";
    cin >> costPrice;

    cout << "Enter selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        cout << "Profit = " << amount;
    }
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        cout << "Loss = " << amount;
    }
    else {
        cout << "No Profit No Loss";
    }

    return 0;
}
