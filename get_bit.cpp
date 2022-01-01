#include<iostream>
using namespace std;
int  getBit(int n, int pos){
   return(n&(1<<pos));
}
int main(){
cout<<"Enter the number to be checked: ";
int n;
cin>>n;
cout<<"Enter the position to be checked: ";
int pos;
cin>>pos;

int final = getBit(n, pos);

if(final==0){
    cout<<"The bit at position"<<" "<<pos<< " "<< "of the entered number is : 0";

}
else {
   cout<<"The bit at position"<<" "<<pos<< " "<< "of the entered number is : 1";
}

return 0;
}