#include <iostream>
using namespace std;

int main() {

    float radius;
    float area;
    float pi;

    pi = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;

    area = pi * radius * radius;

    cout << "Area of Circle = " << area;

    return 0;
}
