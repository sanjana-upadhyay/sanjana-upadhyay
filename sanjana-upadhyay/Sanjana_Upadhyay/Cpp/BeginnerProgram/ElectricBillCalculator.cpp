#include <iostream>
using namespace std;

int main() {

    float unitsConsumed;
    float ratePerUnit;
    float totalBill;

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;

    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;

    totalBill = unitsConsumed * ratePerUnit;

    cout << "Total Electricity Bill = " << totalBill;

    return 0;
}
