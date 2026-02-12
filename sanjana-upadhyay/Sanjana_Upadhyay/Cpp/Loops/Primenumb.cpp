#include <iostream>
using namespace std;

int main(){

int numb;
cin>>numb;

int count=0;

for(int i =2; i<numb-1;i++){
    if(numb%i==0){
        count++;
       
    }
  
}
cout<<count<<endl;

if(count==0){
cout<<"prime";
}
 else{
    cout<<"not prime";
 }

return 0;

}

