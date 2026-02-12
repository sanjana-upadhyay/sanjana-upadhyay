#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    int D;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    D = b*b - 4*a*c;

    if (D > 0) {
        cout << "Real and Distinct Roots";
    }
    else if (D == 0) {
        cout << "Real and Equal Roots";
    }
    else {
        cout << "Imaginary Roots";
    }

    return 0;
}
