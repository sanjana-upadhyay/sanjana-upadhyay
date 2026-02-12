#include <iostream>
using namespace std;



int main()
{

    int Number;
    cout<<"Enter number: ";
    cin >> Number;
    //cout<<"Enter number: ";

    for (int i = 1; i <= Number; i++)
    {
        cout << 2*i-1 << " ";
    }
    return 0;
}