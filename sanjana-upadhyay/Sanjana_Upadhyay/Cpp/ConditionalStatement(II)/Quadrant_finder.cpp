#include <iostream>
using namespace std;

int main() {

    int x;
    int y;

    cout << "Enter x coordinate: ";
    cin >> x;

    cout << "Enter y coordinate: ";
    cin >> y;

    if (x==0 && y==0) {
        cout << "Origin";
    }
    else if (x==0) {
        cout << "On Y Axis";
    }
    else if (y==0) {
        cout << "On X Axis";
    }
    else if (x>0 && y>0) {
        cout << "Quadrant I";
    }
    else if (x<0 && y>0) {
        cout << "Quadrant II";
    }
    else if (x<0 && y<0) {
        cout << "Quadrant III";
    }
    else {
        cout << "Quadrant IV";
    }

    return 0;
}
