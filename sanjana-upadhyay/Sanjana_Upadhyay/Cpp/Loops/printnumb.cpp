// program to print number

#include <iostream>
using namespace std;

// using For loop

int main()
{

    int Number;
    cin >> Number;

    for (int i = 1; i <= Number; i++)
    {
        cout << i << " ";
    }

    // while loop

    int i = 1;
    while (i <= Number)
    {
        cout << i << endl;
        i++;
    }
    
    return 0;
}
    // doWhile loop

    //int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= Number);


//     return 0;
// }
