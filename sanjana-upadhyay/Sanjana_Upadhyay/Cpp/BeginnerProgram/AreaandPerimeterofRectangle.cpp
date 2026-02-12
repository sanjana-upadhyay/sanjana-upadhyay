#include <iostream>
using namespace std;

int main() {

    float length;
    float width;
    float area;
    float perimeter;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter;

    return 0;
}
