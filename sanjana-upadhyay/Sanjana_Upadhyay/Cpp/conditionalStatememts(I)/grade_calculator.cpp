#include <iostream>
using namespace std;

int main() {

    int marks;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade A";
    }
    else if (marks >= 70) {
        cout << "Grade B";
    }
    else if (marks >= 40) {
        cout << "Grade C";
    }
    else {
        cout << "Grade F";
    }

    return 0;
}
