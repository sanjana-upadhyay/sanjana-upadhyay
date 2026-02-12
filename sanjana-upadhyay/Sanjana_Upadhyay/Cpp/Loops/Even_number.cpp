#include <iostream>
using namespace std;



int main()
{

    int Number;
    cout<<"enter a num: ";
    cin >> Number;


    // for (int i = 1; i <= Number; i++)
    // {
    //     cout << 2*i << " ";
    // }

int count = 0;
for (int i = 1; i <= Number; i++){
    if(i%2==0){
        cout<<i<<endl;
         count++;
    }
}
     //count++;
     cout<<count ;


    return 0;
}