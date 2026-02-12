#include <iostream>
using namespace std;

int main() {

    int temperature;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature < 15) {
        cout << "Cold";
    }
    else if (temperature <= 30) {
        cout << "Normal";
    }
    else {
        cout << "Hot";
    }

    return 0;
}
