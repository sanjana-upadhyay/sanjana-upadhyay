#include <iostream>
using namespace std;

int main(){
 
    
        int base;
        cout<<"base: ";
        cin>>base;

        int exponent;
        cout<<"exponent: ";
        cin>>exponent;

    int power=1;
    for(int i=1; i<=exponent;i++){
        power= power*base;
    }
  cout<<power;
    

return 0;

}



