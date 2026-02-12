#include <iostream>
using namespace std;

int main() {

    float side;
    float area;
    float perimeter;

    cout << "Enter side of square: ";
    cin >> side;

    area = side * side;
    perimeter = 4 * side;

    cout << "Area of Square = " << area << endl;
    cout << "Perimeter of Square = " << perimeter;

    return 0;
}
