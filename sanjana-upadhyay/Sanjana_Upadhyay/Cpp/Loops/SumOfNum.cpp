#include <iostream>
using namespace std;

int main(){
    int numb;
    cout<<"enter a numb : ";
    cin>>numb;
 
    int sum=0;

for(int i=1; i<=numb; i++){
    sum=sum+i;
    // cout<<sum;

}
cout<<sum;
return 0;

}