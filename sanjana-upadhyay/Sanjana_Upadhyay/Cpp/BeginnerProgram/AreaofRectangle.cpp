#include <iostream>
using namespace std;

int main() {

    float length;
    float width;
    float area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;

    cout << "Area of Rectangle = " << area;

    return 0;
}
