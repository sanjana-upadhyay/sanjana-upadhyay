#include <iostream>
using namespace std;

int main() {
 int num1;
 int  num2;
 int   num3;

 int  sum;

 float average;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;

    average = sum/ 3;


    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}
