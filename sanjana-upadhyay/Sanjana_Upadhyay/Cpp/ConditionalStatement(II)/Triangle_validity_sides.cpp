#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a+b>c && a+c>b && b+c>a) {
        cout << "Valid";
    }
    else {
        cout << "Invalid";
    }

    return 0;
}
