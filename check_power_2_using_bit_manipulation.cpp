#include<iostream>
using namespace std;
int powercheck(int n){
    if(n==0){
        return 1;
    }
    else{
    return(n&(n-1));
    }
}
int main(){
cout<<"Enter the number to be checked:";
int n;
cin>>n;
int ans=powercheck(n);
if(ans==0){
    cout<<"The entered number is power of 2.";
}
else{
    cout<<"The entered number is not power of 2.";
}
return 0;
}