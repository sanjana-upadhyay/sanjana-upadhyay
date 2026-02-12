#include <iostream>
using namespace std;

int main() {

    int subject1;
    int subject2;
    int subject3;

    int total;

    float percentage;

    cout << "Enter marks of subject 1: ";
    cin >> subject1;

    cout << "Enter marks of subject 2: ";
    cin >> subject2;

    cout << "Enter marks of subject 3: ";
    cin >> subject3;

    total = subject1 + subject2 + subject3;

    percentage = (total / 300.0)*100;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%";

    return 0;
}
