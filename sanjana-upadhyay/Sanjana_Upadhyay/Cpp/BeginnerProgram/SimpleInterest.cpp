#include <iostream>
using namespace std;

int main() {

    float P;
    float R;
    float T;
    float simpleInterest;

    cout << "Enter principal amount: ";
    cin >> P;

    cout << "Enter rate of interest: ";
    cin >> R;

    cout << "Enter time period: ";
    cin >> T;

    simpleInterest = (P*R*T)/100;

    cout << "Simple Interest = " << simpleInterest;

    return 0;
}
