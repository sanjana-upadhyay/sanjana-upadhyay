#include <iostream>
using namespace std;



int main()
{

    int Number;
    cout<<"Enter number: ";
    cin >> Number;
    

    int factorial =1;

    for (int i = 1; i <= Number; i++){
      factorial = factorial * i;
    
     cout << "Factorial = " << factorial ;

    
    }
return 0;
}